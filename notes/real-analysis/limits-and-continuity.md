---
layout: default
order: 6
toc: true
---

# Limits and Continuity

**Definition**: A set $$U \subseteq \mathbb R$$ is **open** when 

$$
\begin{align*}
    \forall a \in U, \exists r \gt 0, (a - r, a + r) \subseteq U
\end{align*}
$$

**Proposition**:
1. $$\mathbb R$$ and $$\emptyset$$ are open.
2. For any $$\lbrace U_\iota \rbrace_{\iota \in I}$$ family of open sets, $$\bigcup_{\iota \in I} U_\iota$$ is open.
3. If $$U_1, \dots, U_k$$ are open, then $$U_1 \cap \dots \cap U_k$$ is open.

*Proof*: 
1. $$\emptyset$$ is open because the definition holds vacuously. $$\blacksquare$$
2. Let $$\mathcal U := \lbrace U_\iota \rbrace_{\iota \in I}$$ be a family of open sets and $$a \in \bigcup \mathcal U$$. Let $$\iota_u \in I$$ be such that $$a \in U_{\iota_u}$$. By the openness of $$U_{\iota_u}$$, we can choose $$r \gt 0$$ such that $$(a - r, a + r) \subseteq \bigcup \mathcal U$$. $$\blacksquare$$.
3. Given $$U_1, \dots, U_k$$ open sets and $$a \in U_1 \cap \dots \cap U_k$$ there are $$r_1, \dots, r_k \gt 0$$ such that $$(a - r_j, a + r_j) \subseteq U_j$$ for $$j = 1\dots k$$. Set $$r = \min \lbrace r_1, \dots, r_k \rbrace$$. Then, $$(a - r, a + r) \subseteq (a - r_j, a + r_j) \subseteq U_j, \forall j$$. So $$(a - r, a + r) \subseteq U_1 \cap \dots \cap U_k$$.

**Example**: The infinite intersection of open sets is not open. Consider $$U_n = (-1/n, 1/n)$$ for $$n \in \mathbb Z_+$$. Then $$U_n$$ is open, $$\forall n \geq 1$$, but $$\bigcap_{n = 1}^\infty U_n = \lbrace 0 \rbrace$$, which is **not** open.

**Proposition**: Any open interval in $$\mathbb R$$ is an open set.

*Proof*: If $$I = (-\infty, \infty)$$, then $$I = \mathbb R$$, which is open. So suppose otherwise. Let $$a, b \in \mathbb R$$ and WLOG, suppose $$a \lt b$$. Let $$c \in (a, b)$$. Choose $$r = \min \lbrace c - a, b - c \rbrace$$. Let $$x \in (c - r, c + r)$$. Then $$a \leq c - r \lt x \lt c + r \leq b$$, so $$x \in (a, b)$$. So $$(c - r, c + r) \subseteq (a, b)$$, so $$(a, b)$$ is open. $\blacksquare$

**Proposition**: Any closed interval is a closed set.

*Proof*: For any closed interval $[a, b]$, one has $\mathbb R \setminus [a, b] = (-\infty, a) \cup (b, \infty)$, which is an open set. $\blacksquare

If $$(a, \infty)$$, choose $$r = c - a$$, and if $$(-\infty, b)$$, choose $$r = b - c$$.

**Definition**: A set $$F \subseteq \mathbb R$$ is **closed**, when $$\mathbb R \setminus F$$ is open.

**Proposition**:
1. $$\mathbb R$$ and $$\emptyset$$ are closed.
2. If $$\lbrace F_\iota \rbrace_{\iota \in I}$$ are closed sets, then $$\bigcap_{\iota \in I} F_\iota$$ is closed.
3. If $$F_1, \dots, F_k$$ are closed, then $$F_1 \cup \dots \cup F_k$$ is closed.

*Proof*: TODO.

**Definition**: A point $$a \in \mathbb R$$ is a **limit point** of a set $$A \subseteq \mathbb R$$ when $$\exists (x_n)_{n = 1}^\infty \subseteq A \setminus \lbrace a \rbrace$$ such that $$\lim_{n \to \infty} x_n = a$$.

**Theorem 1**: A set $$X$$ is closed if and only if

$$
[\forall x_0 \in \mathbb R, \exists (x_n)_{n = 1}^\infty, \lim_{n \to \infty} x_n = x_0] \implies x_0 \in X
$$

That is, a set is closed if and only if it contains all its limit points.

*Proof*: ($$\rightarrow$$) Assume $$X \subseteq \mathbb R$$ is closed, and let $$x_0 \in \mathbb R$$ and $$(x_n)_{n = 1}^\infty \subseteq X$$ be such that $$\lim_{n \to \infty} x_n = x_0$$. Suppose $$x_0 \not\in X$$. Then $$x_0 \in \mathbb R \setminus X$$, which is open. Choose $$\epsilon \gt 0$$ such that $$(x_0 - \epsilon, x_0 + \epsilon) \subseteq \mathbb R \setminus X$$. Then, $$\forall n \in \mathbb Z_+$$, $$\vert x_n - x_0 \vert \geq \epsilon$$, contradicting the assumption that $$\lim x_n = x_0$$. $\blacksquare$

