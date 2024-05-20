A big (3*1) ship can either cover a corner or not, call it a "corner" ship or an "edge" ship. We consider the following 3 cases:

1. Both big ships are edge ships
2. Both big ships are corner ships
3. One big ship is a corner and one is an edge

Note to easily count the places where the small ship can go, rows (or columns) of 4 spaces can put the small ship in 3 places, 3 spaces can put it in 2, and 2 can put it in  1.

## Case 1

The big ships are positioned as one of the following

```
....        ....
.xxx        xxx.
xxx.        xxx.
....        ....
```

which has 8 and 9 places for the small ship, respectively. Each configuration has 4 rotations, so there are (8 + 9) * 4 = 68 configurations for Case 1.

## Case 2

Either the ships are on adjacent walls, in which case the ships are configured as 
```
....        ...x
...x        ...x
...x        ...x
xxxx        xxx.
```

which has 13 and 12 places for the small ship respectively. (For easy counting, note that the second configuration has one less place than the first).

Or, the ships are on opposite walls, in which case

```
.xxx        xxx.
....        ....
....        ....
xxx.        xxx.
```

where each have 12 places for the small ship.

Again, all of the above configurations have 4 symmetries, so (13 + 12 + 12 + 12) * 4 = 196 configurations for Case 2.


## Case 3

The 6 cases for Case 3 are

```
....        ....        ....        ....
....        xxx.        .xxx        ....
xxx.        ....        ....        .xxx
xxx.        xxx.        xxx.        xxx.

.x..        ..x.
.x..        ..x.
.x..        ..x.
xxx.        xxx.
```

which have 12, 9, 8, 8, 7, and 7, respectively (left-to-right, top-to-bottom). Again, there are 4 symmetries for each, so (12 + 9 + 8 + 8 + 7 + 7) * 4 = 204 configurations.

Summing up all cases gives 468 configurations.