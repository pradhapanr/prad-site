---
layout: default
order: 5
toc: true
---

# Sequences and Series

## Sequences

Notation: We write $$(a_n)_n$$ as shorthand for $$(a_n)_{n = 1\vert 0}^\infty$$ to avoid specifying whether the seuqnece begins at 1 or 0.

**Definition**: We say that a sequence $$(a_n)_n$$ **converges** to $$L \in \mathbb R$$ denoted $$\lim_{n \to \infty} a_n = L$$ when 

$$
\begin{align*}
    \forall \epsilon \gt 0, \exists N \in \mathbb N, \forall n \geq N, \lvert a_n - L \rvert \lt \epsilon
\end{align*}
$$

When there is no such $$L$$, the sequence **diverges**.

**Definition**: We say $$(a_n)_n$$ **diverges to $$\infty$$**, $$\lim_{n \to \infty} a_n = \infty$$ when

$$
\forall M \in \mathbb R, \exists N \in \mathbb N, \forall n \geq N, a_n \gt M
$$

and **diverges to $$-\infty$$** when $$\lim_{n \to \infty}a_n = -\infty$$ when 

$$
\begin{align*}
    \forall m \in \mathbb R, \exists N \in \mathbb N, \forall n \geq N, m \lt a_n
\end{align*}
$$

**Definition**: A sequence is bounded when $$\exists M \gt 0, \forall n, \vert a_n \vert \leq M$$.

**Theorem**:
1. Every convergent sequence is bounded.
2. Every sequence divergent to $$\infty$$ is bounded below.
3. Every sequence divergent to $$-\infty$$ is bounded above.

*Proof*: 

1. Suppose $$\lim_{n \to \infty}a_n = L$$. Choose $$N_0 \in \mathbb N$$ such that $$\forall n \geq N_0$$, $$\lvert a_n - L \rvert \lt 1$$, which exists by the definition of convergence. Then, $$L - 1 \lt a_n \lt L + 1$$. Set $$M = \max \lbrace a_1, \dots, a_{N_0 - 1}, L + 1 \rbrace$$ and $$m = \min \lbrace a_1, a_2, \dots, a_{N_0 - 1}, L - 1 \rbrace$$. Then, $$\forall n \geq 1, m \leq a_n \leq M$$. $$\blacksquare$$
2. Suppose $$(a_n)_n$$ diverges to $$\infty$$. Then, $$\forall M \in \mathbb R$$, $$a_n \gt M$$ for $$n \gt N$$ for some $$N \in \mathbb N$$. So, $$a_n \geq \min \lbrace a_1, \dots, a_N, M \rbrace$$. $$\blacksquare$$
3. Suppose $$(a_n)_n$$ diverges to $$-\infty$$. Then, $$\forall m \in \mathbb R$$, $$m \lt a_n$$ for all $$n \geq N$$ for some $$N \in \mathbb N$$. So, $$a_n \leq \max \lbrace a_1, \dots, a_N, m \rbrace$$. $$\blacksquare$$

**Theorem**: If $$\lim_{n \to \infty}a_n$$ exists, then it is unique. 

*Proof*: Supppose $$(a_n)_n$$ such that $$L_1, L_2$$ satisfy the definition of $$\lim_{n \to \infty}a_n$$ and WLOG, $$L_1 \lt L_2$$. Choose $$\epsilon = \frac{L_2 - L_1}{2}$$. Choose $$N_1 \in \mathbb N$$ such that $$\forall n \geq N_1$$, $$\lvert a_n - L_1 \rvert \lt \epsilon$$. Similarily, choose $$N_2 \in \mathbb N, \forall n \geq N_2, \lvert a_n - L_2 \rvert \lt \epsilon$$. Choose $$N_0 = \max \lbrace N_1, N_2 \rbrace$$. Thus, $$N_0 \geq N_1$$ and $$N_0 \geq N_2$$. Then, 

$$
\begin{align*}
    \lvert L_1 - L_2 \rvert &= \lvert (L_1 - a_{N_0}) + (a_{N_0} - L_2) \rvert \\
    &\leq \lvert L_1 - a_{N_0} \rvert + \lvert a_{N_0} - L_2 \rvert \\
    &\lt \epsilon + \epsilon \\
    &= \frac{2 \lvert L_1 - L_2 \rvert}{2} \\
    &= \lvert L_1 - L_2 \rvert 
\end{align*}
$$
So $$\vert L_1 - L_2 \vert \lt \vert L_1 - L_2 \vert$$; a contradiction.
$$\blacksquare$$

**Theorem (Algebraic Limit)**: Given convergent sequences $$(a_n)_n, (b_n)_n$$ and $$c \in \mathbb R$$, the following hold:
1. $$(a_n + b_n)_n$$ is convergent, and $$\lim_{n \to \infty}(a_n + b_n) = \lim_{n \to \infty} a_n + \lim_{n \to \infty} b_n$$
2. $$(a_n - b_n)_n$$ is convergent, and $$\lim_{n \to \infty}(a_n - b_n) = \lim_{n \to \infty} a_n - \lim_{n \to \infty} b_n$$ 
3. $$(ca_n)_n$$ is convergent, and $$\lim_{n \to \infty}(ca_n) = c \lim_{n \to \infty}a_n$$
4. $$(a_n \cdot b_n)_n$$ is convergent, and $$\lim_{n \to \infty}(a_n \cdot b_n) = \lim_{n \to \infty} a_n \cdot \lim_{n \to \infty} b_n$$
5. $$(a_n / b_n)_n$$ is convergent, and $$\lim_{n \to \infty}(a_n / b_n) = \lim_{n \to \infty} a_n / \lim_{n \to \infty} b_n$$, provided $$\lim_{n \to \infty} b_n \neq 0$$

