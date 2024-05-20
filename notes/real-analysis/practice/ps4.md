# Problem Set 4

## 4

By the Algebraic Limit Theorem, it suffices to show that $\lim_{n \to \infty} \sqrt[n]{\vert P(n) \vert} = 1$. We have $\lim_{n \to \infty} \vert P(n) \vert = \infty$ so $\vert P(n) \vert \geq 1$ for all but finitely many $n$. We have

$$
\begin{aligned}
1 &\leq \sqrt[n]{\vert P(n) \vert} \\
&= \sqrt[n]{\vert a_kn^k + \dots + a_0 \vert} \\
&\leq \sqrt[n]{n^k(\vert a_k \vert + \dots + \vert a_0 n^{-k} \vert)} \\
&= \sqrt[n]{n}^k \sqrt[n]{\vert a_k \vert + \dots + \vert a_0 n^{-k} \vert}
\end{aligned}
$$

Taking the limit of the right side of the inequality as $n \to \infty$, the second factor $\to 0$ and the first $\to 1$. So by Squeeze Theorem, $\sqrt[n]{\vert P(n) \vert} = 1$. $\blacksquare$

## 5

Let $N_0 \in \mathbb N$ such that $\forall n \geq N$ we have $\vert \frac{a_{n + 1}}{a_n} - c \vert < \epsilon$ for all $\epsilon$, namely, $\epsilon < 1$. So $\frac{a_{n + 1}}{a_n} > c - \epsilon$, and $\frac{a_{n + 2}}{a_{n + 1}} \frac{a_{n + 1}}{a_n} > (c - \epsilon)^2$. Simlarily, $\frac{a_{n + k}}{a_n} > (c - \epsilon)^k$ and $a_{n + k} > (c - \epsilon)^k a_n$, which $\to \infty$ as $k \to \infty$.

Let $M > 0$. Choose $K \in \mathbb N$ such that, $\forall k \geq K$, $a_{N_0 + k} > M$. Choose $N = N_0 + K$. Then, for all $n \geq N$, $a_{N + k} > M$. $\blacksquare$

## 6

TODO.

## 7

https://math.stackexchange.com/a/1340559

Note that we can show $b_n \geq a_n$ by showing $b_n - a_n \geq 0$.

## 8

Suppose the sequence $(a_n)$ did converge. Then every one of its subsequences also converges by the theorem proved in class. But $(a_n)$ does not have a convergent subsequence: so $(a_n)$ diverges.

## 9

We prove the contrapositive. Suppose $(a_n)$ is bounded and it does not converge to $b$. Then there is an $\epsilon > 0$ such that $\forall N \in \mathbb N, \exists n \geq N$ such that $\vert a_n - b \vert > \epsilon$. These $a_n$'s form a subsequence $S$, which is bounded, so by Bolzano-Weistrass, contains a subsequence $S'$ that converges. But, since $\forall x \in S$, $\vert s - b \vert > \epsilon$, $S'$ can't converge to $b$. $\blacksquare$

## 10

https://math.stackexchange.com/a/3975498/890112

## 11

Use Monotone Convergence Theorem.

## 12

Use Monotone Convergence Theorem.

## 13

Let $s := \lim \inf a_n = \lim \sup a_n$ Suppose for contradiction that $\lim_{n \to \infty} a_n \neq s$. Then, for $\epsilon > 0$, there are infinitely many $a_n$ such that $a_n > \epsilon + s$. Create a subsequence $S$ from such $a_n$. Since $(a_n)$ is bounded, $S$ is bounded, so by Bolzano-Weistrass, we can create a subsequence $S'$ convergent to some limit $L$. But, since $\forall x \in S$, $x > \epsilon + s$, so $L > \epsilon + s$. Then, $L$ is a subsequential limit with $L \geq \lim \sup a_n$; a contradiction. Similarily, there are not infinitely many $a_n$ such that $a_n < \epsilon - s$. So $\lim a_n = s$. $\blacksquare$

## 14 

### a

Define $\alpha := \lim \inf a_n + b_n$. Choose subsequences $a' \subseteq a_n, b' \subseteq b_n$ such that $\lim_\infty a' + b' = \alpha$. Since $a', b'$ are convergent, they are bounded, so by Bolzano-Weistrass, we can choose subsequences $a'' \subseteq a'$ and $b'' \subseteq b'$ that converge to $A, B$, respectively. By definition of $\lim \inf$, $A \geq \lim \inf a_n$ and $B \geq \lim \inf b_n$. And, since the subsequences of convergent sequences converge to the same limit, $\lim_\infty a'' + b'' = \alpha$. So, $\alpha = \lim \inf a_n + b_n = a'' + b'' = A + B \geq \lim \inf a_n + \lim \inf b_n$. Similarily, we can show $\lim \sup a_n + b_n \leq \lim sup a_n + \lim \sup b_n$. $\blacksquare$.

## b-c

$a_n = \sin(n \cdot \frac{\pi}{2})$ and $b_n = \sin(n \cdot \frac{\pi}{2} - \pi)$ works: note that $\lim \inf a_n = -1$ and $\lim \inf b_n = -1$, but $\lim \inf a_n + b_n = 0$ (and similarly for $\lim \sup$).