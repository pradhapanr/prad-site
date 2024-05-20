---
layout: default
toc: true
order: 7
---

# Sequences and Series of Functions

**Definition**: Let $$A \subseteq \mathbb R$$ be non-empty, $$\mathcal F = \lbrace f: A \to \mathbb R \rbrace$$ be a set of functions. A **sequence of functions on A** is a function 

$$
\begin{align*}
    n \in \mathbb N \mapsto f_n \in \mathcal F
\end{align*}
$$

and we write $$(f_n)_{n = 0}^\infty$$

**Definition**: Given a sequence of functions on $$A$$, $$(f_n)_n$$ and a function $$f: A \to \mathbb R$$, we say that $$(f_n)$$ **converges to $$f$$ pointwise** when 

$$
\begin{align*}
    \forall a \in A, \forall \epsilon \gt 0, \exists N_a \in \mathbb N, \forall n \geq N_a, \vert f_n(a) - f(a) \vert \lt \epsilon
\end{align*}
$$

We say $$(f_n)$$ **converges uniformly** on $$A$$ to $$f$$, when 

$$
\begin{align*}
    \forall \epsilon \gt 0, \exists N \in \mathbb N, \forall n \geq N, \forall x \in A, \vert f_n(x) - f(x) \vert \lt \epsilon
\end{align*}
$$

and we write $$f_n \rightrightarrows_A f$$.

**Remark**: If $$f_n \rightrightarrows_A f$$, then $$f_n(x) \to_{n \to \infty} f(x), \forall x \in A$$, that is, $$f_n \to_{n \to \infty} f$$. That is, uniform convergence implies pointwise convergence.

**Remark**: If $$f_n \to_{n \to \infty} f$$, then $$f_n \rightrightarrows g \implies g = f$$.

**Example**: $$f_n(x) = x^n, x \in [0, 1]$$

Claim 1: $$f_n \to f$$, where 

$$
\begin{align*}
    f(x) = \begin{cases}
        0 & x \in [0, 1) \\
        1 & x = 1
    \end{cases}
\end{align*}
$$

*Proof*: For any $$x \in [0, 1)$$, we have $$\lim_{n \to \infty} x^n = 0 = f(x)$$. When $$x = 1, x^n = 1, \forall n \implies f_n(1) \to_{n \to \infty} f(1)$$. $$\blacksquare$$

Claim 2: $$(f_n)$$ doesn't converge uniformly to any function.

*Proof*: Consider $$\epsilon = 1/2$$. If $$f_n \rightrightarrows f$$, then $$\forall k \in \mathbb Z_+$$, $$\exists N \in \mathbb N, \forall n \geq N, f_n(1 - \frac{1}{k}) \lt \frac{1}{2}$$, that is, $$(1 - \frac{1}{k})^n \lt \frac{1}{2}$$. We have 

$$
\begin{align*}
    1 - \frac{1}{k} \lt \frac{1}{\sqrt[n]{2}} 
    &\iff \frac{1}{k} \gt 1 - \frac{1}{\sqrt[n]{2}} = \frac{\sqrt[n]{2} - 1}{\sqrt[n]{2}} \\
    &\iff \frac{\sqrt[n]{2}}{\sqrt[n]{2} - 1} \gt k
\end{align*}
$$


**Theorem**: If $$A \subseteq \mathbb R$$ is a non-empty set, $$(f_n)$$ is a seuqence of functions continuous on $$A$$, such that $$f_n \rightrightarrows_A f$$, then $$f$$ is continuous on $$A$$.

*Proof*: Let $$a \in A$$ and $$\epsilon \gt 0$$. Choose $$N_0 \in \mathbb N$$ such that $$\forall n \geq N_0, \forall x \in A, \vert f_n(x) - f(x) \vert \lt \epsilon/3$$. Choose $$\delta \gt 0$$ such that $$\forall x \in A, \vert x - a \vert \lt \delta \implies \vert f_{N_0}(x) - f_{N_0}(a) \vert \lt \epsilon/3$$. Now, $$\forall x \in A$$, 

$$
\begin{align*}
    \vert x - a \vert \lt \delta &\implies \vert f(x) - f(a) \vert \\
    &= \vert f(x) - f_N(x) + f_N(x) - f_N(a) + f_N(a) - f(a) \vert \\
    &\leq \epsilon/3 + \epsilon/3 + \epsilon/3 = \epsilon
