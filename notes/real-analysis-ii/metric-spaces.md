---
layout: default
order: 3
toc: true
---

# Metric Spaces

## Metric Spaces

**Definition**: A **metric space** is a non-empty space $X$ with a function $d: X \times X \to \mathbb R$ such that
* $d(x, y) \geq 0, \forall x, y \in X$
* $d(x, y) = 0$ if and only if $x = y$
* $d(x, y) = d(y, x), \forall x, y \in X$
* $d(x, y) \leq d(x, z) + d(z, y), \forall x, y, z, \in X$

We call the elements of $X$ **points**, $d$ the **metric** or **distance function**, $(X, d)$ the **metric space**, and $d(x, y)$ the **distance between $x$ and $y$**.

**Definition**: Let $(X, d)$ be a metric space. A sequence of points $(x_n) \subseteq X$ **converges to** $x \in X$ if $\forall \epsilon \gt 0, \exists n_0$ such that $d(x_n, x) \lt \epsilon$ for all $n \gt n_0$.

Equivalently, $x_n \to x$ if $d(x_n, x) \to 0$.

If there is no such $x \in X$, the sequence $(x_n)$ is divergent.

**Example**: Let $X = \mathbb R$ and $d_\text{discrete}(x, y) = 
\begin{cases}
1, & x \neq y \\
0, & x = y
\end{cases}$. Let $(x_n)$ be a sequence, $x_n \to x$ if $\exists n_0$ such that $x_n = x$ for all $n \geq n_0$.

**Definition**: A sequence $(x_n) \subseteq X$ is **Cauchy** if $\forall \epsilon \gt 0, \exists n_0$ such that $d(x_n, x_m) \lt \epsilon$ for all $n, m \gt n_0$.

**Proposition**: Let $(x_n)$ be a covergent sequence in $(X, d)$. Then it is Cauchy.

*Proof*: Suppose $x_n \to x \in X$. Let $\epsilon \gt 0$. Then, $\exists n_0$ such that $d(x_n, x) \lt \epsilon/2$ for all $n \gt n_0$. Similarily, for all $n, m \gt n_0$, $d(x_n, x) \lt \epsilon/2$ and $d(x_m, x) \lt \epsilon/2$. So $d(x_n, x_m) \leq d(x_n, x) + d(x_m, x) = \epsilon/2 + \epsilon/2 = \epsilon$. Hence $(x_n)$ is Cauchy. $\blacksquare$

**Definition**: A metric space $(X, d)$ in which every Cauchy sequence converges is called **complete**.

**Example**: Some complete metric spaces:
* $(\mathbb R^n, d_{\text{standard}})$
* $(\mathbb R^n, d_\text{discrete})$
* *$(C[0, 1], \sup_\text{metric})$

$(f_n)$ is Cauchy, but $\not\exists f \in X$ such that $f_n \to f$. TODO.

**Example**: $X = [0, 1], d_\text{st}(x, y) = \vert x - y \vert$. $Y = \mathbb Q \cap [0, 1]$. Restrict $d_\text{st}$ to $Y$. Let $x_n$ be a sequence in $Y$ that converges in $X$ to $x = \frac{1}{\sqrt 2}$. Then $(x_n)$ is Cauchy in $Y$ but it does not converge in $Y$. 

*Proof*: TODO.

**Proposition**: Let $(x_n)$ be a Cauchy sequence in a metric space $(X, d)$. If $(x_n)$ has a convergent subsequence $x_{n_k} \to x \in X$, then $x_n \to x$.

*Proof*: Let $\epsilon \gt 0$. Since $(x_n)$ is Cauchy, it follows that $\exists n_0$ such that $d(x_n, x_m) \lt \epsilon$ for all $m, n \gt n_0$. Since $x_{n_k} \to x$, it also follows that $\exists k_0$ such that $d(x_{n_k}, x) \lt \epsilon$ for all $k \gt k_0$. For all $n \gt n_0$, choosing $k \geq k_0$ such that $n_k \gt n_0$, we have 

$$
d(x_n, x) \leq d(x_n, x_{n_k}) + d(x_{n_k}, x) \lt \epsilon + \epsilon = 2\epsilon.
$$

Hence $x_n \to x$. $\blacksquare$



**Definition**: Let $(X, d)$ be a metric space with $Y \subseteq X$ a non-empty subset. Then, restricting $d$ to $Y \times Y \to Y$ yields a **subspace metric** on $Y$.

**Definition**: A **ball** with center $x$ of radius $r$ in a metric space $(X, d)$ is the set $B(x_0; r) = \lbrace x \in X \mid d(x, x_0) \lt r \rbrace$.

**Example**: $B(0; 1) = \lbrace 0 \rbrace$ in $(\mathbb R^2, d_\text{discrete})$

**Definition**: A set $S \subseteq X$ in $(X, d)$ is **open** if $\forall x \in S, \exists \epsilon \gt 0$ such that $B(x; \epsilon) \subseteq S$.

**Example**: $\emptyset$ is open vacuously.

**Proposition**: The union of an arbitrary family of open sets is open.

**Proposition**: The intersection of finitely many open sets is open.

