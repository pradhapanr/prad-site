---
layout: default
order: 3
toc: true
---

# Cardinality

**Definition**: Sets $A, B$ are **equinumerous** (or have the same **cardinality**), notated $A \sim B$, when there exists a bijection $f: A \leftrightarrow B$. 
* also notated $A \sim B,  \vert A \vert  =  \vert B \vert$

Notice that for all sets $A, B, C$,
* $A \sim A$
* $A \sim B \implies B \sim A$
* $A \sim B \land B \sim C \implies A \sim C$

so cardinality represents an equivalence class. Equivalences classes with respect to $\sim$ are called **cardinal numbers** (or **cardinals**)

**Definition**: Let $I_n = \lbrace  1, \dots, n \rbrace$. A set $X$ is **finite** when $X = \emptyset$ or $\exists n \in \mathbb N, X \sim I_n$. 
* $X$ has $n$ elements.
* $X$ is **infinite** if it is not finite.
* $X$ is **denumerable** if $\exists f: \mathbb N_+ \leftrightarrow X$.
* $X$ is **countable** if it is denumerable or finite.
* Non-finite cardinal numbers are **transfinite**.

**Definition**: $\vert  \mathbb N  \vert  = \aleph_0$ is the smallest transfinite number.

**Example**:
Show that $\mathbb N \sim 2 \mathbb N$, where $2 \mathbb N = \lbrace 2k \mid k \in \mathbb N \rbrace$.

*Proof*: Let $f: \mathbb N \to 2\mathbb N, n \mapsto 2n$. We show that $f$ is bijective.  
(injective): Let $a, b \in \mathbb N$. Suppose $f(a) = f(b)$. Then, $2a = 2b$ so $a = b$.  
(surjective): Let $n \in 2 \mathbb N$. Let $k = \frac{n}{2}$. Then, $f(k) = n$.  
$f$ is both injective and surjective, so it is bijective. $\blacksquare$

**Theorem**: If $A$ is a set, then $A$ is infinite iff $\exists B \subsetneq A,\exists f: B \leftrightarrow A$.

*Proof*: ($\rightarrow$) Suppose $A$ is infinite. We show there exists a countable set $B \subseteq A$. We have $\forall n \in \mathbb N, \vert A \vert \neq n$. By the axiom of choice, pick $a_1 \in A$. Since $\vert A \vert \neq 1$, $A \setminus \lbrace  a_1 \rbrace \neq \emptyset$. So pick $a_2 \in A \setminus \lbrace  a_1 \rbrace$. Since $\vert A \vert \neq 2$, $A \setminus \lbrace  a_1, a_2 \rbrace \neq \emptyset$. Similarily, $\vert A \vert \neq k \implies A \setminus \lbrace  a_1, \dots, a_k \rbrace \neq \emptyset$. This gives an injection $\mathbb N_+ \hookrightarrow A$. We show that $\exists \tilde B \subsetneq B, \tilde B \leftrightarrow B$. Set $\tilde B = \mathbb N_+ \setminus \lbrace  1 \rbrace, f: k \in \tilde B \mapsto k - 1 \in \mathbb N_+$. Define $B = g(\tilde B)$. Then $B \subsetneq A$ since $\tilde B \subseteq \mathbb N_+$ and $g$ is injective, so $g(\tilde B) \subsetneq g(\mathbb N_+) \subseteq A$.

($\leftarrow$) Let $B \subsetneq A$ and $f: B \leftrightarrow A$.
So, $A \sim B$.
Assume for the sake of contradiction that $A$ is finite.
Then, let $n$ be the number of elements in $A$. 
Since $A \sim B$, $n$ is also the number of elements in $B$.
This contradicts the fact that $B$ is a strict subset of $A$. So, $A$ is infinite. $\blacksquare$

**Example**: Show that $\mathbb N \sim \mathbb Z$.

*Proof*: We show that

$$
f(n) = 
\begin{cases}
    k & n = 2k \\
    -k & n = 2k + 1
\end{cases}
$$

is a bijection from $\mathbb N$ to $\mathbb Z$.