\end{align*}
$$

**Definition**: We say that $$(f_n)$$ is **Cauchy** (on $$A$$) when 

$$
\begin{align*}
    \forall \epsilon \gt 0, \exists N_0 \in \mathbb N, \forall n, m \geq N_0, \forall x \in A \vert f_m(x) - f_n(x) \vert \lt \epsilon
\end{align*}
$$

**Theorem**: A functional sequence $$(f_n)$$ in $$A$$ is uniformly convergent on $$A$$ if and only if it is Cauchy on $$A$$.

*Proof*: ($$\rightarrow$$) Suppose $$f: A \to \mathbb R$$ is such that $$f_n \rightrightarrows_A f$$. Let $$\epsilon \gt 0$$. Choose $$N_0 \in \mathbb N$$ such that $$\forall n \geq N_0, \forall x \in A, \vert f_n(x) - f(x) \vert \lt \epsilon/2$$. Then, $$\forall m, n, \geq N_0, \forall x \in A$$, $$\vert f_m(x) - f_n(x) \vert = \vert (f_m(x) - f(x)) + (f(x) - f_n(x)) \vert \leq 2 \cdot \epsilon/2 = \epsilon$$.

($$\leftarrow$$) Now, suppose $$(f_n)$$ is Cauchy on $$A$$. Then $$\forall x \in A$$, $$(f_n(x))_n \subseteq \mathbb R$$ is Cauchy, so $$\lim_{n \to \infty} f_n(x) =: f(x)$$. Hence, we have $$f: x \in A \mapsto f(x) \in \mathbb R$$. We claim that $$f_n \rightrightarrows_A f$$. Let $$\epsilon \gt 0$$. Choose $$N_0 \in \mathbb N$$ such that $$\forall m, n \geq N_0, \forall x \in A, \vert f_m(x) - f_n(x) \vert \lt \epsilon/2$$. Pick an arbitrary $$n_0 \geq N_0$$ and $$x_0 \in A$$. Then for any $$m \geq N_0$$, $$\vert f_m(x_0) - f_{n_0}(x_0) \vert \lt \epsilon/2$$. So, $$f_{n_0} - \frac{\epsilon}{2} \lt f_m(x_0) \lt f_{n_0}(x_0) + \frac{\epsilon}{2}$$. As $$m \to \infty$$, since the left and right inequalities are constant sequences, we have

$$
\begin{align*}
    &f_{n_0}(x_0) - \frac{\epsilon}{2} \leq f(x_0) \leq f_{n_0}(x_0) + \frac{\epsilon}{2} \\
    &\implies \vert f_n(x) - f(x) \vert \leq \epsilon/2 \lt \epsilon
\end{align*}
$$

Note that we use the fact that $$a_n \lt b_n \implies \lim a_n \leq \lim b_n$$.

## Series of Functions

**Definition**: Given $$A \subseteq \mathbb R$$ non-empty, a **series of functions on $$A$$** $$\sum_{n = 0}^\infty f_n$$ is a pair of sequences $$((f_n), (s_n))$$, where all $$f_n: A \to \mathbb R$$, $$(f_n)$$ is the sequence of terms, $$(s_n)$$ is the sequence of partial sums, and $$s_n(x) = \sum_{k = 0}^n f_k(x)$$ for all $$x \in A, n \in \mathbb N$$.

We say $$\sum f_n$$ is convergent to a function $$f: A \to \mathbb R$$
* **pointwise** when $$(s_n)$$ is pointwise convergent to $$f$$
* **uniformly** when $$(s_n) \rightrightarrows_A f$$
* **absolutely convergent** when $$\forall x \in A, \sum \vert f_n(x) \vert$$ is convergent.

**Theorem (Weierstrass M-Test)**: Given $$A \neq \emptyset$$ and a series $$\sum_{n = 0}^\infty f_n(x)$$ of functions on $$A$$, suppose $$\forall n \in \mathbb N$$, $$\exists M_n \geq 0$$ such that $$\forall x \in A, \vert f_n(x) \vert \leq M_n$$. Assume $$\sum_{n = 0}^\infty M_n$$ is convergent. Then, $$\sum_{n = 0}^\infty f_n$$ is absolutely and uniformly convergent on $$A$$.