**Proposition**: Let $S = B(x; r)$ be a ball in $(X, d)$. Then $S$ is open.

*Proof*: Let $x_0 \in B(x; r)$. Choose $\delta = \frac{r - d(x, x_0)}{2}$. Then $\forall y \in B(x_0; \delta)$, 

$$
d(y, x) \leq d(y, x_0) + d(x_0, x) \lt \delta + d(x_0, x) = r
$$

So $B(x_0; \delta) \subseteq B(x, r)$. $\blacksquare$

**Proposition**: If $x_n \to x$ in $(X, d)$, then the limit is unique.

*Proof*: Suppose $x_n \to x$ and $x_n \to x'$ with $x \neq x'$. Then $r = d(x, x') \gt 0$ and $\exists n_0$ such that $x_n \in B(x, r/2)$ and $x_n \in B(y; r/2)$ for all $n \gt n_0$. But $B(x; r/2) \cap B(y; r/2) = \emptyset$; a contradiction. We show the balls are disjoint by assuming that $\exists p$ in both. Then, $d(p, x) \lt r/2$ and $d(p, y) \lt r/2$. So $r = d(x, y) \leq d(x, p) + d(p, y) \lt r/2 + r/2 = r$; a contradiction. $\blacksquare$

**Definition**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. The function $f: X \to Y$ is **continuous** at $x_0 \in X$ if $\forall \epsilon \gt 0 \exists \delta \gt 0$ such that if $d_X(x, x_0) \lt \delta$ then $d_Y(f(x), f(x_0)) \lt \epsilon$. 
* $f$ is **continuous** if it is continuous at every $x \in X$.

**Proposition**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. $f: X \to Y$ is **continuous** if for every open set $S$ in $Y$, $f^{-1}(S)$ is open in $X$.

*Proof*: $(\rightarrow)$ Suppose $f$ is continuous. Let $S \subseteq Y$ be open. If $S = \emptyset$, then $f^{-1}(\emptyset) = \emptyset$ is open. If $S \neq \emptyset$, let $y_0 = f(x_0) \in S$. Since $S$ is open, $\exists \epsilon \gt 0$ such that $B(y_0; \epsilon) \subseteq S$. Since $f$ is continuous at $x_0$, $\exists \delta \gt 0$ such that for all $x \in B(x_0; \delta)$, $d(f(x_0), f(x)) \lt \epsilon$. Hence, $B(x_0; \delta) \subseteq f^{-1}(S)$. So $f^{-1}(S)$ is open.

$(\leftarrow)$ Suppose for all open $S$, $f^{-1}(S)$ is open. Let $x_0 \in X$. Let $\epsilon \gt 0$. Since $B(f(x_0); \epsilon)$ is open in $Y$, $f^{-1}(B(f(x_0)); \epsilon)$ is open in $X$. Since $x_0 \in f^{-1}(B(f(x_0); \epsilon))$, $\exists \delta \gt 0$ such that $B(x_0; \delta) \subseteq f^{-1}(B(f(x_0); \epsilon))$. So $f$ is continuous at $x_0$, and $f$ is continuous. $\blacksquare$

**Proposition**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. $f: X \to Y$ is **continuous** if for every convergent sequence $(x_n) \subseteq X$ the sequence $f(x_n)$ converges in $Y$.

*Proof*: $(\rightarrow)$ Suppose $f$ is continuous. Let $(x_n)$ be a convergent sequence in $X$, say $x_n \to x'$. Let $\epsilon \gt 0$. Since $f$ is continuous at $x'$, $\exists \delta \gt 0$ such that $d(f(x), f(x')) \lt \epsilon$ for all $x \in B(x'; \delta)$. Since $x_n \to x'$, $\exists n_0$ such that $x_n \in B(x'; \delta)$ for all $n \gt n_0$.

$(\leftarrow)$ Suppose $f$ is not continuous. Then $\exists x_0$ and $\exists \epsilon \gt 0$ such that for every $\delta \gt 0$, $\exists x \in B(x_0; \delta)$ such that $d_Y(f(x), f(x_0)) \geq \epsilon$. Set $\delta = 1, \frac{1}{2}, \frac{1}{3}, \dots$ and denote these $x$ by $x_1, x_2, x_3, \dots$. Then the sequence $(x_n)$ converges in $X$ to $x_0$ and $d_Y(f(x_n), f(x_0)) \geq \epsilon$ for all $n$, so $f(x_n) \not \to f(x_0)$. $\blacksquare$

**Fact**: On $(X, d)$, $d'(x, y) = \frac{d(x, y)}{1 + d(x, y)}$ is the **bounded metric**.

Note the triangle inequality holds in $d'$ since

$$
\begin{align*}
d'(x, y) + d'(y, z) &= \frac{d(x, y)}{1 + d(x, y)} + \frac{d(y, z)}{1 + d(y, z)} \\
&\geq \frac{d(x, y) + d(y, z)}{1 + d(x, y) + d(y, z)} \\
&= \frac{1}{1 + \frac{1}{d(x, z) + d(z, y)}} \\
&= \frac{d(x, y)}{1 + d(x, y)} \\
&= d'(x, z)
\end{align*}
$$

## Interior, Limit Points, Open and Closed Sets

**Definition**: Let $(X, d)$ be a metric space and let $S \subseteq X$.
* A point $x_0 \in S$ is called an **interior point** of $S$ if $\exists \epsilon \gt 0$ such that $B(x_0, \epsilon) \subseteq S$.
* The set of all interior points of $S$ is called the **interior of $S$**, and is denoted by $\operatorname{Int}(S)$ or $\mathring S$.
* A point $x_0 \in X$ is called a **limit point of $S$** if for all $\epsilon \gt 0$, $B(x_0, \epsilon)$ contains a point of $S$ which is not $x_0$ (that is, at least one point of $S$).
* $S$ is **closed** if all limit points of $S$ are in $S$.
* The **closure of $S$** is the union of $S$ with all of its limit points, denoted $\overline S$.
* The **boundary of $S$** is $\partial S = \overline S - \mathring S$
* The set $S$ is **dense in $X$** if $\overline S = X$.

**Proposition**: For subsets $S, W$ of $(X, d)$,
* $\operatorname{Int}(S)$ is open.
* $S$ is open if and only if $\operatorname{Int}(S) = S$.
* $\operatorname{Int}(\operatorname{Int}(S)) = \operatorname{Int}(S)$
* $\operatorname{Int}(S)$ is the union of all open sets contained in $S$.

*Proof*: $(\subseteq)$ Let $x \in \operatorname{Int}(S)$. Then $x$ is in an open ball around $x$ contained in $S$, which is an open set contained in $S$. $(\supseteq)$ Let $x$ be in some open set $T \subseteq S$. Then there is an open ball around $x$ contained in $T$ which is contained in $S$, so $x \in \operatorname{Int}(S)$. $\blacksquare$

* If $S \subseteq W$, then $\operatorname{Int}(S) \subseteq \operatorname{Int}(W)$

*Proof*: If $\operatorname{Int}(S) = \emptyset$, then $\operatorname{Int} S \subseteq \operatorname{Int} W$. So assume $\operatorname{Int} S = \emptyset$. Let $x_0 \in \operatorname{Int} S$. Then $\exists \epsilon \gt 0$ such that $B(x_0; \epsilon) \subseteq S$. Since $S \subseteq W$, it follows that $x_0 \in W$ and $B(x_0; \epsilon) \subseteq W$. Then $x_0 \in \operatorname{Int} W$. So $\operatorname{Int} S \subseteq \operatorname{Int} W$. $\blacksquare$

* $\operatorname{Int}(S \cap W) = \operatorname{Int} S \cap \operatorname{Int} W$

*Proof*: $(\subseteq)$ By the above, $\operatorname{Int}(S \cap W) \subseteq \operatorname{Int} S$ and $\operatorname{Int}(S \cap W) \subseteq \operatorname{Int} W$. So $\operatorname{Int}(S \cap W) \subseteq \operatorname{Int} S \cap \operatorname{Int} W$.

$(\supseteq)$ Now suppose $x_0 \in \operatorname{Int} S \cap \operatorname{Int} W$. Then $\exists \epsilon_1 \gt 0$ such that $B(x_0; \epsilon_1) \subseteq S$ and $\exists \epsilon_2$ such that $B(x_0; \epsilon_2) \subseteq W$. Then $B(x_0; \min \lbrace \epsilon_1, \epsilon_2 \rbrace) \subseteq S \cap W$. So $x_0 \in \operatorname{Int}(S \cap W)$ and $\operatorname{Int} S \cap \operatorname{Int} W \subseteq \operatorname{Int}(S \cap W)$. $\blacksquare$

* $\operatorname{Int}(S \cup W) \supseteq \operatorname{Int} S \cup \operatorname{Int} W$
* If $x_0$ is a limit point of $S$, then all open balls around $x_0$ contain infinitely many points of $S$.

*Proof*: By contrapositive, choose an $\epsilon$-ball $B_\epsilon$ around $x_0$ that contains only finitely many points of $S$, call the set of these points $P$. Define $\epsilon' = \frac{1}{2} \operatorname{min}\lbrace d(x_0, p) \mid p \in P \rbrace$. Then $B_{\epsilon'}$ contains no points of $S$, so $x_0$ is not a limit point. $\blacksquare$