(injective): Let $a, b \in \mathbb N$. Suppose $f(a) = f(b)$. Then, either $a$ and $b$ are both odd or both even. Suppose $a,b$ is even. Then, $f(a) = f(b) \implies \frac{a}{2} = \frac{b}{2} \implies a = b$. Now suppose $a,b$ is odd. Then, $f(a) = f(b) \implies -\frac{a - 1}{2} = -\frac{b - 1}{2} \implies a = b$. In either case, $a = b$.  
(surjective): Let $k \in \mathbb Z$. By definition, $n = 2k$ when $k \geq 0$ and $n = 2k + 1$ when $k < 0$.  
$f$ is both injective and surjective, so it is bijective. $\blacksquare$

**Well-ordering Principle**: Every non-empty subset of $\mathbb N_+$ contains a least element.

**Theorem 1**: Let $A$ be a countable set and $B \subseteq A$. Then $B$ is countable.

*Proof*: If $B$ is finite, $B$ is countable. So assume $B$ is infinite. Then, $A$ must be infinite, since $B \subseteq A$. Let $f: \mathbb N_+ \leftrightarrow A$, which exists since $A$ is countable. Define $X = f^{-1}(B) \subseteq \mathbb N_+$. Define $g: \mathbb N_+ \to X$ as

$$
\begin{align*}
    g(1) &= \operatorname{min}\lbrace k \mid k \in X \rbrace \\
    g(k + 1) &= \operatorname{min}\lbrace  l \in \mathbb N_+ \mid l \in X \setminus \lbrace  g(1), \dots, g(k) \rbrace \rbrace
\end{align*}
$$

which is well-defined by the well-ordering axiom. We show that $g$ is a bijection. Suppose $g(x_1) = g(x_2)$. Then $x_1 = \min \lbrace l \in \mathbb N_+ \mid l \in X \setminus \lbrace g(1), \dots, g(x_1 - 1) \rbrace$TODO: verify that $g$ is a bijection on $X$, and so $f \circ g: \mathbb N_+ \to B$ is bijective). $\blacksquare$

This theorem is useful because we can now easily show that any set is countable by showing it is a subset of another countable set (for example, the natural numbers).

**Theorem 2**: Let $A$ be a non-empty set. The following conditions are equivalent:
1. $A$ is countable
2. There is an injection $f: A \hookrightarrow \mathbb N_+$.
3. There is a surjection $g: \mathbb N_+ \twoheadrightarrow A$.

*Proof*: $(1 \to 2)$: Assume $A$ is countable. Then, $A$ is finite or enumerable. If $A$ is finite, then $h_1: A \leftrightarrow I_n$ for some $n \in \mathbb N$. Then $h_1$ is an injection from $A$ to $\mathbb N_+$. If instead $A$ is enumerable, then $h_2: \mathbb N_+ \leftrightarrow A$. Then, $h^{-1}$ is an injection from $A$ to $\mathbb N_+$. So, there exists an injection $A \hookrightarrow \mathbb N_+$.  

$(2 \to 3)$: Let $f: A \hookrightarrow \mathbb N_+$. Define
$$
g(n) = \begin{cases}
    f^{-1}(n) & n \in f(A) \\
    a_0 & n \not\in f(A)
\end{cases}
$$
where $a_0 \in A$. 

$(3 \to 1)$: Assume $\exists g: \mathbb N_+ \twoheadrightarrow A$. Define $h: A \to \mathbb N_+$ as $h(a) = \operatorname{min}\lbrace  n \in \mathbb N_+ \mid g(n) = a\rbrace$. $h$ is injective since if $h(a) = h(b)$ then $h(a) \in g^{-1}(\lbrace  a\rbrace) \cap g^{-1}(\lbrace  b \rbrace)$. So, $a = b$, otherwise the vertical line test would be contradicted.

Thus, $h: A \leftrightarrow h(A) \subseteq \mathbb N_+$ is a bijection. $h(A)$ is countable since $h(A) \subseteq \mathbb N_+$ and $\mathbb N_+$ is countable. So $A$ is countable. $\blacksquare$