($$\leftarrow$$) Assume the right side and suppose for the sake of contradiction that $X$ is not closed. Then $\mathbb R \setminus X$ is not open. Choose $x_0 \in \mathbb R \setminus X$ such that a neighborhood $(x_0 - 1/n, x_0 + 1/n) \not\subseteq \mathbb R \setminus X$. Then, $\exists x_n \in X$ such that $\vert x_n - x_0 \vert t 1/n$. So the sequence $(x_n)$ converges to $x_0$, and hence $x_0 \in X$, by assumption; a contradiction. $\blacksquare$

**Definition**: A set $$K \subseteq \mathbb R$$ is **compact**, when $$\forall (x_n)_n \subseteq K$$, $$\exists (x_{n_k})_k \subseteq (x_n)_n$$ convergent to an element of $$K$$.

**Proposition**: Every closed interval is a compact set.

*Proof*: Let $$I = [a, b]$$, with $$a \lt b$$ since if $$a = b$$ then $$I$$ is a singleton and there is nothing to show. Let $$(x_n)_n \subseteq [a, b]$$. By Bolzano-Weistress, we can choose a subsequence $$(x_{n_k})_k \subseteq (x_n)_n$$ such that $$\lim_{k \to \infty} x_{n_k} = x_0 \in \mathbb R$$. By the above theorem and since $$I = \bar I$$, it follows that $$x_0 \in I$$. $$\blacksquare$$

**Theorem (Heine-Borel)**: A set $$K \subseteq \mathbb R$$ is compact iff $$K$$ is closed and bounded.  

*Proof*: ($$\leftarrow$$) Assume $$K$$ is closed and bounded. Let $$S = (x_n)_n \subseteq K$$ be an arbitrary sequence. Since $$K$$ is bounded, $$S$$ is bounded, and by Bolzano-Weistress, we can choose a convergent subsequence $$S' = (x_{n_k})_k \subseteq S$$. Let $$x_0 = \lim_{k \to \infty} x_{n_k}$$. By Theorem 1, $$x_0 \in K$$.

($$\rightarrow$$) Assume for the sake of contradiction that $$K$$ is not bounded above. Then, $$\forall n \in \mathbb Z_+$$, $$\exists x_n \in K$$ such that $$x_n \geq n$$. We claim that $$(x_n)_n$$ contains no convergent subsequence. Suppose otherwise that there is $$(x_{n_k})_k \subseteq (x_n)_n$$ convergent to $$x_0 \in \mathbb R$$. Choose $$N_0 \in \mathbb N$$ such that $$N_0 \geq x_0 + 1$$. Then, $$\forall n \geq N_0$$, $$\vert x_n - x_0 \vert \geq 1$$. In particular, if $$K_0$$ is such that $$n_{k_0} \geq N_0$$, then $$\forall k \geq K_0, \vert x_{n_k} - x_0 \vert \geq 1$$. So there is no subsequence convergent to an $x_0 \in K$, contradicting the compactness of $K$. 

It remains to show that $$K$$ is closed. Let $$x_0 \in \mathbb R, (x_n)_n \subseteq K$$ be such that $$\lim_{n \to \infty} x_n = x_0$$. By assumption of the compcatness of $$K$$, we can choose a subsequence $$(x_{n_k})_k$$ convergent to $$z_0 \in K$$. Since $$\lim x_n$$ exists, then $$x_0 = z_0 \in K$$. So $$K$$ is closed by Theorem 1. $$\blacksquare$$

**Example**: The ternary Cantor set is a compact set.

**Definition**: A set $$U \subseteq \mathbb R$$ is called an (open) **neighborhood** of a point $$a \in \mathbb R$$ when $$U$$ is open and $$a \in U$$. 

**Proposition**: $a \in \mathbb R$ is a limit point of $A \subseteq \mathbb R$ when $\forall U$ open neighborhoods of $a$, $\exists x \in U \cap A \setminus \lbrace a \rbrace$.

## Limits

**Definition**: Given a function $$f: A \to \mathbb R, A \subseteq \mathbb R$$, and a limit point of $$A$$, $$a \in \mathbb R$$, we say that the **limit of $$f$$ at $$a$$ exists and equals $$L$$,** and we write $$\lim_{x \to a} f(x) = L$$ when 

$$
\begin{align*}
    \forall \epsilon \gt 0, \exists \delta \gt 0, \forall x \in A, 0 \lt \vert x - a \vert \lt \delta \implies \vert f(x) - L \vert \lt \epsilon
\end{align*}
$$

**Example**: Show that $$\lim_{x \to 1} \frac{1}{x} = 1$$. 

