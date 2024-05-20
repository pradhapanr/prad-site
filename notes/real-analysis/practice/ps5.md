# Problem Set 5

## 6

Let $A, B$ be a compact and closed set, respectively. Then, $A \cap B$ is bounded, since $A$ is compact so it is closed and bounded. Also, the intersection of closed sets is closed, so $A \cap B$ is closed. Thus, by Heine-Borel, $A \cap B$ is compact.

## 7

TODO.

## 8

### a

Consider the complement of the set $X$. Let $x \in \mathbb R$ such that $f(x) \neq 0$. By continuity of $f, \exists \delta > 0$ such that $x_0 \in (x - \delta, x+ \delta) \implies \vert f(x_0) - f(x) \vert < f(x)$. That is, $0 < f(x_0)$. So, $f(x_0) \neq 0$, so $(x - \delta, x+ \delta \subseteq X)$.

### b

This is equivalent to $\lbrace x \in \mathbb R : h(x) = 0 \rbrace$, where $h(x) = f(x) - g(x)$. Since $f, g$ continuous, $h$ is continuous. This was solved in a.

## 9

$\lbrace x \in \mathbb R : f(x) = g(x) \rbrace \iff \lbrace x \in \mathbb R : (f-g)(x) = 0 \rbrace$

Claim: $h: \mathbb R \to \mathbb R$ continuous, $D \subseteq \mathbb R$ dense, $h \mid_D = 0 \implies h = 0$ is a reduction.

Suppose $a \in \mathbb R$ is such that $h(a) \neq 0$. Choose $\epsilon = \vert h(a) \vert /2$. By continuity of $h$ at $a$, can choose $\delta$ such that $\vert x - a \vert < \delta \implies \vert h(x) - h(a) \vert < \epsilon$, so $h(a) - \vert h(a) \vert / 2 < h(x) < h(a) + \vert h(a) \vert/2$. So there is a neighborhood around $a$ such that values near $h(a)$ are non zero. These inputs giving non-zero outputs form an open set, which is disjoint from $D$, which is impossible, if $D$ is dense.

## 10

Let $\epsilon > 0$. Let $\delta = \min \lbrace 1, \frac{\epsilon}{7} \rbrace$. Suppose $\vert x - 1 \vert < \delta$. Then $\vert f(x) - 0 \vert = \vert x^3 - 1 \vert = \vert (x - 1)(x^2 + x + 1) \vert < \frac{\delta}{7} \cdot 7 = \epsilon$.

## 11 

TODO.

## 12

$\forall \epsilon > 0, \exists a < 0, b > 0$ such that $\forall x \in (-\infty, a) \cup (b, \infty), \vert f(x) \vert < \epsilon/2$. Then $f \mid_[a, b]$ is continuouns on a closed and bounded set, so it is uniformly continuous.

Let $\epsilon > 0$, Choose $\delta_1 > 0$ such that $\forall x_1, x_2 \in [a, b], \vert x_1 - x_2 \vert < \delta_1 \implies \vert f(x_1) - f(x_2) \vert < \epsilon$. Choose $\delta_a > 0$ such that $\forall x \in \mathbb R$, $0 < \vert x - a \vert < \delta_0 \implies \vert f(x) - f(a) \vert < \epsilon/2$. (similarily for $\delta_b$). Then $\delta = \min\lbrace \delta_1, \delta_a, \delta_b \rbrace$ works. Then, consider the 3 cases where both $x$ are less than $a$, both are within $\delta$ of $a$, or within both distance $\delta$ from $b$, or both greater than $b$. TODO.

## 13

Let $\epsilon > 0$. Let $a \in A$. Choose $\delta_f$ such that $\forall x \in A, \vert x - a \vert < \delta \implies \vert f(x) - f(a) \vert < \epsilon/2$, by uniform continuity of $f$. Similarily choose $\delta_g$ for $g$. Choose $\delta = \min \lbrace \delta_f, \delta_g \rbrace$. Then $\vert f(x) + g(x) - f(a) - g(a) \vert \leq \vert f(x) - f(a) \vert + \vert g(x) - g(a) \vert \leq \epsilon/2 + \epsilon/2 = \epsilon$. $\blacksquare$

## 14

### a

Let $a, x, \in \mathbb R$. Choose $\delta = \epsilon$. Let $x' \in \mathbb R$. Suppose $\vert x - x' \vert < \delta$. Then $\vert \vert x - a \vert - \vert x' - a \vert \vert \leq \vert x - a - (x' - a) \vert = \vert x - x' \vert < \delta = \epsilon$. $\blacksquare$

### b

Using $f$ defined in $a$, this is equivalent to finding the global minimum of $f$. Since $K$ is compact, $f$ admits its global minimum by Extreme Value Theorem. $\blacksquare$