**Example**: Let $S,T \neq \emptyset$ and countable. Show that $S \cup T$ is countable.

*Proof*: By Theorem 2, it suffices to find a surjection $\mathbb N_+ \twoheadrightarrow S \cup T$. Fix surjections $f: \mathbb N_+ \twoheadrightarrow S, g: \mathbb N_+ \twoheadrightarrow T$. Define $h: \mathbb N_+ \to S \cup T$ as

$$
h(n) = \begin{cases}
    f(\frac{n+1}{2}) & n \text{ is odd} \\
    g(\frac{n}{2}) & n \text{ is even}
\end{cases}
$$

which is bijective. $\blacksquare$

**Example**: Let $S,T \neq \emptyset$ and countable. Show that $S \times T$ is countable.

*Proof*: Fix injections $f: S \to \mathbb N_+, g: T \to \mathbb N_+$. Define $h: S \times T \to \mathbb N_+$ as $h((s,t)) = 2^{f(s)}3^{g(t)}$.

We show that $h$ is injective. Suppose $h((s,t)) = h((z,v))$. Then $2^{f(s)}3^{g(t)} = 2^{f(z)}3^{f(v)}$ so $2^{f(s) - f(z)} = 3^{g(v)-g(t)}$. Since $2$ and $3$ are relatively prime, it must be that $f(s) - f(z) = g(v) - g(t) = 0$, that is $f(s) = f(z)$ and $g(v) = g(t)$, so $s = z$ and $t = v$, by the injectivity of $f, g$. 

**Example**: Show that $\mathbb Q \sim \mathbb N_+$.

*Proof*: Write $\mathbb Q = \mathbb Q_- \cup \lbrace  0 \rbrace \cup \mathbb Q_+$. For $q \in \mathbb Q_+$, there exists $(m_q, n_q) \in \mathbb N_+ \times \mathbb N_+$ such that $q = \frac{m_q}{n_q}$ where $m_q$ and $n_q$ are relatively prime. Define $f: \mathbb Q_+ \to \mathbb N_+$ by $f(q) = 2^{m_q}3^{n_q}$. Then $f(q)$ is an injection, as shown above. So, $\mathbb Q_+$ is countable. By a symmetric argument, $\mathbb Q_-$ is countable. Since the union of countable sets are countable, $\mathbb Q$ is countable. $\blacksquare$

**Example**: Every countable union of countable sets is countable. That is, $B = \cup \lbrace  A_n \rbrace_{n = 1}^\infty$ is countable, where $A_n$ is countable.

*Proof*: Enumerate the sets $A_i$ as

$$
\begin{align*}
    &A_1: a_{11}, a_{12}, a_{13}, \dots \\
    &A_2: a_{21}, a_{22}, a_{23}, \dots \\
    &A_3: a_{31}, a_{32}, a_{33}, \dots 
\end{align*}
$$

and consider the anti-diagonals $\lbrace  \lbrace  a_{11} \rbrace , \lbrace  a_{12}, a_{21} \rbrace, \lbrace  a_{13}, a_{22}, a_{31} \rbrace, \dots \rbrace$. We can enumerate every element in this order, so we could write a bijection $f: \mathbb N_+ \leftrightarrow A$. (TODO: make this argument more rigorous?)
$\blacksquare$

--- 
## Expansions of Real Numbers

### Decimal Expansion

Let $r \in \mathbb R$. It can be represented as

$$
    r = a_{r0}.a_{r1}a_{r2}a_{r3}\dots
$$

where $a_{r_0}$ = $\lfloor r \rfloor$ is the integral part of $r$ and $a_{r_i} \in \lbrace  0, 1, \dots, 9 \rbrace$ and

$$
    r = \sum_{i=0}^\infty \frac{a_{r_i}}{10^i} 
$$

Note that decimal expansions are not unique, for example

$$
    1 = \sum_{i = 0}^\infty \frac{9}{10^i} = 0.999\dots
$$

### Other Base Expansion