*Note*: Let $$a = 1, f(x) = \frac{1}{x}, A = \mathbb R \setminus \lbrace 0 \rbrace$$. We have

$$
\begin{align*}
    \vert 1/x - 1 \vert = \vert \frac{1 - x}{x} \vert = \frac{1}{\vert x \vert} \cdot \vert x - 1 \vert
\end{align*}
$$

Since we can make $$\vert x - 1 \vert$$ arbitrarily small, it remains to show that $$\frac{1}{\vert x \vert}$$ is bounded by some $$m$$ for all $$0 \lt \vert x - 1 \vert \lt \delta$$. Assuming that $$\delta \leq \frac{1}{2}$$, we have $$(1 - 1/2 \lt x \lt 1 + 1/2)$$. Then, $$x \gt \frac{1}{2} \implies \frac{1}{x} \lt 2 \implies \frac{1}{\vert x \vert} \lt 2$$, since $$x \gt 0$$. 

*Proof*: Let $$\epsilon \gt 0$$ be arbitrary. Choose $$\delta = \min\lbrace \frac{1}{2}, \frac{\epsilon}{2} \rbrace$$. Then, for all $$x \in \mathbb R$$ such that $$0 \lt \vert x - 1 \vert \lt \delta$$, we have $$\frac{1}{\vert x \vert} \lt 2$$ and so $$\left\vert \frac{1}{x} - 1 \right\vert = \frac{1}{\vert x \vert} \cdot \vert x - 1 \vert \lt 2 \delta \leq \epsilon$$.

**Theorem**: Let $f: A \to \mathbb R$ and let $a \in \mathbb R$ be a limit point of $A$. FCAE:
1. $\lim_{x \to a} f(x) = L$
2. For every sequence $(x_n) \subseteq A \setminus \lbrace a \rbrace$ convergent to $a$, $\lim_{n \to \infty} f(x_n) = L$.

*Proof*: ($1 \to 2$) Let $(x_n)$ be such a subsequence convergent to $a$. Then let $\epsilon \gt 0$ be arbitrary, and let $\delta \gt 0$ such that the limit definition is satisfied. Then choose $N_0 \in \mathbb N$ such that $\forall n \geq N_0$, $\vert x_n - a \vert t \delta$. Since $\delta, \epsilon$ satisfy the limit definition, $\vert f(x_n) - L \vert t \epsilon$ for all $n \geq N_0$, as required. $\blacksquare$

($2 \to 1$) Suppose otherwise. Then we can choose $\epsilon_0 \gt 0$ such that $\forall n \in \mathbb Z_+, \exists x_n \in A$ such that $0 t \vert x_n - a \vert t 1/n$ and $\vert f(x_n) - L \vert \gt \epsilon_0$. But then, $(x_n)$ converges to $a$ so by assumption, $\lim_{n \to \infty} f(x_n) = L$; a contradiction. $\blacksquare$

**Theorem (Algebraic Limit Theorem)**: Let $f, g: A \to \mathbb R$ and let $a \in \mathbb R$ be a limit point of $A$. Suppose $\lim_{x \to a} f(x) = s$, $\lim_{x \to a} g(x) = t$, and $c \in \mathbb R$ is a constant. Then:
1. $\lim_{x \to a}(f \pm g)(x) = s \pm t$
2. $\lim_{x \to a} c \cdot f(x) = c \cdot s$
3. $\lim_{x \to a} f(x) \cdot g(x) = s \cdot t$
4. $\lim_{x \to a} f(x)/g(x) = s/t$, provided $t \neq 0$.

*Proof*: By the above theorem, it suffices to show that for every sequence $(x_n) \subseteq A \setminus \lbrace a \rbrace$ convergent to $a$, the sequences $(f(x_n) \pm g(x_n)), \dots$ converge to their respective limits. This follows from the Algebriaic Limit THeorem for sequences. $\blacksquare$.
### Continuity

**Definition**: A point $a \in \mathbb R$ is said to be an **isolated point** of a set $A \subseteq \mathbb R$ when $a \in A$ and $\exists \delta \gt 0$ such that $(a - \delta, a + \delta) \cap A = \lbrace a \rbrace$.

**Definition**: We say that a function $f: A \to \mathbb R$ is **continuous at a point $a \in A$** when $A$ is an isolated point of $A$, or else $\lim_{x \to a} f(x)$ exists and equals $f(a)$.

**Definition**: We say that $f: A \to \mathbb R$ is **continuous** when $\forall a \in A$, $f$ is continuous at $a$.

**Theorem**: Let $f: A \to \mathbb R$ and $a \in A$. The following conditions are equivalent:
1. $f$ is continuous at $a$.
2. $\forall \epsilon \gt 0, \exists \delta \gt 0, \forall x \in A, \vert x - a \vert \lt \delta \implies \vert f(x) - f(a) \vert \lt \epsilon$.
3. For every sequence $$(x_n)_n \subseteq A$$, $$\lim_{n \to \infty} x_n = a \implies \lim_{n \to \infty} f(x) = f(a)$$.
4. For every neighborhood $V$ of $f(a)$, there is a neighborhood $U$ of $a$ such that $f(U) \subseteq V$.

