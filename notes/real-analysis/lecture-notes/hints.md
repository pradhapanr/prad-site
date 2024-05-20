$\alpha = \beta = \lvert A \rvert$

To show that $\alpha + n = \beta + n$, suffices to show a bijection between $A \sqcup I_n$ and $A \sqcup I_N$

Set $\psi(x) = x, \forall x \in A \sqcup I_n$. Show bijective.

Assume $\alpha + n = \beta + n$. Let $\alpha = \lvert A \rvert, \beta = \lvert B \rvert$ for some sets $A, B$. Assume $A \cap \mathbb N = \emptyset = B \cap \mathbb N$. Then $\alpha + n = \lvert A \cup I_n \rvert$ and $\beta + b = \lvert B \cup I_n \rvert$. By we can choose a bijection $\phi: A \cup I_n \leftrightarrow B \cup J_n$. If $\phi(I_n) \subseteq J_n$, then $\phi(I_n) = J_n$. Hence, $\phi(A) = B$ since $\forall a \in A, \phi(a) \not\in J_n$, so $\phi(a) \in B$. And, $\forall b \in B$, $\exists a \in A \cup I_n, \phi(a) = b$, but $a \not\in I_n, so $a \in A$.

Suppose instead that $\phi(I_n) = \lbrace b_1, \dots b_k \rbrace \sqcup \lbrace c_{k + 1}, \dots, c_n \rbrace$, where $b_j \in B, c_j \in J_n$. Define $\psi: B \cup J_n \leftrightarrow B \cup J_n$ by $\psi(b_i) = d_i, \psi(d_i) = b_i, \psi(y) = y \forall y \not\in \lbrace b_i, d_i \rbrace$ where $d_i$ are the elements in $J_n$ mapped to by $\phi$. Then $\psi \circ \phi: A \cup I_n \leftrightarrow B \cup J_n$ is such that $\psi \circ \phi(I_n) = J_n$. $\blacksquare$

$A \sqcup I_n \leftrightarrow B \sqcup \mathbb N_+$. First seperate initial $J_n$ interval from $\mathbb N_+$: $B \sqcup \mathbb N_+ = B \sqcup ( \mathbb N_+ \setminus J_n) \sqcup J_n$. Then $A \sqcup I_n = (A \setminus C) \sqcup C \sqcup I_n$ where $C \sim \mathbb N_+ \setminus J_n$. So $(A \setminus C) \sim B$, $C \sim (\mathbb N_+ \setminus J_n)$ (by definition), $I_n \sim J_n$.  Use same technique as (a) to swap values if they are not mapped in the right place, then compose functions to define a bijection.

---

4.20: Assume $(a_n)_n$ is such that $\lim a_{n + 1} - a_n = c$. We claim $\lim a_n = \infty$. By defintiion of the limit, $\forall \epsilon \gt 0$, (in particular, $\epsilon = c/2 \lt c$), $\exists N_0 \in \mathbb N$, such that $\forall n \geq N_0$, $\lvert a_{n + 1} - a_n - c \rvert \lt \epsilon$. Then $\lvert a_{n + 1} - a_n - c \rvert \lt c/2 \implies a_{n + 1} - a_n \gt c - c/2 = c/2$ $\forall n \geq N_0$. 

Hence $a_{N_0} \gt a_{N_0} + c/2, a_{N_0 + 2} + c/2 \gt a_{N_0} + 2 \cdot c/2, \dots$
so $a{N_0 + k} \gt a_{N_0} + k c/2 \to_{k \to \infty} \infty$, so $a_{N_0 + k} \to_{k \to \infty} \infty$, so ($\star$) $\lim a_n = \infty$.

Proof of ($\star$): Let $M \gt 0$ be arbitrary. Choose $K_0 \in \mathbb N$ such that $\forall k \geq K_0, a_{N_0 + k} \gt M$. Set $N_1 = N_0 + K_0$. Then $\forall n \geq N_1, a_n$, $a_n = a_{N_0 + n - N_0 \geq K_0} \gt M$. 

---
---

Given $(a_n), (b_n), \lim \inf a_n + \lim \inf b_n \leq \lim \inf (a_n + b_n)$. Suppose for the sake of contradiction that there exists $(a_n), (b_n)$ such that $\lim \inf (a_n + b_n) \lt \lim \inf a_n + \lim \inf b_n$. Let $(a_{n_k}), (b_{n_k})$ be such that $\lim k \to \infty a_{n_k} + b_{n_k} = \alpha := \lim \inf (a_n + b_n)$. By B-W, there are subsequences $(a_{n_{k_l}})_l, (b_{n_{k_l}})_l$ such that $\lim_{l \to \infty} a_{n_{k_l}} = A \in \mathbb R$ and $\lim_{l \to \infty} b_{n_{k_l}} = B$. Ten, $A + B = \lim_{l \to \infty} ankl + bnkl = \lim_{k \to \infty}(a_{n_k} + b_{n_k}) = \alpha$. We know $A \geq \lim \inf a_n$ and $B \geq \lim \inf b_n$, so $A + B = \alpha \geq \lim \inf a_n + \lim \inf b_n$. And, $\alpha = \lim \inf (a_n + _n)$; a contradiction. $\blacksquare$

Claim: For any polynomial $P(x) \in \mathbb R[x]$, $\lim_{n \to \infty} P(n)^{1/n} = 1$. Pick $P(x) = a_k x^k + a_{k - 1} x^{k - 1} + \dots + a_0$. To apply squeeze theorem, look at $\vert P(n) \vert$, by triangle inequality $\leq \vert a_k n^k \vert + \dots + \vert a_0 \vert = n_k ( \alpha(n) := \vert a_k \vert + \vert a_{k - 1}n^{-1} \vert + \dots + \vert a_0 \vert n^{-k})\to_{n \to \infty} \vert a_k \vert$. Choose $N_0 \in \mathbb N$ such that $\forall n \geq N_0$, $\vert\alpha(n) - \vert a_k \vert \vert \lt \vert a_k \vert / 2$, or $\vert a_k \vert - \vert a_k \vert / 2 \lt \alpha(n) \lt \vert a_k \vert + \vert a_k \vert/2$. Hence, $\forall n \geq N_0$, taking the $n-th$ root of all sides of the inequality, by squeeze theorem $\alpha(n)^{1/n}$ tends to 1. So $\vert P(n) \vert ^{1/n} \leq n_k^{1/n} \cdot \alpha(n)^{1/n} = 1$.

Exercise: $\vert x + y \leq \vert x + \vert y \iff \vert \vert x \vert - \vert y \vert \vert \leq \vert x - y \vert$.

13 (Practide Midterm): We claim that $\beta := \sup B = \inf A$. Suppose $\beta < \inf A$. Consider $\beta + (\inf A - B)/2 =: \gamma$. Then $\beta \lt \alpha \lt \inf A \implies \gamma \in B$; a contradiction. Suppose $\beta \gt \inf A$. By definition of infinumum, pick $a \in A$ such that $a \lt \beta = \sup B$. Then, $a$ is not an upper bound pick $b \in B$ such that $a \lt b$; a contradiction based on the definition of $B$.

11 (Practice Midterm): We claim that $\lim_{k \to \infty} s_k$ exists $\iff \lim_{k \to \infty} t_k$ exists. (where $s_k$ is the partial sums of $a_n$ and $t_k$ is the partial sums of $b_k$). It suffices to show that for some $m, M \in \mathbb R$, $m t_k \leq s_k \leq M t_k$. So since $s_k$ is increasing, it is convergent by monotone convergence.