* $x_0$ is a limit point of $S$ if and only if there is a sequence of distinct points $(x_n) \subseteq S$ such that $x_n \to x_0$.

*Proof*: $(\rightarrow)$ Suppose $x$ is a limit point. Then there is an open ball $B_0(x, \epsilon_0)$ with $\epsilon_0 \gt 0$ containing at least one point in $S$. Choose a point $x_0 \in B_0$. Let $\epsilon_1 = d(x, x_0)/2$. Then $B_1(x, e_1)$ is also an open ball containing at least one point in $S$, which is distinct from $x_1$. Continue this process to form a sequence $(x_n)$, which converges to $x_0$ since $d(x, x_n) \to 0$ as $n \to \infty$.

$(\leftarrow)$ Suppose there is a sequence of distinct points $(x_n) \subseteq S$ convergent to $x$. Let $\epsilon \gt 0$. Since $(x_n)$ converges to $x$, there is at least one $x_n$ with $d(x, x_n) \lt \epsilon$. So $x_n \in B(x, \epsilon)$. $\blacksquare$ 

* The closure of a set is a closed set.
* $S$ is closed if and only if it is equal to its closure.
* $\overline{\overline S} = \overline S$
* $\overline{S}$ is the intersection of all closed sets containing $S$.

*Proof*: $(\subseteq)$ Let $x \in \overline{S}$. Let $T$ be a closed set containing $S$. If $x$ is not a limit point of $S$, then $x \in S \subseteq T$. If it is, then for all $\epsilon \gt 0$, $B(x, \epsilon)$ contains some point $x_0$ in $S$. Since $S \subseteq T$, $x_0 \in T$, so $B(x, \epsilon)$ contains at least one point in $T$. So $x$ is a limit point of $T$. Since $T$ is closed, $x \in T$. Since $T$ was arbitrary, $x$ is in all closed sets containing $S$.