*Proof*: 

(1) TODO.

(2) TODO.

(3) TODO.

(4) ($$\rightarrow$$) Assume $$f$$ is continuous at $$a$$. Let $$V$$ be any neighborhood of $$f(a)$$. By the openeness of $$V$$, there is some $$\epsilon_0 \gt 0$$ such that $$(f(a) - \epsilon_0, f(a) + \epsilon_0) \subseteq V$$. By continuity of $$f$$ at $$a$$, choose $$\delta_0 \gt 0$$ such that $$\forall x \in A, \vert x - a \vert \lt \delta_0 \implies \vert f(x) - f(a) \vert \lt \epsilon_0$$. Define $$U = (a - \delta_0, a + \delta_0)$$. Then, $$\forall x \in A \cap U$$, so $$\vert f(x) - f(a) \vert \lt \epsilon_0$$, or $$f(x) \in (f(a) - \epsilon_0, f(a) + \epsilon_0) \subseteq V$$. So $$f(U) \subseteq V$$.

($$\leftarrow$$) Assume next that $$\forall V$$ open neighborhood of $$f(a)$$, $$\exists U$$ open neighborhood of $$a$$ such that $$f(U) \subseteq V$$. Let $$\epsilon \gt 0$$. Consider $$V := (f(a) - \epsilon, f(a) + \epsilon)$$. By assumption, we can choose $$U$$ and open neighborhood of $$a$$ such that $$f(x) \in V$$ for all $$x \in U \cap A$$. By openness of $$U$$, we can choose $$\delta \gt 0$$ such that $$(a - \delta, a + \delta) \subseteq U$$. Then, $$\forall x \in A, \vert x - a \vert \lt \delta \implies x \in U \cap A \implies f(x) \in V$$, so $$\vert f(x) - f(a) \vert \lt \epsilon$$. $$\blacksquare$$



**Corollary**: The following conditions are equivalent:
1. $$f$$ is continuous
2. $$f^{-1}(V)$$ is open for any open $$V \subseteq \mathbb R$$.
3. $$f^{-1}(G)$$ is closed for any closed $$G \subseteq \mathbb R$$.

**Theorem**: If $$f, g: A \to \mathbb R$$ are continuous at $$a \in A, c \in \mathbb R$$, then $$f + g, f - g, c \cdot f, f \cdot g$$ are continuous at $$a$$ and $$f/g$$ are continuous at $$a$$ if $$g(a) \neq 0$$.

*Proof*: TODO.

**Corollary**: Every polynomial function is continuous on $$\mathbb R$$, and every rational function $$P(x)/Q(x)$$ is continuous on $$\mathbb R \setminus Q^{-1}(0)$$.

*Proof*: Suffices to show that for any $$c \in \mathbb R$$, $$\lbrace x \in \mathbb R \mapsto c \in \mathbb R \rbrace$$ is continuous and $$\lbrace x \in \mathbb R \mapsto x \in \mathbb R \rbrace$$ is continuous. TODO. $$\blacksquare$$.

**Theorem**: Given $$f: A \to \mathbb R, g: B \to \mathbb R$$, $$a \in A$$, $$f(a) \in B$$, $$f(A) \subseteq B$$, if $$f$$ is continuous at $$a$$ and $$g$$ continuous at $$f(a)$$, then $$g \circ f$$ is continuous at $$a$$.

*Proof*: By assumption, $$\forall (a_n)_n \subseteq A$$, $$\lim_{n \to \infty} a_n = a \implies \lim_{n \to \infty} f(a_n) = f(a)$$ and $$\forall (b_n)_n \subseteq B$$, $$\lim_{n \to \infty} b_n = f(a) \implies \lim_{n \to \infty} g(b_n) = g(f(a))$$. We want to show that $$\forall (a_n)_n \subseteq A$$, $$\lim_{n \to \infty} a_n = a \implies \lim_{n \to \infty} (g \circ f) (a_n) = (g \circ f)(a)$$.

Let $$(a_n)_n \subseteq A$$ be any such sequence such that $$\lim a_n = a$$. Then $$(f(a_n))_n$$ converges to $$f(a)$$. By assumption, $$\lim_{n \to \infty} g(f(a_n)) = g(f(a))$$. $$\blacksquare$$

**Theorem**: Suppose $$f: A \to \mathbb R$$ is a continuous function, $$K \subseteq A$$ is compact. Then $$f(K)$$ is also compact.