*Proof*: For every $$x \in A, 0 \leq \sum_{n = 0}^\infty \vert f_n(x) \vert \leq \sum_{n = 0}^\infty M_n$$, so $$\sum \vert f_n(x) \vert$$ converges by Comparison Test. So the series is absolutely convergent.

Let $$(s_n)_n$$ be the sequence of partial sums of $$\sum f_n$$. We show that $$(s_n)_n$$ is Cauchy on $$A$$. Let $$\epsilon \gt 0$$. Choose $$N_0 \in \mathbb N$$ such that $$\forall n \gt m \geq N_0$$, $$\sum_{k = m + 1}^n M_k \lt \epsilon$$, which is possible since $$\sum M_k$$ is convergent and thus its sequence of partial sums is Cauchy. Then $$\forall n \gt m \geq N_0, \forall x \in A$$, 

$$
\begin{align*}
\vert s_n(x) - s_m(x) \vert = \left\vert \sum_{k = m + 1}^n f_k(x) \right\vert \leq \sum_{k = m + 1}^n \vert f_k(x) \vert \leq \sum_{k = m + 1}^n M_k \lt \epsilon
\end{align*}
$$
$$\blacksquare$$

**Definition**: A **power series** centered at the **centre** $$c \in \mathbb R$$ with **coefficients** $$(a_n)_n \subseteq \mathbb R$$ is the series $$\sum_{n = 0}^\infty a_n(x - c)^n$$.

**Theorem**:
1. If the power series converges at $$x_0 \neq c$$ (note that every power series is convergent at $$c$$), then it converges absolutely and uniformly on $$[c - r, c + r]$$ for all $$0 \lt r \lt \vert x_0 - c \vert$$.
2. If the series diverges at $$x_0 \neq c$$, then it diverges at every $$x \in \mathbb R$$ such that $$\vert x - c \vert \gt \vert x_0 - c \vert$$.

**Definition** The **radius of convergence $$R$$** of the power series $$S = \sum a_n(x - c)^n$$ is $$\sup \lbrace r \gt 0 : S \text{ is absolutely and uniformly convergent on } [c - r, c + r] \rbrace$$ if $$\exists x_0 \neq c$$ such that $$S$$ converges. Otherwise, $$R := 0$$.

**Definition**: A function $$f: I \to \mathbb R$$ is **analytic** when $$\forall c \in I, \exists (a_n)_n \subseteq \mathbb R, \exists r \gt 0$$ such that $$(c - r, c + r) \subseteq I$$ and $$f(x) = \sum_{n = 0}^\infty a_n (x - c)^n, \forall x \in (c - r, c + r)$$.

**Definition:** A family $$\lbrace U_\iota \rbrace_{\iota \in I}$$ of open sets in $$\mathbb R$$ is called an **open cover** of a set $$A \subseteq \mathbb R$$ when $$A \subseteq \bigcup U$$.

**Proposition**: If $$K \subseteq \mathbb R$$ is a compact set, then any open cover of $$K$$ admits a finite subcover.

*Proof*: Let $$K \subseteq \mathbb R, K \neq \emptyset$$ be compact. Observe that $$\forall r \gt 0, \exists a_1, \dots, a_n \in \mathbb R$$ such that $$K \subseteq \bigcup_{i = 1}^n (a_i - r, a_i + r)$$. Suppose for contradiction that $$\lbrace U_\iota \rbrace_{\iota \in I}$$ is an open cover of $$K$$ such that no finite number of $$U_\iota$$ covers $$K$$. Consider $$K = \bigcup_{i = 1}^s K \cap [a_i - 1, a_i + 1]$$. Pick $$K_1 := K \cap [a_1 - 1, a_1 + 1]$$ such that it cannot be covered by finitely many $$U_\iota$$. Consider $$K_1 = \bigcup_{j = 1}^t K_1 \cap [b_j - \frac{1}{2}, b_j + \frac{1}{2}]$$. Similarily, pick $$K_2 = K_1 \cap [b_2 - \frac{1}{2}, b_2 + \frac{1}{2}]$$ such that it cannot be covered by finitely many $$U_\iota$$, and so on. Hence, we get a sequence of compacts $$(K_n)$$, $$K_1 \supseteq K_2 \supseteq \dots$$ with the diameter of $$K_{n + 1}$$ half of that of $$K_n$$, none of which can be covered by finitely many $$U_\iota$$. Pick $$\forall n \geq 1, x_n \in K_n$$. Then $$(x_n) \subseteq K$$ is a convergent sequence. So $$p := \lim_{n \to \infty} x_n \in K$$. Let $$U_{\iota_0}$$ be such that $$p \in U_{\iota_0}$$. Let $$\epsilon \gt 0$$ such that $$(p - \epsilon, p + \epsilon) \subseteq U_{\iota_0}$$. For all but finitely many $$n \geq 1$$, $$K_n \subseteq U_{\iota_0}$$. So $$K_n$$ does have a finite cover, namely $$U_{\iota_0}$$; a contradiction. $$\blacksquare$$