$(\supseteq)$ Let $x$ be in the intersection of all closed sets containing $S$. Since $\overline S$ is a closed set containing $S$, then $x \in \overline S$. $\blacksquare$

* The intersection of an arbitirary family of closed sets is closed.
* The finite union of closed subsets $S_1, \dots, S_m \subseteq X$ is closed.

*Proof*: $\bigcup_{k = 1}^m S_k = \bigcup_{k = 1}^m (X \setminus (X \setminus S_k)) = X \setminus \bigcap_{k = 1}^m (X - \setminus S_k)$. Note that $X \setminus S_k$ is open, and since the intersection of finitely many open sets is open, $\bigcap_{k = 1}^m (X \setminus S_k)$ is open. So $X \setminus \bigcap_{k = 1}^m (X \setminus S_k)$ is closed. $\blacksquare$

* $\emptyset, X$ are closed.
* If $S \subseteq W$, then $\overline S \subseteq \overline W$.
* $\overline {S \cup W} = \overline S \cup \overline W$
* $\overline{S \cap W} \subseteq \overline S \cap \overline W$
* $x_0 \in \overline S$ if and only if $\forall \epsilon \gt 0$, $B(x_0, \epsilon) \cap S \neq \emptyset$
* $x \in \overline S$ if and only if there exists a sequence $(x_n) \subseteq S$ such that $x_n \to x_0$.
* $\forall x_0 \in X$ and $\epsilon \gt 0$, the closed ball $\overline{B(x_0, \epsilon)} = \lbrace x \in X \mid d(x, x_0) \leq \epsilon \rbrace$ is closed.
* $S$ is closed if and only if $X \setminus S$ is open.

*Proof*: If $S = \emptyset$, then $X \setminus S = X$. If $S = X, then $X \setminus S = \emptyset$. In both cases, the statement holds. So suppose $S \neq \emptyset$ and $S \neq X$.

$(\rightarrow)$ Assume $S$ is closed. Let $x_0 \in X \setminus S$. Then, $x_0$ is not a limit point of $S$. So $\exists \epsilon \gt 0$ such that $B(x_0; \epsilon) \subseteq X \setminus S$. Hence, $X \setminus S$ is open.

$(\leftarrow)$ Suppose $X \setminus S$ is open and assume for the sake of contradiction that $S$ is not closed. Then there is a limit point $x_0$ of $S$ such that $x_0 \not\in S$. Then $x_0 \in X \setminus S$. Since $X \setminus S$ is open, it follows that $\exists \epsilon \gt 0$ such that $B(x_0; \epsilon) \subseteq X \setminus S$. This contradicts that $x_0$ is a limit point. $\blacksquare$

* $\partial S$ is a closed set.
* $\partial S = \partial(X \setminus S)$
* $S$ is closed if and only if $\partial S \subseteq S$.

**Proposition**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. Then $f: X \to Y$ is continuous if and only if for every $S$ closed in $Y$, $f^{-1}(S)$ is closed in $X$.

*Proof*: Recall that $f$ is continuous if and only if $\forall S$ open in $Y$, $f^{-1}(S)$ is open in $X$. We have $f^{-1}(Y \setminus S) = X \setminus f^{-1}(S)$. $\blacksquare$

## Completion of Metric Spaces

**Definition**: An **isometry** is a function $f: X_1 \to X_2$ such that $d_2(f(x_1), f(y_1)) = d_1(x_1, y_1)$ for all $(x_1, y_1) \in X_1$. That is, an isometry is a distance preserving map. Also caled an **isometric embedding**.

**Example**: $f: [0, \infty) \to [0, \infty), x \mapsto x + 10$ is an isometry.

**Proposition**: Let $f: X \to Y$ be an isometry.
* Isometries preserve convergence of seqeuences.
* Isometries preserve Cauchyness.
* Isometries are one-to-one.

*Proof (Sketch)*: (1) and (2) are clear. For (3), note that for $x_1, x_2 \in X$, if $f(x_1) = f(x_2)$, then $d_2(f(x_1), f(x_2)) = 0 = d_1(x_1, x_2) \implies x_1 = x_2$. $\blacksquare$

**Definition**: Let $f: X_1 \to X_2$ be an isometry that is bijection. Then its inverse $f^{-1}$ is also an isometry, and $X_1$ and $X_2$ are said to be **isometric**.