*Proof*: Let $$\lim a_n = A, \lim b_n = B$$.

(1) We want to show that $$\forall \epsilon \gt 0, \exists N \in \mathbb N, \forall n \geq N, \lvert (a_n + b_n) - (A + B) \rvert \lt \epsilon$$. Let $$\epsilon \gt 0$$. Choose $$N_1 \in \mathbb N$$ such that $$\forall n \geq N_1, \lvert a_n - A \rvert \lt \epsilon/2$$. Likewise, choose $$N_2 \in \mathbb N$$ such that $$\forall n \geq N_2, \lvert b_n - B \rvert \lt \epsilon/2$$. Define $$N_0 = \max \lbrace N_1, N_2 \rbrace$$. Then, $$\forall n \geq N_0$$, $$n \geq N_1$$ and $$n \geq N_2$$. So, 

$$
\begin{align*}
    \lvert (a_n + b_n) - (A + B) \rvert \leq \lvert a_n - A \rvert + \lvert b_n - B \rvert \lt \epsilon/2 + \epsilon/2 = \epsilon
\end{align*}
$$

$\blacksquare$

(2) Let $$\epsilon \gt 0$$. Choose $$N_1, N_2 \in \mathbb N$$ such that $$\forall n \geq N_1, \vert a_n - A \vert \lt \epsilon/2$$ and $$\forall n \geq N_2, \vert b_n - B \vert \lt \epsilon/2$$. Define $$N_0 = \max \lbrace N_1, N_2 \rbrace$$. Then, $$\forall n \geq N_0, n \geq N_1$$ and $$n \geq N_2$$. So, 

$$
\begin{align*}
    \vert (a_n - b_n) - (A - B) \vert \leq \vert a_n - A \vert + \vert B - b_n \vert \lt \epsilon/2 + \epsilon/2 = \epsilon
\end{align*}
$$

$\blacksquare$

(3) Let $$\epsilon \gt 0$$. Choose $$N \in \mathbb N$$ such that $$\forall n \geq N$$, $$\vert a_n - A \vert \lt \epsilon/c$$. Then, 

$$
\begin{align*}
    c \vert a_n - A \vert \lt c \cdot \epsilon/c \implies \vert ca_n - cA \vert \lt \epsilon.
\end{align*}
$$

$\blacksquare$


(4) We want to show $$\forall \epsilon \gt 0, \exists N_0 \in \mathbb N, \forall n \geq _0, \lvert a_n b_n - AB \rvert \lt \epsilon$$.  Observe 

$$
\begin{align*}
    \lvert (a_n b_n - a_n B) + (a_n B - AB) \rvert \leq \lvert a_n \rvert \lvert b_n - B \rvert + \lvert B \rvert \lvert a_n - A \rvert
\end{align*}
$$

Since $$(a_n)_n$$ is convergent, it is bounded, so we can choose an upper bound $$M \gt 0$$ such that $$\lvert a_n \rvert \leq M$$ for all $$n \geq 1$$.

Given an arbitrary $$\epsilon \gt 0$$, choose $$N_1, N_2 \in \mathbb N$$ such that 

$$
\begin{align*}
    \lvert a_n - A \rvert &\lt \frac{\epsilon}{M + \lvert B \rvert}, \forall n \geq N_1 \\
    \lvert b_n - B \rvert &\lt \frac{\epsilon}{M + \lvert B \rvert}, \forall n \geq N_2
\end{align*}
$$

Now, set $$N_0 = \max \lbrace N_1, N_2 \rbrace$$. Then, $$\forall n \geq N_0$$,

$$
\begin{align*}
    \lvert a_nb_n - AB \rvert 
    &\leq \lvert a_n \rvert \cdot \lvert b_n - B \rvert + \lvert B \rvert \cdot \lvert a_n - A \rvert \\
    &\leq M \frac{\epsilon}{M + \lvert B \rvert} + \lvert B \rvert \frac{\epsilon}{M + \lvert B \rvert} \\
    &= \epsilon
\end{align*}
$$

$\blacksquare$

(5) Observe 

$$
\begin{align*}
    \lvert \frac{a_n}{b_n} - \frac{A}{B} \rvert 
    &= \lvert \frac{a_nB - b_nA}{b_nB} \rvert \\
    &= \lvert \frac{(a_nB - AB) + (AB - b_nA)}{b_nB} \rvert \\
    &\leq \frac{\lvert a_n - A \rvert \lvert B \rvert}{\lvert b_n \rvert \lvert B \rvert}
        + \frac{\lvert A \rvert \lvert b_n - B \rvert}{\lvert b_n \rvert \lvert B \rvert}
\end{align*}
$$

Since $$B \neq 0$$, there exists $$N_1 \in \mathbb N$$ such that $$\vert b_n - B \vert \lt \vert B \vert/2$$ for all $$n \geq N_1$$, so $$\vert b_n \gt \vert B \vert / 2$$ for all $$n \geq N_1$$. Let $$\epsilon \gt 0$$. TODO.

**Theorem**: Let $$(a_n)_n, (b_n)_n$$ be sequences, $$A \in \mathbb R$$, $$r \gt 0$$, and $$\lim_{n \to \infty} b_n = 0$$. If $$\vert a_n - A \vert \leq r \cdot \vert b_n \vert$$ for all but finitely many $$n \in \mathbb N$$, then $$\lim_{n \to \infty} a_n = A$$.

*Proof*: Given $$\epsilon \gt 0$$, let $$N_0 \in \mathbb N$$ be such that $$\forall n \geq N_0$$, $$\vert b_n \vert = \vert b_n - 0 \vert \lt \epsilon/r$$. Then, $$\forall n \geq N_0, \vert a_n - A \vert \lt r \cdot \epsilon/r = \epsilon$$. $$\blacksquare$$