*Proof*: Let $$(y_n)_n$$ be any sequence in $$f(K)$$. Choose, for $$n \geq 1$$, $$x_n \in K$$ such that $$f(x_n) = y_n$$. Then, $$(x_n)_n$$ is a sequence in $$K$$. By compactness, we can choose a subsequence $$(x_{n_k})_k \in (x_n)_n$$ such that $$\lim_{k \to \infty} x_{n_k} = x_0 \in K$$. Consider $$(y_{n_k})_k$$ where $$y_{n_k} = f(x_{n_k})$$. By continuity of $$f$$ at $$x_0$$, $$\lim_{k \to \infty} f(x_{n_k}) = f(x_0) \in f(K)$$. $$\blacksquare$$

**Corollary (Extreme Value Theorem)**: If $$f: K \to \mathbb R$$ is continuous and $$K \subseteq \mathbb R$$ is non-empty and compact, then $$f$$ admits its maximum and minimum value on $$K$$.

*Proof*: By the theorem above, $$f(K) \subseteq \mathbb R$$ is a compact subset, so by Heine-Borel, it is closed and bounded. Then, $$\inf f(K), \sup f(K) \in \mathbb R$$. We have $$\inf f(K), \sup f(K)$$ are limit points of $$f(K)$$, and $$f(K)$$ being closed, it follows that $$\inf f(K), \sup f(K) \in f(K)$$. $$\blacksquare$$

**Definition**: We say $$f: A \to \mathbb R$$ is **uniformly continuous** when 

$$
\begin{align*}
    \forall \epsilon \gt 0, \exists \gt 0, \forall x_1, x_2 \in A, \vert x_1 - x_2 \vert \lt \delta \implies \vert f(x_1) - f(x_2) \vert \lt \epsilon
\end{align*}
$$

**Theorem**: If $$f: K \to \mathbb R$$ is continuous and $$K$$ is compact, then $$f$$ is uniformly continuous.

*Proof*: Suppose for the sake of contradiction that there is $$\epsilon_0 \gt 0$$ such that $$\forall \delta \gt 0$$, $$\exists x_1, x_2 \in K$$ such that $$\vert x_1 - x_2 \vert \lt \delta \land \vert f(x_1) - f(x_2) \vert \geq \epsilon_0$$. In particular, $$\forall n \in \mathbb Z_+$$, $$\exists x_n^1, x_n^2 \in K$$ such that $$\vert x_n^1 - x_n^2 \vert \lt 1/n \land \vert f(x_n^1) - f(x_n^2) \vert \geq \epsilon_0$$. Hence, we get two sequences $$(x_n^1)_n, (x_n^2)_n \subseteq K$$. Pick a subsequence $$(x^1_{n_k})_k \subseteq (x^1_n)_n$$ such that $$\lim_{k \to \infty} x^1_{n_k} = x_0 \in K$$. Consider $$(x^2_{n_k})_k \subseteq (x^2_n)_n$$. We have $$\forall k, \vert x^1_{n_k} - x^2_{n_k} \vert \lt 1/n_k \to_{n \to \infty} 0$$, so $$\lim_{k \to \infty} x^2_{n_k} = \lim_{k \to \infty} x^1_{n_k} = x_0$$. By continuity of $$f$$ at $$x_0$$, $$\lim f(x^1_{n_k}) = f(x)_0 = \lim f(x^2_{n_k})$$. So $$\exists K_0 \in \mathbb N$$ such that $$\forall k \geq K_0$$, $$\vert f(x^1_{n_k}) - f(x_0) \vert \lt \epsilon_0/2 \land \vert f(x^2_{n_k}) - f(x_0) \vert \leq \epsilon_0/2$$. When adding these two inequalities, we get a contradiction, since we already determined that $$\vert f(x^1_n) - f(x^2_n) \vert \geq \epsilon_0$$. $$\blacksquare$$

**Examples (Warning)**: The theorem fails if $$K$$ is not closed or not bounded. 
1. Consider $$f(x) = x^2$$ on $$[0, \infty)$$. We show that $$f(x)$$ is not uniformly continuous.

*Proof*: Suppose otherwise. Consider $$\epsilon = 1$$. Let $$\delta_0 \gt 0$$ such that $$\forall 0 \leq x_1 \lt x_2$$, $$x_2 - x_1 \lt \delta_0$$, then $$\vert x_2^2 - x_1^2 \vert \lt 1$$. Choose $$x_1 = 2/\delta_0$$ and $$x_2 = 2/\delta_0 + \delta_0/2$$. Then, $$x_2 - x_1 = \delta_0/2 \lt \delta_0$$, and $$\vert x_2^2 - x_1^2 \vert = (x_2 - x_1)(x_2 + x_1) = \delta_0/2 \cdot (2/\delta_0 + 2/\delta_0 + \delta_0/2) \gt \delta_0/2 \cdot 4/\delta_0 = 2 \gt \epsilon = 1$$. $$\blacksquare$$

2. Consider $$f(x) = 1/x$$ on $$(0, 1]$$. Since $$(0, 1]$$ is not closed, it is not compact. We claim that $$f(x)$$ is not unifromly continuous.

