# Problem Set 3

## 7

### a

Suppose $x_u \geq x_w$. Then $x_u \in (x_w, +\infty)$, so $f(x_w) = w \leq f(x_u) = u$, contradicting that $u < w$. $\blacksquare$

### b
$f(x_u) = u < v$ so $x_u \in A$. Similarily $f(x_w) = w > v$ so $x_w \in B$. Also, $A$ and $B$ are bounded by $[x_u, x_w]$. So $A, B$ are non-empty and bounded.

Note that $\forall a \in A, \forall b \in B$, $f(a) < v < f(b)$, so $a < b$. Suppose for the sake of contradiction that $\alpha > \beta$. Then $\exists a \in A$ such that $a > \beta$. But then, $a$ is a lower bound for $B$ greater than $\beta$, contradicting the fact that $\beta$ is a greatest lower bound. So $\alpha \geq \beta$. A symmetric argument gives $\alpha \leq \beta$. So $\alpha = \beta$. $\blacksquare$

### c

Suppose for contradiction $f(\alpha) > \inf f(B)$. Then from (a), $\alpha > \inf B = \beta$, contradicting (b). Similarily, $f(\alpha) < \inf f(B)$ is a contradiction. So $f(\alpha = \inf f(B))$. $\blacksquare$

### d

We show $v = \inf f(B) =: \gamma$. Suppose $v > \gamma$. Then there exists a $b \in f(B)$ such that $\gamma \leq b < v$. But this is impossible, since $b \in f(B) \implies f(b) > v$. Similarily, $v < \gamma$ is impossible. So $v = \gamma$. $\blacksquare$

## 8 

TODO.

## 9

Let $A = (a_n)$ be a convergent sequence. Since it is convergent, it is bounded. So $I = \inf a_n$ and $S = \sup a_n$ exists. Suppose for contradiction $S, I \not\in A$. Consider $S \neq I$. Construct subsequences $K, J$ that converge to $S$, $I$ respectively. Then $A$ is a convergent sequence containing subsequences that converge to two different limits; a contradiction. Now consider $S = I$. Since $S, I \not\in A$, $I < a_n < S$; a contradiction. $\blacksquare$

## 10

$a_n = x, b_n = x^2$ gives $\lim a_n - b_n = 0$ and $\lim a_n/b_n = 0$. For the second case, $a_n = x + 1$ and $b_n = x$ gives $\lim a_n/b_n = 1$ but $\lim a_n - b_n = 1$.

## 11

Recall the reverse triangle inequality, $\vert a - b \vert \geq \vert \vert a \vert - \vert b \vert \vert$. Let $\epsilon > 0$ and $N \in \mathbb N$ such that $\forall n \geq N, \vert a_n - L \vert < \epsilon$. From the reverse triangle inequality, $\vert \vert a_n \vert - \vert L \vert \vert \leq \vert a_n - L \vert < \epsilon$. $\blacksquare$

## 12

See https://math.stackexchange.com/a/923055 .

## 13

Choose $N \in \mathbb N$ such that $\forall n \geq N$, $\vert a_n - a \vert < \epsilon$. Then 

$$
\begin{aligned}
    \vert \frac{a_1 + \dots + a_n}{n} - a \vert 
    &= \frac{1}{n} \vert (a_1 - a) + \dots + (a_n - a) \vert \\
    &\leq \frac{1}{n}(\vert a_1 - a \vert + \dots + \vert a_n - a \vert) \\
    &< \frac{1}{n} n \epsilon \\
    &= \epsilon
\end{aligned}
$$

## 14

Since $(a_n)$ diverges to infinity, there exists an $N \in \mathbb N$ such that $\forall n \geq N$, $a_n > M$ for all $M \in \mathbb R$. Consider the finite set $\lbrace a_1, \dots, a_N \rbrace$. Then $\forall n \geq N$, $a_n \geq a_1, \dots, a_N$. So $\min \lbrace a_1, \dots, a_N \rbrace = \min (a_n)$.

## 15

Consider $\epsilon = \frac{c}{2}$. We have $\vert a_{n + 1} - a_n - c \vert < \frac{c}{2}$ so $a_{n + 1} - a_n > \frac{c}{2}$ Then $a_{n+2} - a_{n + 1} + a_{n + 1} - a_n > \frac{c}{2} + \frac{c}{2} = c$ and in general, $a_{n + k} - a_n > k \cdot \frac{c}{2}$. So, we can make $a_{n + k}$ arbitrary large.


Let $M > 0$. Choose $N \in \mathbb N$ such that $\forall n \geq N$, $a_n > M$, which is possible since we can make $a_n$ arbitrary large (from above). $\blacksquare$

## 16

Let $\beta$ be the lower bound of $(b_n)$. Let $M > 0$. Choose $N \in \mathbb N$ such that $\forall n \geq N$, $a_n > M - \beta$. Then $a_n + b_n \geq a_n + \beta > M$. $\blacksquare$