**Theorem**: Let $$(a_n)_n, (b_n)_n$$ be sequences with $$\lim_{n \to \infty} a_n = A, \lim_{n \to \infty} b_n = B$$.

1. If $$A \lt B$$, then $$a_n \lt b_n$$ for all but finitely many $$n \in \mathbb N$$.
2. If $$a_n \geq b_n$$ for all but finitely many $$n \in \mathbb N$$, then $$A \geq B$$.

*Proof*:
1. Suppose $$A \lt B$$ and let $$\epsilon = \frac{B - A}{2}$$. Choose $$N_1, N_2 \in \mathbb N$$ such that $$\vert a_n - A \vert \lt \epsilon$$ for all $$n \geq N_1$$ and $$\vert b_n - B \vert \lt \epsilon$$ for all $$n \geq N_2$$. Set $$N_0 = \max \lbrace N_1, N_2 \rbrace$$. Then, $$\forall n \geq N_0$$, $$a_n \lt A + \epsilon = A + \frac{B - A}{2} = B + (A - B) + \frac{B - A}{2} = B - \frac{B - A}{2} = B - \epsilon \lt b_n$$. $$\blacksquare$$
2. 

**Example**: Note that it is not true that $$A \leq B \implies a-n \leq b_n$$. For example, consider $$a_n = \frac{(-1)^n}{n}, b_n = 0$$.

**Theorem (Squeeze Theorem)**: Given sequences $$(a_n), (b_n), (c_n)$$ such that $$\lim_{n \to \infty} a_n = \lim_{n \to \infty} c_n$$, and, for all but finitely many $$n$$, $$a_n \leq b_n \leq c_n$$, it follows that $$\lim_{n \to \infty} b_n = \lim_{n \to \infty} a_n$$.

*Proof*: Suppose first that $$\lim_\infty a_n = \lim_\infty c_n = L \in \mathbb R$$ and let $$N_1 \in \mathbb N$$ such that $$a_n \leq b_n \leq c_n, \forall n \geq N_1$$. By the above theorem, since $$a_n \leq b_n \leq c_n, L \leq \lim_{n \to \infty} b_n \leq L$$, so $$\lim_{n \to \infty} b_n = L$$. $$\blacksquare$$