Similarily, expansion in other bases can be written where $a_{r_i} \in \lbrace  0, \dots, b \rbrace$ and $r = \sum_{i = 0}^\infty \frac{a_{r_i}}{b^i}$ for some base $b$. 

---

**Theorem (Cantor's)**: $\mathbb R$ is not enumerable.

*Proof*: For the sake of contradiction, suppose $\mathbb R \sim \mathbb N_+$. Then, we can list the decimal expansions of all the real numbers $r_1, \dots r_n \in \mathbb R_n$ in a sequence as follows:

$$
\begin{align*}
    r_1 &= a_{11}a_{12}a_{13}\dots \\
    r_2 &= a_{21}a_{22}a_{23}\dots \\
    r_3 &= a_{31}a_{32}a_{33}\dots
\end{align*}
$$

Consider $s \in \mathbb R$ with the decimal expansion $a_{10}a_{21}a_{32}\dots$ (the digits defined along a top-left to bottom-right diagonal). Define $t = b_1b_2b_3\dots$ such that

$$
\begin{align*}
b_i = \begin{cases}
    5 & a_{ii} \neq 5 \\
    0 & a_{ii} = 5
\end{cases}
\end{align*}
$$

Since for any number $r_i$ in the list, $r_{ii} \neq b_i, t \neq r_i$ for all $i < n$, that is, $t$ is a newly constructed real number not in the list contradicting our assumption that $r_1, \dots, r_n$ enumerates all the real numbers. $\blacksquare$

**Definition**: We say that $\vert A \vert  \leq  \vert B \vert$ when there exists an injection $f: A \to B$.

**Definition**: The cardinality of the real numbers is the cardinal number **continuum** $\mathfrak{c}$ (also notated $2^{\aleph_0}$) 

**Theorem**: The cardinality of the real numbers is strictly greater than the cardinality of the natural numbers.

*Proof*: $\mathfrak{c} > \aleph_0$, since $\mathfrak{c} \neq \aleph_0$ (by Cantor's theorem) and $\mathfrak{c} \geq \aleph_0$, since the identity function $n \mapsto n$ is a bijection from $\mathbb N \to \mathbb N$, and thus also a bijection from $\mathbb N \to \mathbb R$ since $\mathbb N \subseteq \mathbb R$. $\blacksquare$

**Theorem (Cantor-Bernstein)**: Given sets $X, Y$, if $\vert X \vert  \leq  \vert Y \vert$ and $\vert Y \vert  \leq  \vert X \vert$, then $\vert X \vert  =  \vert Y \vert$. 

*Proof*: Fix injections $f: X \hookrightarrow Y$ and $g: Y \hookrightarrow X$. Define $\psi = g \circ f: X \to X$. Since $f$ and $g$ are injective, $\psi$ is injective.   hence $\psi$ is a bijection onto $\psi(X)$. Let $Z = g(Y) \subseteq X$, $V = X \setminus Z$.

Notation: For a set $C \subseteq X, \psi^0 (C) = C, \psi^{n + 1}(C) = \psi(\psi^n(C))$.

So,
1. $\forall n \in \mathbb N, \psi^{n + 1}(X) \subseteq \psi^n(Z) \subseteq \psi^n(X)$
2. $\forall n \in \mathbb N, \psi^n(X) \setminus \psi^n(Z) = \psi^n(V)$
3. $\forall n \in \mathbb N, \psi^n(V) \cap \psi^n(Z) = \emptyset$
4. $\forall k,l \in \mathbb N, k < l \implies \psi^l(V) \subseteq \psi^l(X) \subseteq \psi^k(Z)$

Define $S = V \cup \psi(V) \cup \psi^2(V) \cup \dots = \bigcup_{k=0}^\infty \psi^k(V) = \coprod^\infty_{k=0}\psi^k (V)$. $h: X \to X$ by

$$
h(X) = \begin{cases}
    \psi(x) & x \in S \\
    x & x \in X \setminus S
\end{cases}
$$

We claim that $h: X \leftrightarrow Z$. 

(injectivity):  $h$ follows from the injectivity of $\psi$ (TODO: prove this).

(surjectivity): $h(S) = \psi(S) = \psi(\bigcup_{k = 0}^\infty \psi^k(V)) = \bigcup_{k = 0}^\infty \psi(\psi^k(V)) = \bigcup_{l = 1}^\infty \psi^l(V) = S \setminus V$. (TODO: prove the 3rd equality). Note that the final equality follows because $\bigcup_{l \geq 1} \psi^l(V) \subseteq \psi^0(Z) = Z$ by observation (5). So $h(X \setminus S) = X \setminus S$, and by observations (1) and (2), $h(X) = h(S \cup (X \setminus S)) = h(S) \cup h(X \setminus S) = (S \setminus V) \cup (X \setminus S) = X \setminus V = Z$.
Then, $g^{-1} \circ h: X \leftrightarrow Y$. $\blacksquare$.

**Theorem**: If $S$ is a set, then $\vert S \vert < \vert \mathscr{P}(S) \vert$.

*Proof*: Fix a set $S$. Define $f: s \in S \mapsto \lbrace  s \rbrace \in \mathscr{P}(S)$. Then, $f$ is injective, so $\leq$ holds. To show that $\neq$, suppose for the sake of contradiction that $\vert S \vert = \vert \mathscr{P}(S) \vert$ and fix a bijection $g: S \leftrightarrow \mathscr{P}(S)$. Define $T = \lbrace  s \in S \mid s \not\in g(s) \rbrace$. Let $t \in S$ be such that $g(t) = T$.

<u>Case 1</u>: $t \in T$. Then $t \not\in g(t) = T$.

<u>Case 2</u>: $t \not\in T$. Then $t \in g(t) = T$.

In either case, there is a contradiction, so there does not exist a bijection between $S$ and $\mathscr{P}(S)$. So, $\vert S \vert \neq \vert \mathscr P(S) \vert$. $\blacksquare$.

**Corollary**: There is an infinite sequence of cardinals. For example, $\vert \mathbb N \vert < \vert \mathscr{P}(\mathbb N) \vert < \vert \mathscr P(\mathscr P(\mathbb N)) \vert < \dots$

**Continuum Hypothesis (Cantor)**: There is no set $S, \aleph_0 < \vert S \vert < \mathfrak c$.

## Cardinal Arithemtic

**Definition**: Given cardinal numbers $\alpha, \beta$, where $\alpha = \vert A \vert, \beta = \vert B \vert$, define
* $\alpha + \beta = \vert A \cup B \vert$, where $A \cap B = \emptyset$
* $\alpha \cdot \beta = \vert A \times B \vert$

**Proposition**: The above operations are well-defined.

*Proof*: We show that cardinal arithemtic is well defined by showing that $\alpha + \beta = \vert A \cup B \vert$ holds regardless of choice of equivalence object.
(1) Suppose $\forall n \in \mathbb N, \alpha \neq n, \forall m \in \mathbb N, \beta \neq n$. Suppose $\alpha = \vert A \vert = \vert C \vert$ and $\beta = \vert B \vert = \vert D \vert$, where $A \cap B = \emptyset = C \cap D$. We want to show that $\vert A \cup B \vert = \vert C \cup D \vert$. Pick bijections $f: A \leftrightarrow C, g: B \leftrightarrow D$. Define $h: A \cup B \to C \cup D$ as 

$$
    h(x) = \begin{cases}
    f(x) & x \in A \\
    g(x) & x \in B
    \end{cases}
$$

We show that $h$ is bijective.

(injectivity): Let $x_1,x_2 \in A \cup B, x_1 \neq x_2$. WLOG, assume $x_1 \in A$. Suppose $x_2 \in A$.  Then $h(x_1) = f(x_1)$ and $f(x_2) = h(x_2)$. By the injectivity of $f$ and $h$, $f(x_1) \neq f(x_2)$. If $x_2 \in B$, then $h(x_2) = g(x_2) \in D$, $h(x_1) = f(x_1) \in C$, $C \cap D = \emptyset$. So, $h(x_1) \neq h(x_2)$.  
(surjectivity) Let $y \in C \cup D$. Suppose $y \in C$. Then $\exists x \in A$ such that $y = f(x)$ by the bijectivity of $f$. Suppose $y \in D$. Then $\exists x \in B$ such that $y = g(x)$ by the bijectivity of $g$. $\blacksquare$

For the case of multiplication, $\vert A \times B \vert = \alpha \cdot \beta = \vert C \times D \vert \land \vert A \vert = \vert C \vert \land \vert B \vert = \vert D \vert$, since $h: (a, b) \in A \times B \mapsto (f(a),g(b)) \in C \times D$ is a bijection. $\blacksquare$

**Proposition**: For any cardinals $\alpha,\beta,\gamma$,
1. $\alpha + \beta = \beta + \alpha$
2. $\alpha + (\beta + \gamma) = (\alpha + \beta) + \gamma$
3. $\alpha \cdot \beta = \beta \cdot \alpha$
4. $\alpha \cdot (\beta \cdot \gamma) = (\alpha \cdot \beta) \cdot \gamma$
5. $\alpha \cdot (\beta + \gamma) = \alpha \cdot \beta + \alpha \cdot \gamma$

Notation: $\mathscr P(S) \equiv 2^S$
* justification: there is a bijection $T \in \mathscr P(S) \mapsto \mathcal{X}_T \in \lbrace  \S \to \lbrace 0, 1\rbrace \rbrace$ where $\mathcal{X}_T$ is the characteristic function of $T$ related to $S$

**Theorem**: $\vert \mathscr P(\mathbb N) \vert = \mathfrak{c}$.

**Axiom of Choice**: For any class of sets $\lbrace  A_{\iota} \rbrace \in A$, there exists a set $S$ such that $\vert S \cap A_\iota \vert = 1, \forall \iota \in I$.

**Theorem**: $\aleph_0$ is the least transfinite cardinal.

*Proof*: Suppose $\alpha \neq n \forall n \in \mathbb N$. Choose $A$ such that $\alpha = \vert A \vert$. By the axiom of choice, pick $\alpha \in A$. $\alpha \neq 1 \implies A \setminus \lbrace  a_1 \rbrace \neq \emptyset$. Pick $a_2 \in A \setminus \lbrace  a_1 \rbrace \dots \alpha \neq k \implies A \setminus \lbrace  a_1, \dots, a_k \rbrace \neq \emptyset$. Pick $a_{k + 1} \in A \setminus \lbrace  a_1, \dots , a_k \rbrace$. This defines an injection $k \in \mathbb N_+ \mapsto a_k \in A$. Hence, $\vert \mathbb N_+ = \aleph_0 \leq \vert A \vert = \alpha$. $\blacksquare$.

**Theorem**: $\vert \mathbb R \setminus \mathbb Q \vert = \mathfrak c$.

*Proof*: By the continuum hypothesis, it suffices to show that $\aleph_0 < \vert \mathbb R \setminus \mathbb Q \vert$ since $x \in \mathbb R \setminus \mathbb Q \mapsto x \in \mathbb R$ is injective. Suppose for the sake of contradiction that $\vert \mathbb R \setminus \mathbb Q \vert = \aleph_0$. Then, $\vert \mathbb R \vert = \vert (\mathbb R \setminus \mathbb Q) \cup \mathbb Q \vert = \aleph_0 + \aleph_0 = \aleph_0$, since the countable union of countable sets is itself countable. $\blacksquare$.

**Proposition**:
1. $\forall n \in \mathbb N, n + \aleph_0 = \aleph_0$
2. $\forall n \in \mathbb N, n \cdot \aleph_0 = \aleph_0$
3. $\aleph_0 \cdot \aleph_0 = \aleph_0$
4. $\forall \alpha, \beta$ transfinite, $\forall n \in \mathbb N$,
   1. $n + \alpha = n + \beta \iff \alpha = \beta$
   2. $n + \alpha = \aleph_0 + \beta \iff \alpha = \beta$
   3. $\aleph_0 + \alpha = \aleph_0 + \beta \iff \alpha = \beta$