*Proof*: Suppose otherwise. Consider $$\epsilon = 1$$. Choose $$0 \lt \delta_0 \lt 1$$ such that $$\forall 0 \lt x_1 \lt x_2 \leq 1, x_2 -  x_1 \lt \delta_0 \implies \vert 1/x_2 - 1/x_1 \vert \lt 1$$. Let $$x_1 = \delta_0/4$$, $$x_2 = \delta_0/2$$. Then $$x_2 - x_1 = \delta_0/2 - \delta_0/4 = \delta_0/4 \lt \delta_0$$, and $$1/x_1 - 1/x_2 = \frac{x_2 - x_1}{x_1x_2} = \delta_0/4 \cdot 8/\delta_0^2 = 2/\delta_0 \gt 2 \gt 1$$; a contradiction. $$\blacksquare$$

**Theorem (Intermediate Value Theorem)**: Let $$f: I \to \mathbb R$$ be continuous, where $$I$$ is any interval. Then, $$f(I) \subseteq \mathbb R$$ is an interval.

*Proof*: We want to show that $$\forall u, v, w \in \mathbb R; u \lt v \lt w; u, w \in f(I) \implies v \in f(I)$$. Let $$u, v, w \in \mathbb R$$ such that $$u \lt v \lt w$$ and $$u, w \in f(I)$$. Choose $$x_u, x_w \in I$$ be such that $$f(x_u) = u$$ and $$f(x_w) = w$$. Either $$x_u \lt x_w$$ or $$x_u \gt x_w$$. WLOG, suppose $$x_u \lt x_w$$.  Then, $$[x_u, x_w] \subseteq I$$. Consider $$A = \lbrace x \in [x_u, x_w] : f(x) \lt v \rbrace$$, $$B = \lbrace x \in [x_u, x_w] : f(x) \gt v \rbrace$$. We have $$x_u \in A$$ and $$x_w \in B$$. So $$A, B$$ are non-empty and bounded, so they have an infimum and supremum. Define $$\alpha := \sup A \in [x_u, x_w]$$. By continuity at $$\alpha, f(\alpha) = \lim_{n \to \infty} f(x_n)$$ for any $$(x_n) \subseteq A$$ such that $$\lim x_n = \alpha$$. It follows that $$f(\alpha) \leq v$$, since $$f(x_n) \lt v$$. Now, $$\forall n \in \mathbb Z_+$$, $$\alpha + 1/n \not\in A$$. It follows that $$\forall n \in \mathbb Z_+, f(\alpha + 1/n) \geq v$$. Consider the sequence $$(z_n)_n \subseteq I$$ where $$z_n = \alpha + 1/n$$. So $$\vert z_n - \alpha \vert = 1/n \to_{n \to \infty} 0$$, so $$\lim_{n \to \infty} z_n = \alpha$$. By continuity, $$\lim f(z_n) = f(\alpha)$$. Hence, $$f(\alpha) \geq v$$. So $$f(\alpha) = v$$. So $$v \in f(I)$$. $$\blacksquare$$

**Example**: Let $$g: [0, 1] \to [0, 1]$$ be continuous. Show that $$\exists a \in [0, 1]$$ such that $$g(a) + 2a^5 = 3a^7$$. 

*Proof*: Consider* $$f(x) := g(x) + 2x^5 - 3x^7$$. Then $$f$$ is continuous on $$[0, 1]$$. We want to show that $$\exists a \in [0, 1]$$ such that $$f(a) = 0$$. Note that $$f(0) = g(0) \geq 0$$. Also, $$f(1) = g(1) - 1 \leq 0$$. Either $$f(0) = 0$$ so $$a = 0$$, or $$f(1) = 0$$ so $$a = 1$$, or else $$f(0) \gt 0$$ and $$f(1) \lt 0$$. So $$0 \in (f(1), f(0))$$. By IVT, $$\exists a \in (0, 1)$$ such that $$f(a) = 0$$. $$\blacksquare$$

**Corollary**: If $$f: I \to \mathbb R$$ is continuous and $$I$$ is a closed interval, then $$f(I)$$ is a closed interval.

*Proof*: By IVT, $$f(I)$$ is an interval. By EVT, $$f(I)$$ is compact, so it is bounded. So $$\inf f(I), \sup f(I) \in \mathbb R$$. Since $$\inf f(I)$$ and $$\sup f(I)$$ are limit points of $$f(I)$$ and $$f(I)$$ is closed, $$\inf f(I), \sup f(I) \in f(I)$$. So $$f(I) = [\inf f(I), \sup f(I)]$$. $$\blacksquare$$

## Monotone Functions

**Definition**: Let $$f: A \to \mathbb R$$ with $$A \neq \emptyset$$. We say that $$f$$ is:
1. **increasing** when $$\forall x,y \in A, x \lt y \implies f(x) \leq f(y)$$
2. **strictly increasing** when $$\forall x, y \in A, x \lt y \implies f(x) \lt f(y)$$
3. **decreasing** when $$\forall x, y \in A, x \lt y \implies f(x) \geq f(y)$$
4. **strictly decreasing** when $$\forall x, y \in A, x \lt y \implies f(x) \gt f(y)$$