**Example**:
* In $(\mathbb R^2, d_\text{st})$, translations and rotations are isometries.
* In $(\mathbb R^2, d_1)$, rotation is not an isometry but translation is.
* $f: [0, \infty) \to [0, \infty), x \mapsto x + 10$ is a nonsurjective isometry for the standard distance.

**Definition**: A subset $D$ of a metric space $X$ is **dense in $X$** if every $x \in X$ is the limit of a sequence in $D$.

**Definition**: A **completion** of a metric space $(X, d)$ is a metric space $(X^*, d^*)$ together with an isometric embedding $i: X \to X^*$ such that
1. $X^*$ is complete
2. $f(X)$ is dense in $X^*$.

**Example**:
* $[0, 1]$ is the completion of $[0, 1)$
* $\mathbb R$ is the completion of $\mathbb Q$

### Existence and Uniqueness of Completions

**Notation**: Let $(x_n), (y_n)$ be sequences in a metric space. Write $(x_n) \sim (y_n)$ to mean $\lim_{n \to \infty} d(x_n, y_n) = 0$.

**Lemma**:
1. If $x_n \to a$ and $y_n \to a$, then $x_n \sim y_n$.
2. If $x_n \sim y_n$ and $x_n \to a$, then $y_n \to a$.

*Proof*: TODO.

**Theorem 1.53**: If $(X, d)$ is a metric space, then $X$ has a unique completion. That is, if $i: X \to A$ and $j: X \to B$ are two completions, then there is a unique bijective isometry $\phi: A \to B$ so that $\phi \circ i = j$.

*Proof*: Let $\mathscr C$ be the set of Cauchy sequences in $X$. Define an equivalence relation $\sim$ on $\mathscr C$ by $\lbrace x_n \rbrace \sim \lbrace y_n \rbrace$ if $d(x_n, y_n) \to 0$. Define $X^* = \mathscr C / \sim$ as the equivalence classes of $\mathscr C$, and $d^* = X^* \times X^* \to [0, \infty)$ such that $d^*([x_n], [y_n]) = \lim_{n \to \infty} d(x_n, y_n)$. (TODO: Check that the limit exists and that $d^*$ is well-defined).