**Theorem (Stone-Weierstrass)**: Suppose $$K \subseteq \mathbb R$$ is a non-empty compact set, $$f: K \to \mathbb R$$ continuous. Then, there is a sequence $$P_n \in \mathbb R[x]$$ such that $$P_n \rightrightarrows_K f$$.

*Proof*: Let $$\mathscr A := \lbrace f \in \mathscr C(K; \mathbb R) : \forall \epsilon \gt 0, \exists P \in \mathbb R[x], \forall x \in K, \vert f(x) - P(x) \vert \lt \epsilon \rbrace$$. That is, $$\mathscr A$$ is the set of continuous functions $$f: K \to \mathbb R$$ such that we can pick a polynomial that is arbitrarily close to $$. We want to show that $$\mathscr A = \mathscr C(K; \mathbb R)$$.

(1) If $$f \in \mathscr C(K; \mathbb R)$$ and $$\forall \epsilon \gt 0$$, $$\exists g \in \mathscr A$$ that is arbitrarily close to $$f$$, then $$f \in \mathscr A$$.

*Proof (1)*: Pick $$\epsilon \gt 0$$. Choose $$g \in \mathscr A$$ such that $$\forall x \in K, \vert f(x) - g(x) \vert \lt \epsilon/2$$. Since $$g \in \mathscr A$$, choose $$P \in \mathbb R[x]$$, such that $$\forall x \in K, \vert g(x) - P(x) \vert \lt \epsilon/2$$. Then, $$\forall x, \vert f(x) - P(x) \vert \leq \vert f(x) - g(x) \vert + \vert g(x) - P(x) \lt \epsilon/2 + \epsilon/2 = \epsilon$$ So $$f \in \mathscr A$$. $$\blacksquare$$

(2) $$f, g \in \mathscr A \implies f \cdot g \in \mathscr A$$

*Proof (2)*: Let $$M \gt 0$$ be such that $$\vert f(x) \vert, \vert g(x) \vert \lt M, \forall x \in K$$. Given $$\epsilon \gt 0$$, choose $$P, Q \in \mathbb R[x]$$ such that $$\vert f(x) - P(x) \vert, \vert g(x) - Q(x) \vert \lt \frac{\epsilon}{2(2M + 1)}$$ and $$\vert g(x) - Q(x) \vert \lt 1, \forall x \in K$$. Then $$\forall x \in K$$, 

$$
\begin{align*}
    \vert f(x) g(x) - P(x)Q(x) \vert
    &= \vert f(x)g(x) - f(x)Q(x) + f(x)Q(x) - P(x)Q(x) \vert \\
    &\leq \vert f(x) \vert \cdot \vert g(x) - Q(x) \vert + \vert Q(x) \vert \cdot \vert f(x) - P(x) \vert \\
    &\lt \frac{\epsilon}{2} + \frac{\epsilon}{2} \\
    &= \epsilon
\end{align*}
$$

So $$f \cdot g \in \mathscr A$$. $$\blacksquare$$

(3) $$f, g \in \mathscr A \implies f + g \in \mathscr A$$

*Proof (3)*: TODO.

(4) $$f \in \mathscr A, c \in \mathbb R \implies c \cdot f \in \mathscr A$$

*Proof (4)*: TODO.

(5) $$f \in \mathscr A \implies P \circ f \in \mathscr A, \forall P \in \mathbb R[x]$$