A function is **monotone** if it is increasing or decreasing, and **strictly montoone** if it is strictly increasing or strictly decreasing.

**Theorem**: Let $$I \subseteq \mathbb R$$ be an interval and let $$f: I \to \mathbb R$$ be a continuous injection. Then

(1) $$f$$ is strictly monotone.

(2) $$f^{-1}: f(I) \to I$$ is a strictly monotone continuous injection.

*Proof*: 

(1) Observe that for any $$a, b, c \in I$$ such that $$a \lt b \lt c$$, one cannot have $$f(a) \lt f(b) \gt f(c)$$x or $$f(a) \gt f(b) \lt f(c)$$ (by IVT). Therefore, $$\forall x \in I, \forall u, v \in I$$ such that $$u \lt x \lt v$$, either (a) $$f(u) \lt f(x) \lt f(v)$$ or else (b) $$f(u) \gt f(x) \gt f(v)$$. Let $$x_1 \in I$$. Suppose that (a) is the case.  We claim that $$\forall x \in I$$, (a) holds at $$x$$. Suppose otherwise, that there exists $$x_2 \in I$$ such that (b) holds at $$x_2$$. If $$x_1 \lt x_2$$, then $$f(x_1) \lt f(x_2)$$ (by (a) at $$x_1$$) and $$f(x_1) \gt f(x_2)$$ (by (b) at $$x_2$$), a contradiction. The argument is symmetric for if $$x_2 \lt x_1$$. So, $$f$$ is strictly increasing. Case (b) holds symmetrically to show that $$f$$ is strictly decreasing. $$\blacksquare$$

(2) We claim that if (and only if) $$f$$ is strictly increasing, $$f^{-1}$$ is strictly increasing. If $$y_1, y_2 \in f(I), y_1 \lt y_2$$, let $$x_1, x_2 \in I$$ be such that $$f(x_1) = y_1, f(x_2) = y_2$$. Then $$f^{-1}(y_1) = x_1 \lt x_2 = f^{-1}(y_2)$$, for otherwise, $$x_2 \lt x_1 \implies f(x_2) \lt f(x_1)$$; a contradiction. 

Let $$b \in f(I)$$ be arbitrary. We claim that $$f^{-1}$$ is continuous at $$b$$. Let $$\epsilon \gt 0$$. Let $$a = f^{-1}(b)$$. Consider $$y_1 := f(a - \epsilon), y_2 := f(a + \epsilon)$$. Choose $$\delta = \min \lbrace y_2 - b, b - y_1 \rbrace$$. Then $$\forall y \in I$$,

$$
\begin{align*}
    \vert y - b \vert \lt \delta &\implies y \in (y_1, y_2) \\
    &\implies y \in (f(a - \epsilon), f(a + \epsilon)) \\
    &\implies \exists x_y \in (a - \epsilon, a + \epsilon), f(x_y) = y \text{ (by IVT)}\\
    &\implies f^{-1}(y) \in (a - \epsilon, a + \epsilon) \\
    &\implies \vert f^{-1}(y) - f^{-1}(b) \vert \lt \epsilon
\end{align*}
$$

**Definition**: A function $$f: A \to \mathbb R$$ is **Lipschitz**, when 

$$
\begin{align*}
    \exists L \geq 0, \forall x_1, x_2 \in A, \vert f(x_1) - f(x_2) \vert \leq L \cdot \vert x_1 - x_2 \vert
\end{align*}
$$

Any such $$L$$ is called a **Lipschitz constant** for $$f$$.

**Remark**: Any Lipschitz function is uniformly continuous (Lipschitz is a stronger condition than uniform continuity). 

*Proof*: Let $$L$$ be a Lipschitz constant for $$f$$. Let $$\epsilon \gt 0$$ be arbitrary. Set $$\delta := \epsilon/L$$. Ten $$\forall x_1, x_2 \in A, \vert x_1 - x_2 \vert \lt \delta \implies \vert f(x_1) - f(x_2) \vert \lt L \cdot \delta = \epsilon$$.

**Example**: Find a function that is uniformly continuous but not Lipschitz. 

$$
\begin{align*}
    f(x) = \begin{cases}
        x\sin(\pi / x^2) & x \in (0, 1] \\
        0 & x = 0
    \end{cases}
\end{align*}
$$

Since $$\lim_{x \to 0^+} f(x) = 0 = f(0)$$, $$f$$ is continuous at $$0$$, so $$f$$ is continuous on $$[0, 1]$$, so $$f$$ is uniformly continuous. Set $$x_n = \frac{1}{\sqrt{2n}}$$ and $$y_n = \frac{1}{\sqrt{2n + \frac{1}{2}}}, n \in \mathbb Z_+$$. Then $$f(x_n) = 0$$ and $$f(y_n) = y_n$$. Then, 

