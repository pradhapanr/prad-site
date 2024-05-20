Let the limit points of $H = \lbrace p \rbrace$

1. $\vert H \vert \leq \aleph_0$
2. $H = \lbrace x_n : n \in \mathbb N \rbrace$ such that $x_n \to_{n \to \infty} p$

(1) Suppose $\vert H \vert \geq \mathfrak{c}$. Let $U_n$ be the interval $(p - \frac{1}{n}, p + \frac{1}{n})$. Define $V := \mathbb R \setminus U_1$. Then consider the reals as $\mathbb R = (V \setminus U_1) \cup (U_1 \setminus U_2) \cup (U_2 \setminus U_3) \cup \dots \cup \lbrace p \rbrace$ and 

$$
\begin{align*}
    = (V \setminus U_1) \cup \bigcup_{n = 1}^\infty u_n \setminus U_m \cup \lbrace p \rbrace
\end{align*}
$$

since $\vert H \vert \gt \aleph_0$ ($H$ is uncountable), $\vert H \cap (V \setminus U_1) \vert \gt \aleph_0 \lor \exists n \geq 1, \vert H \cap (U_n \setminus U_{n + 1}) \vert \gt \aleph_0$. That is, since $H$ is uncountable, if we partition it into countably many sets, then at least one must be uncountable. Say $N \in \mathbb N$ is such that $\vert H \cap (U_N \setminus U_{N + 1} )\vert$ is uncountable. So this is an infinite and bounded set. So let $(x_n)_{n = 0}^\infty \subseteq H \cap (U_N \setminus U_{N + 1})$ be any infinite sequence. Since $H \cap (U_N \setminus U_{N + 1}) \subseteq U_N$ and $U_N$ is bounded, $(x_n)$ is bounded, so we can choose from it a convergent subsequence $(x_{n_k})$ convergent $\bar U_N \setminus U_{N + 1}$. So the limit of this subsequence is not equal to $p$; a contradiction.

Suppose $\vert H \cap (U_n \setminus U_{n + 1}) \lt \aleph_0$. Then $\vert H \cap V \vert \gt \aleph_0$. (uncountable) WLOG, assume $\vert H \cap (-\infty, p - 1] \vert \gt \aleph_0$. Consider $V_1 = [p - 2, p - 1], V_2 = [p - 3, p - 2], \dots, V_n = [p - n, p - n + 1]$. $V = \cup_{n = 1}^\infty V_n \to H \cap V = \bigcup_{n = 1}^\infty (H \cap V_n)$. So at least one of these sets must be uncountable, since it is a countable union of countable sets. Say $N_1 \in \mathbb N$ such that $\vert H \cap V_{N_1} \vert \gt \aleph_0$. TODO. So $p \not\in V_{N_1}$; a contradiction.


---

Lemma: $\forall n, 0 \leq P_n(x) \leq \sqrt x$

Hint: $P_{n + 1}(x) = P_n(x) +$ difference of squares

---

5. Hint: $f_n(x) \in [0, \frac{1}{2}]$

---

Practice Final 9b

Given $\forall \epsilon \gt 0, \exists N \in \mathbb N, \forall n \geq N, \forall x \in \mathbb R, \vert f_n(x) - f(x) \vert \lt \epsilon$. In particular, for $\epsilon = 1$, we can choose $N_0 \in \mathbb N$ such that $forall x \in \mathbb R, \vert f_{N_0}(x) - f(x) \vert \lt \epsilon$. We know that $f_{N_0}$ is bounded below by $M_{N_0}$. Then $f(x) \gt M_{N_0} - 1$.

---

Practice Final 8c

Lemma: $f$ is continuous at $c \in \mathbb R \iff \lim_{x \to c^-} f(x), \lim_{x \to c^+} f(x)$ exists and left and right limits are equal to $f(c)$.

---

Practice Final 10

Wnat: $\forall c \in X := \lbrace x \in \mathbb R : f(x) \lt 0 \rbrace$, $\exists r \gt 0$ such that $(c - r, c + r) \subseteq \lbrace x \in \mathbb R : f(x) \lt 0 \rbrace$. That is, $\forall x \in \mathbb R, \vert x - c \vert \lt r \implies f(x) \lt 0$.

*Proof:* Let $c \in X$. Then $f(c) \lt 0$. Choose $\epsilon = \frac{\vert f(c) \vert}{2}$. Then by continuity of $f$, choose $\delta$ such that $\vert x - c \vert \lt \delta \implies \vert f(x) - f(c) \vert \lt \epsilon$.

---

Problem Set 5: 9

For contradiction, suppose $f \neq g$, so $\exists x_0 \in \mathbb R$ such that $f(x_0) \neq g(x_0)$. Consider $h(x) := f(x) - g(x), h: \mathbb R \to \mathbb R$ is continuous. Then $h(x_0) \neq \emptyset$. By continuity of $h$ at $x_0$, we can choose $\delta_0 \gt 0$ such that $\forall x \in \mathbb R, \vert x - x_0 \vert \lt \delta_0 \implies h(x) \neq 0$. So the set $U = (x_0 - \delta_0, x_0 + \delta_0)$ is disjoint from $D$; contradicting that $D$ is dense.

---


Practice Final 10

Let $x$ be such that $f(x) \lt 0$. By continuity of $f$, choose $\delta$ such that $\forall x_0, \vert x - x_0 \vert \lt \delta \implies \vert f(x) - f(x_0) \vert \lt \frac{\vert f(x) \vert}{2}$. Then, $\forall x_0 \in (x - \delta, x + \delta)$, $\vert f(x) - f(x_0) \vert \lt \frac{\vert f(x) \vert}{2}$, so $f(x_0) \lt f(x) - \frac{f(x)}{2} = \frac{f(x)}{2} \lt 0$. So $(x - \delta, x+ \delta) \subseteq$ the set of interest. Thus it is open.