**Theorem (Urysohn's Lemma)**: Let $A, B$ be disjoint closed sets in a metric space $(X, d)$. Then, there exists a continuous function $f: X \to \mathbb R$ such that
* $f(x) = 0$ for all $x \in A$
* $f(x) = 1$ for all $x \in B$
* $0 \leq f(x) \leq 1$ for all $x \in X$.

*Proof*: Consider the function $h(x) = d(x, A) = \inf_{y \in A} \lbrace d(x, y) \rbrace$. First we show that $h: X \to \mathbb R$ is continuous. Let $\epsilon \gt 0$. Choose $\delta = \epsilon/2$. Since $d(x, y) \leq d(x, z) + d(z, y)$ for all $y \in A$, $d(x, A) \leq d(x, z) + d(z, A)$. So $d(x, A) - d(z, A) = h(x) - h(z) \leq d(x, z) = \epsilon/2$. Similarily $d(z, A) - d(x, A) \leq \epsilon/2$. So $\vert h(x) - h(z) \vert < \epsilon$. Now define

$$
f(x) = \frac{d(x, A)}{d(x, A) + d(x, B)}
$$

which is also continuous. Note that $d(x, A) + d(x, B) \neq 0$ since $A$ and $B$ are disjoint. $\blacksquare$

**Corollary**: Let $A, B$ be disjoint closed sets in a metric space $(X, d)$. Then there are disjoint open sets $G, H$ such that $A \subseteq G$ and $B \subseteq H$.

*Proof*: Define $f: X \to [0, 1]$ as in the proof of Urysohn's Lemma. Let $G = f^{-1}([0, \frac{1}{2}))$ and $H = f^{-1}((\frac{1}{2}, 1])$. Then $A \subseteq G$ and $B \subseteq H$ and $G, H$ are disjoint and open, since $f$ is continuous and the pre-image of open sets are open for continuous functions. $\blacksquare$

**Recall**: A continuous function $f$ maps convergent sequences to convergent sequences, but does not necessarily map Cauchy sequences to Cauchy sequences. For example, $f: (0, \infty) \to \mathbb R, x \mapsto \frac{1}{x}$ on the standard metric is continuous, and $x_n = \frac{1}{n}$ is Cauchy, but $f(x_n)$ is not.

**Proposition**: Uniformly continuous functions on metric spaces map Cauchy sequences to Cauchy sequences.

*Proof (Sketch)*: Let $\epsilon \gt 0$. Choose $\delta \gt 0$ such that if $d_X(x, y) \lt \delta, d_Y(f(x), f(y)) \lt \epsilon$ for all $x, y \in X$. Since $x_n$ is Cauchy, for $\delta$, infinitely many $x_n$ are within $\delta$ of each other. Then infinitely many $f(x_n), f(x_y)$ are within $\epsilon$ of each other. So $f(x_n)$ is Cauchy. $\blacksquare$

**Definition**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. A map $f: X \to Y$ is called a **homeomorphism** if it is bijective, $f$ is continuous, and $f^{-1}$ is continuous. We say that $X$ and $Y$ are **homeomorphic** if there is such an $f$.

**Observation**: Being homeomorphic is an equivalence relation on a metric space.

**Observation**: If $X, Y$ are homeomorphic, then open sets are mapped to open sets and closed sets are mapped to close sets.

**Example**: Completeness is not preserved under homeomorphisms. Consider $X = (-\pi/2, \pi/2)$ with the standard metric and $Y = \mathbb R$ with the standard metric. $f: X \to Y, x \mapsto \tan x$ is bijective and continuous, so $X$ and $Y$ are homeomorphic, but $Y$ is complete and $X$ is not complete, since a sequence convergent to $\frac{\pi}{2}$ is Cauchy but not convergent in $X$.

**Observation**: An isometry is a homeomorphism but a homeomorphism is not necessarily an isometry.

### Equivalent Metrics

**Definition**: Let $X$ be a set. The metrics $d$ and $\rho$ on $X$ are **equivalent** if a subset $S \subseteq X$ is open in $(X, d)$ if and only if $S$ is open in $(X, \rho)$.

**Proposition**: Let $d$ and $\rho$ be metrics on a set $X$. If there are positive constants $C_1$ and $C_2$ such that for all $x, y \in X$,

$$
C_1\rho(x, y) \leq d(x, y) \leq C_2\rho(x, y)
$$

then $d$ and $\rho$ are equivalent.

*Proof*: TODO.

**Observation**: If the metrics $d, \rho$ on $X$ ar eequivalent, then $\operatorname{id}: X_d \to X_\rho$ is a homeomorphism.

**Theorem**: Let $(X, d_X), (y, d_Y)$ be metric spaces. Suppose $f: X \to Y$ is a bijective map such that $f, f^{-1}$ are both uniformly continuous. Then $X$ is complete if and only if $Y$ is complete.

*Proof*: It suffices to show that if $X$ is complete then $Y$ is complete. Assume $X$ is complete. Let $(y_n)$ be a Cauchy sequence in $Y$. There is $(x_n) \subseteq X$ such that $y_n = f(x_n)$ for all $x_n = f^{-1}(y_n)$. Since $f^{-1}$ is uniformly continuous and $y_n$ is Cauchy, it follows that $x_n$ is Cauchy in $X$. Since $X$ is complete, $x_n$ converges to some $x \in X$. Let $y = f(x)$ with $\epsilon \gt 0$ arbitrary. Since $f$ is continuous at $x$, there is a $\delta \gt 0$ such that $d_Y(f(x), f(z)) \lt \epsilon$. $\blacksquare$

### Contractions 

**Definition**: Let $(X, d_X)$ be a metric space. A map $f: X \to X$ is called a **contraction** if there exists a constant $c \lt 1$ such that for all $x, y \in X, d(f(x), f(y)) \leq Cd(x, y)$.

**Example**: $X = \mathbb R$, $d(x, y) = \vert x - y \vert$. $f: X \to X, x \mapsto x/2$ is a contraction. Since $d(f(x), f(y)) = \frac{1}{2} d(x, y)$, so $C = \frac{1}{2}$.

**Definition**: Let $(X, d_X)$ be a metric space, $f: X \to X$ a mapping. Then $x_0 \in X$ is a **fixed point of $f$** if $f(x_0) = x_0$.

**Theorem**: Let $(X, d_X)$ be a metric space. Assume it is complete. Let $f: X \to X$ be a contraction. Then $f$ has a unique fixed point.

*Proof (Sketch)*: Continually apply the contraction to some arbitrary point $x \in X$. Since it is a contraction, the points form a Cauchy sequence and by completeness, converge to a point $y$. For contradiction, choose another fixed point $z$, then $d(y, z) = d(f(y), f(z)) \leq Cd(y, z) \lt d(y, z)$ $\blacksquare$.

**Corollary**: Let $(X, d_X)$ be a complete metric space. Let $f: X \to X$ be a continuous map such that $f \circ \dots \circ f$ $k$ times is a contraction. Then the equation $f(x) = x$ has exactly one solution.

*Proof*: Similar to above.

### Uniform Convergence

**Recall**: The uniform limit of a sequence of continuous functions is a continuous function. The uniform limit of a sequence of integrable functions is integrable.

**Definition**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. Let $f_n: X \to Y, n \in \mathbb N$ and $f: X \to Y$ be functions.
* $f_n$ converges to $f$ **pointwise** if $d_Y(f_n(x), f(x)) \to 0$ as $n \to \infty$ for all $x \in X$.
* $f_n$ converges to $f$ **uniformly** if for all $\epsilon \gt 0$, there is a $n_0 \in \mathbb N$ such that $d_Y(f_n(x), f(x)) \lt \epsilon$ for all $n \gt n_0$ and all $x \in X$.

**Remark**: Uniform convergence implies pointwise convergence, but not vice-versa.

**Theorem**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. Let $f_n: X \to Y$ be continuous functions $n = 1, 2, 3, \dots$. Suppose $f: X \to Y, f_n \to f$ uniformly. Then $f$ is continuous.

*Proof*: Let $x_0 \in X$. Let $\epsilon \gt 0$. Choose $N \in \mathbb N$ such that $d_Y(f_n(x), f(x)) \lt \epsilon/3$ for all $x \in X$ and $n \geq N$. By continuity of $f_n$, choose $\delta$ such that if $d_X(x_0, x) \lt \delta$ for all $x \in X$, then $d_Y(f_n(x), f_n(x_0)) \lt \epsilon/3$. Then, when $d_X(x_0, x) \lt \delta$,

$$
d_Y(f(x), f(x_0)) \leq d_Y(f_n(x), f(x)) + d_Y(f_n(x), f_n(x_0)) + d_Y(f_n(x_0), f(x_0)) \lt \epsilon
$$

$\blacksquare$

**Theorem (Cauchy Criterion for Uniform Convergence)**: Let $(X, d_X), (Y, d_Y)$ be metric spaces. Assume $Y$ is complete. Let $f_n: X \to Y, n = 1, 2, 3, \dots$. Then there is $f: X \to Y$ such that $f_n \to f$ uniformly if and only if $f_n$ is Cauchy.

*Proof*: TODO.

## Connectedness

**Definition**: Let $(X, d)$ be a metric space. It is **connected** if for some open disjoint subsets $U, V$ of $X$, $X = U \cup V$ implies $U = \emptyset$ or $V = \emptyset$. That is, $X$ can not be represented as the union of two disjoint open subsets.

**Example**: $\mathbb R$ with the discrete metric is not connected since every subset is open.

**Proposition**: A metric space $(X, d)$ is connected if and only if the only subsets of $X$ that are open and closed are $\emptyset$ and $X$.

*Proof*: ($\rightarrow$) Suppose $X$ is connected. Let $S \subseteq X$ be open and closed. Then $X - S$ is open and closed. Consider $S \cup (X - S) = X$. $S$ and $X - S$ are disjoint open subsets that cover $X$, so by connectedness, either $S = \emptyset$ and $X - S = X$, or vice-versa. 

($\leftarrow$) Suppose $\emptyset$ and $X$ are the only subsets of $X$ that are open and closed. Suppose $A \cup B = X$ where $A, B$ are open disjoint subsets of $X$. Then $A = X - B$. So $A$ is also closed. Similarily, $B = X - A$, so $B$ is also closed. Then $A$ and $B$ are open and closed. If $A = \emptyset$, then $B = X$, and vice-versa. So $X$ is connected. $\blacksquare$

**Example**: $\mathbb R$ with the standard metric is connected.

**Example**: Non-empty subsets of connected metric spaces are not necessarily connected, take for example $S = (0, 1) \cup (2, 3) \subseteq \mathbb R$.

**Proposition**: If $S$ is a connected subset of a metric space $(X, d)$, $\overline S$ is connected.

*Proof*: TODO.

## Compactness

**Definition**: Let $(X, d)$ be a metric space. A family of open subsets of $X$, $\lbrace U_d \rbrace_{d \in I}$, is called an **open cover** of $X$ if $\bigcup_{d \in I} U_d = X$.

**Definition**: A metric space $(X, d)$ is called **compact** if every open cover of $X$ has a finite open subcover, that is, a finite subset which is also an open cover of $X$.

**Example**: Any finite metric space is compact, since we can choose an open subset for each $x \in X$ to form a finite subfamily that covers $X$.

**Example**: $X = (0, 1)$ with the standard metric is not compact.

*Proof*: Let $U_n = (\frac{1}{n}, 1)$. Then there is no $N \in \mathbb N$ such that $\bigcup_{k = 1}^N U_k = X, since for any $N$, $\frac{1}{N + 1} \not\in \bigcup_{k = 1}^N U_k$. $\blacksquare$

**Definition**: A subset $S$ of a metric space $(X, d)$ is called **bounded** if there is an $x_0 \in X$ such that $S \subseteq B(x_0; \epsilon)$.

**Lemma**: Let $(X, d_X)$ be a metric space, $S \subseteq X$ with the induced metric. Then the open sets in $S$ are exactly the sets $S \cap U$ where $U$ is open in $X$.

*Proof*: Open balls in $S$ are open balls in $X$ intersected with $S$. $\blacksquare$

**Proposition**: Let $(X, d_X)$ be a metric space, and $K \subseteq X$ with the induced metric. If $K$ is comapct, then $K$ is bounded.

*Proof*: Choose $x_0 \in X$. For any $y \in K$ there is a ball centered at $x_0$ with radius $n \in \mathbb N$ containing $y$. As $K$ is compact, choose $N \in \mathbb N$ such that if $y \in B(x_0; n)$, $n \leq N$. Then $K \subseteq B(x_0; n)$. $\blacksquare$

**Lemma**: Let $(X, d_X)$ be a metric space. Let $x \in X$. Then $S = \lbrace x \rbrace$ is closed in $X$.

*Proof*: $S$ is not closed if there is some $y \in \overline S$ such that $y \neq x$. Then $d(y, x) > 0$. But then there is a ball around $y$ that doesn't intersect $X$, so $y \not\in \overline S$; a contradiction. $\blacksquare$

**Proposition**: Let $(X, d)$ be a metric space. If $K \subseteq X$ is compact, then $K$ is closed in $X$.

*Proof*: We show $X - K$ is open. Let $y \in X - K$. Consider the cover consisting of the union of all open balls around each element in $K$. Since $K$ is compact, take finitely many such open balls. By Urysohn's Lemma, for each of these open balls, there is a disjoint open ball containing $y$. The intersection of all of these open balls containing $y$ is open since there are finitely many of them. And, the intersection is disjoint from $X$. $\blacksquare$

**Theorem**: Let $a \leq b$. $[a, b]$ is compact in $\mathbb R$ equipped with the standard metric. 

*Proof*: TODO.

**Lemma**: Let $(X, d)$ be a metric space, and $S \subseteq X$ a non-empty subset of $X$ with the induced metric. Then $W \subseteq S$ is closed in $S$ if and only if there exists a closed set $C \subseteq X$ such that $W = S \cap C$.

*Proof*: TODO.

**Proposition**: Let $(X, d)$ be a compact metric space. Let $K$ be a closed subset of $X$. Then $K$ is compact.

*Proof*: TODO.

**Theorem**: In $\mathbb R^n$ equipped with the standard metric, a closed bounded set is compact.

*Proof*: If $S \subseteq \mathbb R^n$ is bounded, then $S \subseteq [x_1, x_2, \dots, x_n]$. We know $[x_1, x_2, \dots, x_n]$ is compact, and closed subsets of compact spaces are compact, so $S$ is compact. $\blacksquare$

**Proposition**: Let $(X, d_X)$ $(Y, d_y)$ be metric spaces and $f: X \to Y$ a continuous map. If $X$ is compact, then $f(X)$ is compact.

**Corollary**: Suppose $(X, d_X)$ and $(Y, d_Y)$ are homeomorphic metric spaces. Then $X$ is compact if and only if $Y$ is compact.

**Theorem**: Let $(X, d)$ be a compact metric space. Let $f: X \to \mathbb R$ be a continuous function. Then $f$ is bounded and attains its minimum and maximum values on $X$.

*Proof*: $f(X)$ is compact, so it contains its minimum and maximum values. $\blacksquare$

**Theorem**: Let $(X, d)$ be a metric space. If $X$ is compact, then $X$ is complete.

*Proof*: If it weren't, then every open ball around $y \in X$ would only contain finitely many elements of a Cauchy sequence in $X$. Since $X$ is compact, all such balls would form a cover of $X$, whose finite union would only contain finitely many elements of the sequence, so it wouldn't be a cover; a contradiction. $\blacksquare$

**Lemma**: Let $X$ be a metric space. Let $x \in X$ with $(x_n)$ a sequence in $X$ such that $\forall \epsilon \gt 0$, $B(x; \epsilon)$ contains $x_n$ for infinitely many $n$. Then $(x_n)$ contains a subsequence convergent to $x$.

*Proof*: Consider the elements in the sequence intersecting successively smaller epsilon balls around $x$. $\blacksquare$

**Corollary**: Let $X$ be a metric space. Suppose a sequence $(x_n)$ in $X$ has no convergent subsequence. Then for all $x \in X$, there is an epsilon ball around it containing finitely many elements of the sequence.

**Proposition**: Let $X$ be a metric space. Suppose $X$ is compact. Then $X$ is sequentially compact.

*Proof*: Same as the proof for compactness implying completeness. $\blacksquare$

### Lebesgue Numbers and $\epsilon$-nets

**Definition**: Let $X$ be a metric space with $S \subseteq X$. Let $\lbrace U \rbrace$ be an open cover of $S$. A **Lebesgue number** for this cover is $\epsilon \gt 0$ such that every $x \in S$ has an epsilon ball contained in some $U$ of the cover.

**Definition**: Let $X$ be a metric space. Let $\epsilon \gt 0$. A subset $N \subseteq X$ is an **$\epsilon$-net** for $X$ if $\lbrace B(x; \epsilon) \rbrace_{x \in N}$ is a cover for $X$.

**Example**: $\mathbb Z$ is a 1-net of $\mathbb R$ with the standard metric.

**Proposition**: Let $X$ be a sequentially compact metric space, then $\forall \epsilon \gt 0$ there is a finite epsilon net for $X$.

*Proof*: By contradiction. Successively add elements to a set whose $\epsilon$-balls don't intersect. Since there is no finite epsilon net, we can always add such elements. They will always be seperated by $\epsilon$, so it has no Cauchy subsequence, so it has no convergent subsequence. $\blacksquare$

**Proposition**: Let $(X, d)$ be a sequentially compact metric space. Let $U$ be an open cover 

**Proposition**: Every sequentially compact metric space has an open cover with a Lebesgue number.

**Proposition**: Let $X$ be a sequentially compact metric space. Then it is compact.

*Proof*: Let $U$ be an open cover of $X$. Take a finite epsilon-net of $X$ where epsilon is the Lebesgue number of $U$. Then the sets where each epsilon ball of the net is contained form a finite subcover of $X$. $\blacksquare$

**Theorem**: Let $f: X \to Y$ be a continuous map. Suppose $X$ is compact. Then $f$ is uniformly continuous.

*Proof*: 