$$
\begin{align*}
    \frac{\vert f(x_n) - f(y_n) \vert}{\vert x_n - y_n \vert} = \frac{1}{\sqrt{2n + \frac{1}{2}}} \cdot \frac{1}{\frac{1}{\sqrt{2n}} - \frac{1}{\sqrt{2n + \frac{1}{2}}}} = 2 \cdot \sqrt{2n} (\sqrt{2n + \frac{1}{2}} + \sqrt{2n}) \to_{n \to \infty} \infty
\end{align*}
$$

**Definition**: A function $$f: A \to \mathbb R$$ is called a **contraction** when $$f$$ is Lipschitz with a Lipschitz constant $$L \lt 1$$.

**Theorem (Fixed Point)**: Let $$A \neq \emptyset, A \subseteq \mathbb R$$, and let $$f: A \to A$$ be a contraction. Suppose $$A$$ is a closed set. Then $$\exists!p \in A$$ such that $$f(p) = p$$.

*Proof*: Pick any $$x_1 \in A$$. Construct a sequence $$(x_n) \subseteq A$$ defined as $$x_{k + 1} = f(x_k), \forall k \in \mathbb Z_+$$. Let $$\alpha \in [0, 1)$$ be a Lipschitz constant of $$f$$.

We claim that $$\forall k \geq 2$$, $$\vert x_{k + 1} - x_k \vert \leq \alpha^{k - 1} \cdot \vert x_2 - x_1 \vert$$. We proceed by induction. We have $$\vert x_3 - x_2 \vert = \vert f(x_2) - f(x_1) \vert \leq \alpha \vert x_2 - x_1 \vert$$ since $$\alpha$$ is a Lipschitz constant of $$f$$. Now, assuming $$\vert x_{k + 1} - x_k \vert \leq \alpha^{k - 1} \vert x_2 - x_1 \vert$$, consider $$\vert x_{k + 2} - x_{k + 1} \vert = \vert f(x_{k + 1}) - f(x_k) \vert \leq \alpha \cdot \vert x_{k + 1} - x_k \vert \leq \alpha^{(k + 1) - 1} \vert x_2 - x_1 \vert$$; proving the claim.

Claim 2: $$(x_n)$$ is Cauchy. Let $$\epsilon \gt 0$$. Choose $$N_0 \in \mathbb N$$ such that $$\frac{\alpha^{N_0 - 1}}{1 - \alpha} \cdot \vert x_2 - x_1 \vert \lt \epsilon$$. Then, $$\forall n \geq m \geq N_0$$, and 

$$
\begin{align*}
    \vert x_n - x_m \vert &= \vert (x_n - x_{n - 1}) + (x_{n - 1} - x_{n - 2}) + \dots + \vert x_{m + 1} - (x_{m + 1} - x_m) \vert \\
    &\leq \vert x_n - x_{n - 1} \vert + \vert x_{n - 1} - x_{n - 2} \vert + \dots + \vert x_{m + 1} - x_m \vert \\
    &\leq \alpha^{n - 2} \vert x_2 - x_1 \vert + \alpha^{n - 3} \vert x_2 - x_1 \vert + \dots + \alpha^{m - 1} \vert x_2 - x_1 \vert \\
    &= \vert x_2 - x_1 \vert \cdot \alpha^{m - 1} \cdot \alpha^{m - 1} \sum_{k = 0}^{n - m - 1} \alpha^k \\
    &\leq \vert x_2 - x_1 \vert \cdot \alpha^{N_0 - 1} \cdot \frac{1}{1 - \alpha}\\
    &\lt \epsilon
\end{align*}
$$

Let $$p \in \mathbb R$$ be such that $$\lim_{n \to \infty} x_n = p$$. Since $$A$$ is closed, $$p \in A$$. By the continuity of $$f$$ at $$p$$, $$f(p) = \lim_{n \to \infty} f(x_n) = \lim_{n \to \infty} x_{n + 1} = \lim_{n \to \infty} x_n = p$$ (since $$(x_{n + 1}) \subseteq (x_n)$$). So suppose there is some other $$\exists q \in A$$ such that $$f(q) = q$$. Then $$\vert p - q \vert = \vert f(p) - f(q) \vert \leq \alpha \cdot \vert p - q \vert$$, so $$\vert p - q \vert = 0$$, so $$p = q$$. $$\blacksquare$$

**Definition**: Given $f: A \to \mathbb R$, $a \in \mathbb R$ is such that $\forall k \in \mathbb Z_+, \exists x_k \in A, x_k \lt a \land \vert x_k - a \vert \lt 1/k$. Then, we say $L = \lim_{x \to a^-} f(x)$, when 

$$
\begin{align*}
    \forall \epsilon \gt 0, \exists \delta \gt 0, \forall x \in A, 0 \lt a - x \lt \delta \implies \vert f(x) - L \vert \lt \epsilon
\end{align*}
$$

