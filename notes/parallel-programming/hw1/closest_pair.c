#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#ifndef ENABLE_CILK
    #define SPAWN
    #define SYNC
#else
    #include <cilk/cilk.h>
    #define SPAWN cilk_spawn
    #define SYNC cilk_sync
#endif 

typedef long long Distance;

static const Distance DISTANCE_MAX = LLONG_MAX;

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;
    Point b;
    Distance dist;
} PointPair;

typedef int (*PointComparator)(Point, Point);

Distance distance(Point a, Point b) {
    Distance dx = a.x - b.x;
    Distance dy = a.y - b.y;
    return dx * dx + dy * dy;
}

PointPair naive_closest_pair(Point *points, int n) {
    PointPair closest_pair;
    closest_pair.dist = DISTANCE_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            Distance d = distance(points[i], points[j]);
            if (d < closest_pair.dist) {
                closest_pair.a = points[i];
                closest_pair.b = points[j];
                closest_pair.dist = d;
            }
        }
    }
    return closest_pair;
}

PointPair min_pair(PointPair a, PointPair b) {
    return a.dist < b.dist ? a : b;
}

void merge(Point *points, int begin, int mid, int end, PointComparator cmp) {
    int n = end - begin;
    Point *temp = (Point *)malloc(n * sizeof(Point));
    int i = begin, j = mid, k = 0;
    while (i < mid && j < end) {
        if (cmp(points[i], points[j]) < 0) {
            temp[k++] = points[i++];
        } else {
            temp[k++] = points[j++];
        }
    }
    while (i < mid) {
        temp[k++] = points[i++];
    }
    while (j < end) {
        temp[k++] = points[j++];
    }
    for (int i = 0; i < n; i++) {
        points[begin + i] = temp[i];
    }
    free(temp);
}

void parallel_merge_sort(Point *points, int begin, int end, PointComparator cmp) {
    if (end - begin <= 1) {
        return;
    }
    int mid = (begin + end) / 2;
    SPAWN parallel_merge_sort(points, begin, mid, cmp);
    parallel_merge_sort(points, mid, end, cmp);
    SYNC;
    merge(points, begin, mid, end, cmp);
}

int cmp_x(Point a, Point b) {
    return a.x - b.x;
}

int cmp_y(Point a, Point b) {
    return a.y - b.y;
}

PointPair closest_pair(Point *points, int begin, int end) {
    if (end - begin <= 4) {
        return naive_closest_pair(points + begin, end - begin);
    }
    int mid = (begin + end) / 2;
    PointPair left_closest_pair = SPAWN closest_pair(points, begin, mid);
    PointPair right_closest_pair = closest_pair(points, mid + 1, end);
    SYNC;
    PointPair closest_pair = min_pair(left_closest_pair, right_closest_pair);
    Distance min_distance = closest_pair.dist;
    // get points within min_distance of the middle line
    Point *middle_points = (Point *)malloc((end - begin) * sizeof(Point));
    int middle_points_count = 0;
    for (int i = begin; i < end; i++) {
        if (abs(points[i].x - points[mid].x) < min_distance) {
            middle_points[middle_points_count++] = points[i];
        }
    }
    // sort middle_points by y
    parallel_merge_sort(middle_points, 0, middle_points_count, cmp_y);
    // find closest pair within middle_points
    for (int i = 0; i < middle_points_count; i++) {
        for (int j = i + 1; j < middle_points_count && middle_points[j].y - middle_points[i].y < min_distance; j++) {
            Distance d = distance(middle_points[i], middle_points[j]);
            if (d < min_distance) {
                closest_pair.a = middle_points[i];
                closest_pair.b = middle_points[j];
                closest_pair.dist = d;
                min_distance = d;
            }
        }
    }
    free(middle_points);
    return min_pair(closest_pair, min_pair(left_closest_pair, right_closest_pair));
}

// generaet random number between a and b using rand()
int rand_between(int a, int b) {
    return a + rand() % (b - a);
}

void test(int n) {
    printf("Starting test with n = %d\n", n);
    // generate random points
    Point *points = (Point *)malloc(n * sizeof(Point));
    for (int i = 0; i < n; i++) {
        points[i].x = rand_between(-100000, 100000);
        points[i].y = rand_between(-100000, 100000);
    }
    // sort points by x
    parallel_merge_sort(points, 0, n, cmp_x);
    // test between naive and fast methods
    clock_t naive_start_time = clock();
    PointPair naive_result = naive_closest_pair(points, n);
    clock_t naive_end_time = clock();
    printf("Naive method time: %f\n", (double)(naive_end_time - naive_start_time) / CLOCKS_PER_SEC);
    clock_t fast_start_time = clock();
    PointPair fast_result = closest_pair(points, 0, n);
    clock_t fast_end_time = clock();
    printf("Fast method time: %f\n", (double)(fast_end_time - fast_start_time) / CLOCKS_PER_SEC);
    // check if naive and fast methods are equal
    if (naive_result.dist != fast_result.dist) {
        printf("Naive and fast methods are not equal\n");
        printf("Naive: (%d, %d) (%d, %d) %lld\n", naive_result.a.x, naive_result.a.y, naive_result.b.x, naive_result.b.y, naive_result.dist);
        printf("Fast: (%d, %d) (%d, %d) %lld\n", fast_result.a.x, fast_result.a.y, fast_result.b.x, fast_result.b.y, fast_result.dist);
    } else {
        printf("TEST PASSED\n");
    }
    free(points);
}

int main() {
    test(100);
    test(1000);
    test(10000);
    test(100000);
    test(1000000);
    return 0;
}