*Proof (5)*: Follows from (2), (3), (4). For example, if $$P(x) = x^3 + 2x - 5$$, then $$(P \circ f)(x) = f^3(x) + 2f(x) - 5$$; a finite linear combination of functions in $$\mathscr A$$. $$\blacksquare$$

(6) $$f \in \mathscr A \implies \vert f \vert \in \mathscr A$$

*Proof (6)*: By (2), $$f^2 \in \mathscr A$$. Note that $$\vert f(x) \vert = \sqrt{f(x)^2}$$. If $$\max_{x \in K} \vert f(x) \vert \leq 1$$, by Problem Set 6, Problem 2, $$\exists P \in \mathbb R[x], \forall x \in K, \vert \sqrt{f^2(x)} - P(f(x)) \vert \lt \epsilon$$. If instead $$\max_{x \in K} \vert f(x) \vert =: M \gt 1$$, then $$\left\vert \frac{f}{M} \right\vert \in \mathscr A$$, or $$\frac{1}{M} \cdot \vert f \vert \in \mathscr A \implies \vert f \vert = M \cdot \frac{1}{m} f \in \mathscr A$$. $$\blacksquare$$

(7) $$f, g \in A \implies \max \lbrace f, g \rbrace, \min \lbrace f, g \rbrace \in \mathscr A$$.

*Proof (7)*: Observe that $$\max \lbrace \alpha, \beta \rbrace = \frac{\alpha + \beta}{2} + \frac{\vert \alpha - \beta \vert}{2}$$ and $$\min \lbrace \alpha, \beta \rbrace = \frac{\alpha + \beta}{2} - \frac{\vert \alpha - \beta \vert}{2}$$. So the claim follows from (2), (3), (4). $$\blacksquare$$

(8) $$\forall x_1 \neq x_2, x_{1}, x_{2} \in K, \forall \alpha, \beta \in \mathbb R, \exists h \in \mathscr A$$ such that $$h(x_1) = \alpha$$ and $$h(x_2) = \beta$$. 

*Proof (8)*: Choose $$P \in \mathbb R[x]$$ such that $$P(x_1) \neq P(x_2)$$. Define 

$$
\begin{align*}
    h(x) := \alpha + (\beta - \alpha) \cdot \frac{P(x) - P(x_1)}{P(x_2) - P(x_1)}
\end{align*}
$$

*Proof of Theorem*: Given $$f \in \mathscr C(K; \mathbb R), \epsilon \gt 0$$.

Step 1: For any $$x, y \in K$$, choose $$h_{x, y} \in \mathscr A$$ such that $$h_{x, y}(x) = f(x) \land h_{x, y}(y) = f(y)$$.

Step 2: Fix $$x_0 \in K$$. For any $$y \in K, f(y) - h_{x_0, y}(y) = 0$$. Since this is the difference of continuous functions, it is continuous. So choose an open neighborhood $$U_y$$ of $$y$$ such that $$\forall z \in K \cap U_y$$, $$f(z) - h_{x_0, y}(z) \gt -\epsilon$$. By compactness, there are finitely many such neighborhoods $$U_{y_1}, \dots, U_{y_n}$$ such that their union covers $$K$$. Set $$h_{x_0} := \min \lbrace h_{x_0, y_1}, \dots, h_{x_0, y_n} \rbrace$$. By (7), $$h_{x_0} \in A$$. Also, $$\forall z \in K, f(z) + \epsilon \gt h_x(z)$$, sinec $$h_{x_0}$$ is the minimum of all such functions, which themselves satisfy the inequality locally.

Step 3: Since $$\forall x \in K, h_x(x) - f(x) = 0$$. Then by continuity, we can choose an open neighborhood $$V_x$$ such that $$\forall z \in V_x$$, $$h_x(z) - f(z) \gt -\epsilon$$. Let $$x_1, \dots, x_m \in K$$ be such that $$K \subseteq V_{x_1} \cup \dots \cup V_{x_m}$$, which exists by the proposition about open covers. Define $$g := \max \lbrace h_{x_1}, \dots, h_{x_n} \rbrace \in A$$, by (7). Then $$\forall z \in K, g(z) \gt f(z) - \epsilon$$. Hence, $$\forall z \in K$$, $$f(z) - \epsilon \lt g(z) \lt f(z) + \epsilon$$. $$\blacksquare$$.