**Lemma (Bernoulli's Inequality)**: If $$a \geq -1$$, then $$(1 + a)^n \geq 1 + na$$, $$\forall n \in \mathbb N$$.

*Proof*: By induction on $$n$$. We have $$(1 + a)^0 = 1 \geq 1 + 0$$. For $$k \geq 0$$, $$(1 + a)^{k + 1} = (1 + a)^k (1 + a) \geq (1 + ka)(1 + a) = 1 + a + ka + ka^2 \geq 1 + (k+1)a$$. $$\blacksquare$$

**Theorem**: Let $$q \in \mathbb R$$. Then, 

$$
\lim_{n \to \infty} q^n = \begin{cases}
    \infty & q \gt 1 \\
    1 & q = 1 \\
    0 & \vert q \vert \lt 1
\end{cases}
$$

*Proof*: If $$q \gt 1$$, then $$q^n = (1 + (q - 1))^n \geq 1 + n(q - 1)$$. Also, $$\lim_{n \to \infty} cn = \infty$$ for every $$c \gt 0$$, hence the claim follows from Squeeze Theorem. If instead $$q = 0$$ or $$q = 1$$, then $$(q^n)$$ is a constant sequence.

So suppose that $$q \in (0, 1)$$. Then, $$1/q \gt 1$$ by the axioms of ordred fields, and hence $$1/q^n = (1/q)^n \geq 1 + n(1/q - 1) = 1 + n(\frac{1 - q}{q})$$.

Let $$\epsilon \gt 0$$ and choose $$N \in \mathbb N$$ such that $$1 + N (\frac{1 - q}{q}) \gt 1/\epsilon$$. Then $$\forall n \geq N$$, $$\frac{1}{q^n} \geq 1 + n(\frac{1 - q}{q}) \geq 1 + N(\frac{1 - q}{q}) \gt \frac{1}{\epsilon}$$, hence $$0 \lt q^n \lt \epsilon$$, and so $$\vert q^n - 0 \vert \lt \epsilon$$.

Finally, suppose $$q \in (-1, 0)$$. Then, by above, $$\lim_{n \to \infty} \vert q^n \vert = \lim_{n \to \infty} \vert q \vert^n = 0$$, and hence $$\lim_{n \to \infty} q^n = 0$$, by the lemma below. $$\blacksquare$$.

**Lemma**: For any sequence $$(a_n)$$, $$\lim_{n \to \infty} a_n = 0 \iff \lim_{n \to \infty} \vert a_n \vert = 0$$.

*Proof*: Suppose $$\lim_{n \to \infty} a_n = 0$$. Let $$\epsilon \gt 0$$ and choose $$N \in \mathbb N$$ such that $$\forall n \geq N$$, $$\vert a_n - 0 \vert \lt \epsilon$$. Then, $$\forall n \gt N$$, 

$$
\begin{align*}
    \vert \vert a_n \vert - 0 \vert = \vert \vert a_n \vert \vert = \vert a_n \vert = \vert a_n - 0 \vert \lt \epsilon.
\end{align*}
$$

Conversely, suppose $$\lim_{n \to \infty} \vert a_n \vert = 0$$. Let $$\epsilon \gt 0$$ and choose $$N \in \mathbb N$$ such that $$\forall n \geq N$$, $$\vert \vert a_n \vert - 0 \vert \lt \epsilon$$. Then, $$\forall n \gt N$$, 

$$
\begin{align*}
    \vert a_n - 0 \vert = \vert a_n \vert = \vert \vert a_n \vert \vert = \vert \vert a_n \vert - 0 \vert \lt \epsilon.
\end{align*}
$$

$$\blacksquare$$

**Theorem**:
1. $\lim_{n \to \infty} \sqrt[n]{n} = 1$
2. $$\forall c \gt 0, \lim_{n \to \infty} \sqrt[n]{c} = 1$$.

*Proof*: TODO.

**Theorem**: Given a sequence $$(a_n)_n$$ with non-zero terms, suppose $$\vert \frac{a_n + 1}{a_n} \vert \leq q$$ for some $$q \lt 1$$ for all but finitely many $$n$$. Then, $$\lim_{n \to \infty} a_n = 0$$.

*Proof*: TOOD.

**Corollary**: Given $$(a_n)_n$$, if $$\lim_{n \to \infty} \frac{a_{n + 1}}{a_n} = c$$ and $$\vert c \vert \lt 1$$, then $$\lim_{n \to \infty} a_n = 0$$.

**Definition**: An infinite **subsequence** of a sequence $$(a_n)_n$$ is a composition of functions $$(a_n) \circ \phi$$, where $$\phi: \mathbb N_+ \hookrightarrow \mathbb N_+$$ is strictly increasing; written as $$(a_{n_k})_k$$.

**Theorem**: Let $$(a_n)_n$$ be a sequence.
1. If $$(a_n)_n$$ is convergent, then so is every one of its subsequences $$(a_{n_k})_k$$, and $$\lim_{k \to \infty} a_{n_k} = \lim_{n \to \infty} a_n$$.
2. If $$(a_n)_n$$ is unbounded above, then there exists a subsequence $$(a_{n_k})_k$$ of $$(a_n)_n$$ with $$\lim_{k \to \infty} a_{n_k} = \infty$$.
3. If $$(a_n)_n$$ is unbounded below, then $$\exists (a_{n_k})$$ such that $$\lim_{k \to \infty} = -\infty$$.

*Proof*: TODO.

**Corollary**: Suppose $$(a_n)_n$$ has two convergent subsequences $$(a_{n_k})_k, (a_{n_l})_l$$ such that $$\lim_{k \to \infty} a_{n_k} \neq \lim_{l \to \infty} a_{n_l}$$. Then, $$(a_n)_n$$ is divergent.

### Monotone Sequences

**Definition**: A sequence $$(a_n)_n$$ is called
* **increasing** when $$\forall n, a_n \leq a_{n + 1}$$
* **decreasing** when $$\forall n, a_{n + 1} \leq a_n$$
* **monotone** when $$(a_n)$$ is increasing or decreasing

**Theorem (Monotone Convergence)**: Given $$(a_n)$$, if $$(a_n)$$ is increasing and bounded above, or decreasing and bounded below, then $$\exists L \in \mathbb R, \lim_{n \to \infty} a_n = L$$.

*Proof*: Suppose $$(a_n)_n$$ is increasing and let $$M \gt 0$$ be such that $$a_n \leq M, \forall n$$. Then, $$A = \lbrace a_n : n \in \mathbb N \rbrace \subseteq \mathbb R$$ is non-empty and bounded above. Set $$\alpha = \sup A$$. We claim $$\lim_{n \to \infty} a_n = \alpha$$. Let $$\epsilon \gt 0$$ be arbitrary. Then, $$\alpha - \epsilon$$ is not an upper bound of $$A$$, so we can choose $$a_{N_0} \gt \alpha - \epsilon$$. Then, $$\forall n \geq N_0$$, $$\alpha - \epsilon \lt a_{N_0} \leq a_n \leq \alpha \lt \alpha + \epsilon$$. That is, $$\lvert a_n - \alpha \rvert \lt \epsilon$$. $$\blacksquare$$

**Theorem (Bolzano-Weierstrass)**: If $$(s_n)_n$$ is bounded, then there is a subsequence $$(s_{n_k})_k$$ of $$(s_n)_n$$ where $$\exists L \in \mathbb R$$ such that $$\lim_{k \to \infty} s_{n_k} = L$$

*Proof*:
Suppose $$a_1, b_1 \in \mathbb R$$ are such that $$a_1 \leq s_n \leq b_1$$. Let $$I_1 = [a_1, b_1]$$. If $$\lvert \lbrace s_n : n \geq 1 \rbrace \cap (-\infty, \frac{a_1 + b_1}{2}) \rvert = \aleph_0$$, (if the first half of the interval is infinite), then we set $$a_2 = a_1, b_2 = \frac{a_1 + b_1}{2}$$. Otherwise, we set $$a_2 = \frac{a_1 + b_1}{2}$$ and $$b_2 = b_1$$, which must be infinite since the sequence is infinite, so it cannot be the union of two finite sets. Set $$I_2 = [a_2, b_2]$$. Having constructed $$I_1 \supseteq I_2 \supseteq \dots \supseteq I_k = [a_k, b_k]$$, if $$\lvert \lbrace s_n : n \geq 1 \rbrace [a_k, \frac{a_k + b_k}{2}] \rvert = \aleph_0$$, then set $$a_{k + 1} = a_k$$, $$b_{k + 1} = \frac{a_k + b_k}{2}$$, otherwise set $$a_{k + 1} = \frac{a_k + b_k}{2}$$, $$b_{k + 1} = b_k$$. Set $$I_{k + 1} = [a_{k + 1}, b_{k + 1}]$$. By the Nested Interval Property, $$\exists L \in \mathbb R$$ such that $$L \in \bigcap_{k = 1}^\infty I_k$$.

The construction of the subsequence $$(s_{n_k})$$ is as follows. Let $$s_{n_1} = s_{n}$$. Having chosen $$\lbrace s_{n_1}, \dots, s_{n_k} \rbrace$$, we choose $$s_{n_{k + 1}}$$ from among $$\lbrace s_n : n \geq 1 \rbrace \cap I_{k + 1} \setminus \lbrace s_{n_1}, \dots, s_{n_k} \rbrace$$. Then $$(s_{n_k}) \subseteq (s_n)_n$$ is such that $$s_{n_k} \in I_k, \forall k \geq 1$$.

We claim $$\lim_{k \to \infty} s_{n_k} = L$$. Let $$\epsilon \gt 0$$ be arbitrary. We have $$\forall k, \operatorname{diam}(I_k) = \frac{b_1 - a_1}{2^{k - 1}}$$. Since $$\left( \frac{1}{2} \right)^{k - 1} \to_{k \to \infty} 0$$, we can choose $$K_0 \in \mathbb N$$ such that $$\operatorname{diam}(I_{K_0}) \lt \epsilon$$. Then, $$\forall k \geq K_0$$, $$\lvert s_{n_k} - L \rvert \leq \operatorname{diam}(I_k) \leq \operatorname{diam}(I_{K_0}) \lt \epsilon$$. $$\blacksquare$$

**Definition**: A sequence $$(a_n)_n$$ is **Cauchy** when $$\forall \epsilon \gt 0, \exists N \in \mathbb N, \forall m, n \geq N, \lvert a_m - a_n \rvert \lt \epsilon$$.

**Theorem**: Let $$(a_n)_n$$ be a sequence. Then, $$(a_n)$$ is a Cauchy sequence iff $$(a_n)_n$$ is convergent.

*Proof*: ($$\leftarrow$$) Suppose $$\lim_{n \to \infty}a_n = L$$. Let $$\epsilon \gt 0$$ be arbitrary. We can choose $$N_0$$ such that $$\forall n \geq N_0$$, $$\lvert a_n - L \rvert \lt \epsilon/2$$. Then, for all $$m, n \geq N_0$$,

$$
\begin{align*}
\lvert a_m - a_n \rvert &= \lvert a_m - L + L - a_n \rvert \\
&= \lvert (a_m - L) - (a_n - L) \rvert \\
&\leq \lvert a_m - L \rvert + \lvert a_n - L \rvert \\
&\leq \epsilon/2 + \epsilon/2 \\
&= \epsilon 
\end{align*}
$$

($$\rightarrow$$) First we show $$\lbrace a_n : n \geq 1 \rbrace = A$$ is bounded. Choose $$N_0 \in \mathbb N$$ such that $$\forall n \geq N, \lvert a_{N_0} - a_n \rvert \lt 1$$. Hence, $$\forall n \geq 1, \lvert a_n \rvert \leq \max \lbrace \lvert a_1 \rvert, \dots, \lvert a_{N_0 - 1} \rvert, \lvert a_{N_0} \rvert + 1 \rbrace$$. So $$A$$ is bounded. Now, choose a convergent subsequence $$(a_{n_k})_k$$ of $$(a_n)_n$$. Let $$L = \lim_{k \to \infty} a_{n_k}$$. We claim that $$\lim_{n \to \infty} a_n = L$$. Let $$\epsilon \gt 0$$. By the Cauchy property, choose $$N_0 \in \mathbb N$$ such that $$\forall m, n \geq N_0$$, $$\lvert a_m - a_n \rvert \lt \epsilon/3$$. Choose $$K_0 \in \mathbb N$$ such that $$\forall k \geq K_0, \lvert a_{n_k} - L \rvert = \epsilon/3$$.  Set $$N_1 = \max \lbrace N_0, n_{K_0}\rbrace$$. Then $$\forall n \geq \mathbb N$$, $$\lvert a_n - L \rvert = \lvert a_n - a_{N_{K_0}} + a_{N_{K_0}} - L \rvert$$ $$\lt \epsilon/3 + \epsilon/3 \lt \epsilon$$. $$\blacksquare$$.

## Series

**Definition**: A **series** $$\sum_{n = 0}^\infty a_n$$ is a pair of sequences $$((a_n)_n, (s_n)_n)$$ where $$(a_n)_{n = 0}^\infty$$ is the sequence of **terms** of the series, and the sequence of **partial sums** $$(s_n)_n$$ satisfies $$s_k = a_0 + \dots + a_k = \sum_k a_n$$, for all $$k \in \mathbb N$$. We say that $$\sum_0^\infty a_n$$ is **convergent** when $$\lim_{n \to \infty} s_n$$ exists. If $$\lim_{n \to \infty} s_n = L \in \mathbb R$$, we write $$\sum_{n = 0}^\infty a_n = L$$ and say that $$L$$ is the **sum of the series**. Otherwise, we say $$\sum a_n$$ **diverges**. If $$\lim_{n \to \infty} s_n = \infty$$, we write $$\sum a_n = \infty$$ and say the series diverges to $$\infty$$.

**Theorem (Divergence Test)**: If the series $$\sum_{n = 0}^\infty a_n$$ converges, then $$\lim_{n \to \infty} a_n = 0$$.

*Proof*: By definition, $$a_n = s_n - s_{n - 1} \to_{n \to \infty} L - L = 0$$. $$\blacksquare$$

**Example**: Consider $$\sum_{n = 0}^\infty (-1)^n \frac{n}{2n + 1}$$. We have $$\vert a_n \vert = \frac{n}{2n + 1} = \frac{1}{2 + \frac{1}{n}} \to_{n \to \infty} \frac{1}{2} \neq 0$$. So $$\lim_{n \to \infty}a_n \neq 0$$, thus the series diverges, by the Divergence Test.

Note that the converse of the Divergence test does not hold!

**Example 2**: The harmonic series $$\sum_{n = 1}^\infty \frac{1}{n} = \infty$$, but $$\lim_{n \to \infty}\frac{1}{n} = 0$$.

*Proof*: We claim that a sequence diverges if and only if it has a subsequence that diverges. Suppose a sequence diverges. Then, the subsequence corresponding to the sequence itself diverges. Conversely, suppose there exists a subsequence that diverges. Then, by the above theorem that a sequence converges if and only if every one of its subsequences converges, the sequence must diverge.

So it suffices to find a subsequence $$(s_{n_k})_{k=0}^\infty$$ of $$(s_n)_{n=1}^\infty$$ such that $$\lim_{k \to \infty} s_{n_k} = \infty$$. Consider $$(s_{2^k})_{k = 0}^\infty$$. Observe 
$$
\begin{align*}
s_1 &= 1 \\ 
s_2 &= 1 + 1/2 \\
s_4 &= 1 + 1/2 + (1/3 + 1/4) > 1 + 2 \cdot \frac{1}{2} \\
s_8 &= 1 + 1/2 + (1/3 + 1/4) + (1/5 + \dots + 1/8) > 1 + 3 \cdot 1/2 \\
&\dots \\
s_{2^k} &\gt 1 + k \cdot \frac{1}{2} 
\end{align*}
$$

Hence, since $$\lim_{k \to \infty}(1 + k/2) = \infty$$, $$\lim_{k \to \infty} s_{n_k} = \infty$$. $$\blacksquare$$

**Theorem (Cauchy Criterion for Convergence)**: For a series $$\sum_{n = 0}^\infty a_n$$, the following are equivalent:
1. $$\sum a_n$$ converges
2. $$\forall \epsilon \gt 0, \exists N \in \mathbb N, \forall n \gt m \geq N, \left\vert \sum_{k = m + 1}^n a_k \right\vert \lt \epsilon$$ (Cauchy condition)

*Proof*: By a theorem about sequences, $$(s_n)_{n = 0}^\infty$$ is convergent iff $$(s_n)$$ is Cauchy. That is, $$\forall \epsilon \gt 0, \exists N \in \mathbb N, \forall n \gt m \geq N, \vert s_n - s_m \vert \lt \epsilon$$. $$\blacksquare$$

**Definition**: Given a series $$\sum_{n = 0}^\infty$$, we say the series **converges absolutely** when $$\sum_{n = 0}^\infty \vert a_n \vert$$ converges. We say $$\sum a_n$$ **converges conditionally** when $$\sum a_n$$ converges and $$\sum \vert a_n \vert$$ diverges.

**Theorem**: If $$\sum_{n = 0}^\infty \vert a_n \vert$$ converges, then so does $$\sum_{n = 0}^\infty a_n$$.

*Proof*: Given $$\sum_{n = 0}^\infty a_n$$ such that $$\sum_{n = 0}^\infty \vert a_n \vert$$ is convergent, let $$\epsilon \gt 0$$ be arbitrary. Since $$\sum \vert a_n \vert$$ satisfies the Cauchy condition, we can choose $$N_0 \in \mathbb N$$ such that $$\forall n \gt m \geq N_0, \left\vert \sum_{k = m + 1}^n \vert a_k \vert \right\vert \lt \epsilon$$. Then 

$$
\begin{align*}
    \left\vert \sum_{k = m + 1}^n a_k \right\vert
        &\leq \left\vert a_{m + 1} \right\vert + \dots + \vert a_n \vert \\
        &= \sum_{k = m + 1}^n \vert a_k \vert \\
        &= \left\vert \sum_{k = m + 1}^n \vert a_k \vert \right\vert \\
        &\lt \epsilon 
\end{align*}
$$

$$\blacksquare$$.

**Example 3**: Consider $$\sum_{n = 1}^\infty \frac{(-1)^n}{n}$$. We have $$\vert a_n \vert = \frac{1}{n}$$, so $$\sum a_n$$ is not absolutely convergent. But $$\sum_1^\infty \frac{(-1)^n}{n}$$ converges, by the next theorem, and so $$\sum a_n$$ is conditionally convergent.

**Theorem (Geometric Series)**: Let $$q \in \mathbb R$$. If $$\vert q \vert \lt 1$$, then $$\sum_{n = 0}^\infty q^n$$ is absolutely convergent and $$\sum_{n = 0}^\infty q^n = \frac{1}{1 - q}$$. If $$\vert q \vert \geq 1$$, then $$\sum_n q^n$$ is divergent.

*Proof*: TODO.

**Theorem (Comparison Test)**: Given two series $$\sum_n a_n, \sum _n b_n$$ satisfying $$0 \leq a \lt b_n$$ for all but finitely many $$n$$,
1. If $$\sum_n b_n$$ converges, then so does $$\sum_n a_n$$.
2. If $$\sum_n a_n$$ diverges, then so does $$\sum_n b_n$$.

*Proof*: TODO.

**Theorem (Algebraic Convergence Theorem)**: Given series $$\sum_n a_n, \sum_n b_n$$ and a constant $$c \in \mathbb R$$, suppose $$\sum_n a_n$$ and $$\sum_n b_n$$ converge. Then
1. $$\sum_n (a_n + b_n)$$ converges, and $$\sum_n (a_n + b_n) = \sum_n a_n + \sum_n b_n$$
2. $$\sum_n (c \cdot a_n)$$ converges, and $$\sum_n (c \cdot a_n) = c \cdot \sum_n a_n$$.

*Proof*: Follows immediately from the Algebraic Limit Theorem applied to sequences of the partial sums. $$\blacksquare$$.

**Theorem (Alternating Series)**: Suppose $$\sum_{n = 0}^\infty (-1)^n b_n$$ is a series such that the sequence $$(b_n)_n$$ satisfies:
1. $$b_n \geq 0$$ for all but finitely many $$n$$ (the sequence is eventually positive)
2. $$b_{n + 1} \leq b_n$$ for all but finitely many $$n$$ (the sequence eventually decreases)
3. $$\lim n \to \infty b_n = 0$$

Then $$\sum_0^\infty (-1)^n b_n$$ is convergent.

**Proof**: Choose $$N_0 \in \mathbb N$$ such that $$\forall n \geq N_0, b_n \geq 0$$ and $$b_{n + 1} \leq b_n$$. Consider the subequences $$(s_{2m})_{m = 0}^\infty$$ and $$(s_{2m + 1})_{m = 0}^\infty$$. For every $$n \gt m \geq N_0/2$$, 

$$
\begin{align*}
s_{2n} &= s_{2n - 1} - (b_{2n - 1} - b_{2n})\\
&= \dots \\
&= s_{2m} - (b_{2m + 1} - b_{2m + 2}) - \dots - (b_{2n - 1} - b_{2n}) \\
&\leq s_{2m}
\end{align*}
$$

so $$(s_{2m})_{m = 0}^\infty$$ is decreasing eventually. Also,

$$
\begin{align*}
    S_{2(n + 1) + 1} = s_{2n + 1} + (b_{2n + 1} - b_{2(n + 1) + 1}) \geq s_{2n + 1}
\end{align*}
$$

so $$(s_{2m + 1})_{m = 0}^\infty$$ is increasing. 

We have that $$\forall n \gt m \geq N_0$$, $$s_{2n} \geq s_{2m + 1}$$ since

$$
\begin{align*}
    s_{2n} = s_{2m + 1} + (b_{2n + 2} - b_{2n + 3}) + \dots + (b_{2n - 2} - b_{2n - 1}) + b_{2n} \geq s_{2m + 1}
\end{align*}
$$

so $$(s_{2n})$$ is bounded below. Similarily,

$$
\begin{align*}
s_{2n + 1} = s_{2m} - (b_{2m + 1} - b_{2m + 2}) - \dots - (b_{2n - 1} - b_{2n}) - b_{2n + 1} \leq s_{2m}
\end{align*}
$$

so $$(s_{2n + 1})$$ is bounded above. By the monotone convergence theorem, $$\lim_{m \to \infty} s_{2m} = \alpha, \lim_{m \to \infty} {s_{2m + 1}} = \beta$$. For a proof of contradictino, suppose $$\alpha > \beta$$. Choose $$\epsilon = \frac{\alpha - \beta}{3}$$. Choose $$N_1 \geq N_0 / 2$$ such that $$\vert s_{2m - \alpha} \vert \lt \epsilon, \vert s_{2m + 1} - \beta \vert \lt \epsilon$$, $$\vert b_{N_1 + 1} \vert \lt \epsilon$$ for all $$m \gt N_1 / 2$$. Then 

$$
\begin{align*}
\vert \alpha - \beta \vert &= \vert \alpha - s_{N_1} + s_{N_1} - s_{N_1 + 1} + s_{N_1 + 1} - \beta \\
&\leq \vert s_{N_1} - \alpha \vert + \vert s_{N_1 + 1} - s_{N_1} \vert + \vert s_{N_1 + 1} - \beta \vert \\
&\lt 3 \epsilon \\
&= \vert \alpha - \beta \vert
\end{align*}
$$
a contradiction.

We claim that since $$\lim_{m \to \infty} s_{2m} = \alpha = \lim_{m \to \infty} s_{2m + 1}$$, then $$\lim_{n \to \infty} s_n = \alpha$$ (**TODO**). $$\blacksquare$$

**Definition**: A **rearrangement** of $$\sum a_n$$ is any series $$\sum a_{\sigma(n)}$$ where $$\sigma: \mathbb N \leftrightarrow \mathbb N$$.

**Example**: 

$$
\begin{align*}
    \sum_{n = 1}^\infty \frac{(-1)^n}{n} &= -1 + 1/2  - 1/3 + 1/4 - \dots \\
    &= \left( -1 - \frac{1}{3} - \frac{1}{5} - \frac{1}{7}- \frac{1}{9} - \frac{1}{11} \dots \right) + (\frac{1}{2} + \frac{1}{4}) + (- \frac{1}{13} - \dots - \frac{1}{21})
\end{align*}
$$

**Theorem (Riemann)**: Let $$\sum_{n = 0}^\infty$$ be conditionally convergent with $$\alpha \in \mathbb R$$ fixed. Then, there exists a $$\sigma: \mathbb N \leftrightarrow \mathbb N$$ such that $$\sum_{n = 0}^\infty a_{\sigma(n)} = \alpha$$.

*Proof*: For any $$n \in \mathbb N$$, $$a_n^+ = \max \lbrace 0, a_n \rbrace, a_n^- = \max \lbrace 0, -a_n \rbrace$$. Then $$\forall n, a_n^+, a_n^- \geq 0, a_n = a_n^+ - a_n^-, \vert a_n \vert = a_n^+ + a_n^-$$.

We show that $$\sum_{n = 0}^\infty a_n^+ = \infty, \sum_{n = 0}^\infty a_n^- = \infty$$. Suppose $$\sum_{n = 0}^\infty a_n^+ \lt \infty$$. Then, $$\sum_{n = 0}^\infty a_n^- = \sum_{n = 0}^\infty (a_n^+ - a_n) = \sum_0^\infty a_n^+ \sum_0^\infty a_n \lt \infty$$. Then, $$\sum_0^\infty \vert a_n \vert = \sum_0^\infty (a_n^+ - a_n^-) = \sum_0^\infty a_n^+ + \sum_0^\infty a_n^- \lt \infty$$; a contradiction. Similarily, if $$\sum a_n^- \lt \infty$$, then one shows $$\sum a_n^+ \lt \infty$$, hence $$\sum \vert a_n \vert \lt \infty$$; a contradiction.

Pick $$\alpha \in \mathbb R$$. Define $$(b_k)_{k = 0}^\infty = (a_{n_k})_{k = 0}^\infty$$ as the sequence of all the terms $$a_n$$ such that $$a_n = a_n^+$$. Also define $$(c_l)_{l = 0}^\infty$$ as the remaining terms of $$(a_n)$$ (i.e. such that $$a_n = a_n^- \land a_n \lt 0$$).

Define $$\sigma: \mathbb N \leftrightarrow \mathbb N$$ as follows. Set $$\sigma(0) = 0$$. So, $$a_\sigma(0) = a_0, s_0 = a_0$$, where $$(s_N)_{N = 0}^\infty$$ is the sequence of partial sums of $$\sum_{n = 0}^\infty a_{\sigma(n)}$$.

Then, if $$s_0 \leq \alpha$$, set $$a_{\sigma(1)}, \dots, a_{\sigma(N_1)}$$ to be consecutive terms of $$(b_k)$$ until $$s_{N_1} \gt \alpha$$. Next, set $$a_{\sigma(N_1 + 1)}, \dots, a_{\sigma(N_2)}$$ to be consecutive terms of $$(c_l)$$, until $$S_{N_2} \leq \alpha$$, etc.

Otherwise, if $$s_0 \gt \alpha$$, set $$a_{\sigma(1)}, \dots, a_{\sigma(N_1)}$$ to be the consecutive terms of $$(c_l)$$ until $$S_{N_1} \leq \alpha$$, etc.

We claim that $$\lim_{N \to \infty} s_N = \alpha$$. Show that $$\vert s_{N_k} - \alpha \vert \leq \vert a_{\sigma(N_k)} \vert$$ and $$\lim_{k \to \infty} a_{\sigma(N_k)} = 0$$ because $$\lim_{n \to \infty} a_n = 0$$ (**TODO**). $$\blacksquare$$

**Theorem**: Suppose $$\sum_{n = 0}^\infty a_n$$ is absolutely convergent, and let $$\sigma: \mathbb N \leftrightarrow \mathbb N$$ be any bijection. Then, $$\sum_{n = 0}^\infty a_{\sigma(n)}$$ is absolutely convergent, and $$\sum_{n = 0}^\infty a_{\sigma(n)} = \sum_{n = 0}^\infty a_n$$.

**Definition**: A **decimal expansion** of $$x \in \mathbb R$$ is a sequence $$(a_n)_{n = 0}^\infty$$ such that
* $$a_0 \in \mathbb Z$$
* $$a_n \in \lbrace 0, \dots, 9 \rbrace$$, $$\forall n \geq 1$$
* $$a_0 \leq x \leq a_0 + 1$$, $$a_0 + \frac{a_1}{10} + \dots + \frac{a_n}{10^n} \leq x \leq \frac{a_1}{10} + \dots + \frac{a_n + 1}{10^n}, \forall n \geq 1$$

We write, $$x = a_0.a_1a_2a_3\dots$$

**Proposition**: 
1. Every decimal expansion represents a real number (i.e., $$\sum_{n = 0}^\infty \frac{a_n}{10^n} \in \mathbb R$$).
2. Every $$x \in \mathbb R$$ admits a decimal expansion (but not necessarily a unique one!)

*Proof*:
1. Given a decimal expansion $$(a_n)_{n = 0}^\infty$$, $$\sum_{n = 0}^\infty \frac{a_n}{10} = a_0 + \sum_{n = 1}^\infty \frac{a_n}{10^n} \leq a_0 + \sum_{n = 1}^\infty \frac{9}{10^n} = a_0 + \frac{9}{10} \cdot \sum_{n = 0}^\infty \frac{1}{10^n} = a_0 + 1 \lt \infty$$.  $$\blacksquare$$
2. Pick an arbitrary $$x \in \mathbb R$$, WLOG, assume $$x \geq 0$$. By the Archmidean Principle, $$\exists n \in \mathbb N$$ such that $$x \lt n$$. Let $$a_0 + 1$$ be the least such integer, which exists by the well-ordering of $$\mathbb N$$. Then, $$a_0 \leq x \leq a_0 + 1$$. Consider $$x - a_0 \in [0, 1]$$. Then, $$x - a_0 \geq \frac{0}{10} \land x - a_0 \leq \frac{9 + 1}{10}$$, so $$\exists ! a_1 \in \lbrace 0, \dots, 9 \rbrace$$ such that $$\frac{a_1}{10} \leq x - a_0 \leq \frac{a_1 + 1}{10}$$; i.e., $$a_0 + \frac{a_1}{10} \leq x \leq a_0 + \frac{a_1 + 1}{10}$$. Having choosen $$a_2, \dots, a_k$$ such that $$a_0 + \frac{a_1}{10} + \dots + \frac{a_k}{10^k} \leq x \leq a_0 + \frac{a_1}{10} + \dots + \frac{a_k + 1}{10^k}$$, consider $$\alpha := 10^k \cdot \left( x - \sum_{n = 0}^k \frac{a_n}{10^n}\right) \in [0, 1]$$. Then $$\exists ! a_{k + 1} \in \lbrace 0, \dots, 9 \rbrace$$ such that $$\frac{a_{k + 1}}{10} \leq \alpha \leq \frac{a_{k + 1} + 1}{10}$$. Then take the two inequalities, divide both by $$10^k$$ to get the desired inequality. $$\blacksquare$$

**Example**: $$1.000 \dots = 0.999 \dots$$ since $$\sum_{n = 1}^\infty \frac{9}{10^n} = \frac{9}{10} \sum_{n = 0}^\infty \frac{1}{10^n} = \frac{9}{10} \cdot \frac{1}{1-\frac{1}{10}} = 1$$.
