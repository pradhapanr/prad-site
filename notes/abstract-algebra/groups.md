---
layout: default
toc: true
order: 1
---

# Groups

## Groups

**Definition**: A binary operation on a set $S$ is a function $*: S \times S \to S$

**Example**: Let $S = \lbrace x \in \mathbb R \mid x \geq -1 \rbrace$. $+$ on $S$ is not a binary operation since $-1 + -1 = -2 \not\in S$. 

**Example**: $\times$ is not a binary option on $M_{m \times n}(\mathbb R)$ when $m \neq n$

**Definition**: A binary operation $*$ on $S$ is
1. **associative** if for all $a, b, c \in S$, $(a * b) * c = a * (b * c)$
2. **commutative** if for all $a, b \in S$, $a * b = b * a$

**Example**: $+$ is both associative and commutative on $\mathbb Z, \mathbb Q, \mathbb R, \mathbb C$.

**Definition**: Let $S$ be a set with a binary operation $*$. Then $*$ has an **identity element** if there is $e \in S$ such that for any $a \in S$, $a * e = a = e * a$.

**Example**: $(\mathbb Z, +)$ has identity element $0$, since $a + 0 = a = 0 + a$.

**Example**: $\operatorname{Bij(X)}$ has identity element $\operatorname{id}_X: X \to X$.

**Non-Example**: Let $P = \lbrace x \in \mathbb R \mid x \geq 2 \rbrace = [2, \infty)$. $+: P \times P \to P$ is a binary operation that doesn't have an identity element, since for any $a, b \in P$, $a + b \gt a, b$.

**Proposition**: If a binary operation $\star$ on $S$ has an identity element, then it is nuique.

*Proof*: Suppose $e, e' \in S$ are both identity elements. Then $e = e * e' = e'$. $\blacksquare$

**Definition**: Let $S$ be a set with a binary operation $*$ and identity elemnet $e$. The **inverse** of an element $a \in S$ is an element $b \in S$ such that $a * b = e = b * a$.

**Example**: $(\mathbb Z, +)$, the inverse of $n$ is $-n$.

**Example**: $(\mathbb Z, \cdot)$, the inverse of 1 is 1, the inverse of -1 is -1, the inverse of 2 does not exist.

**Proposition**: Let $*$ be an associative binary operation on $S$ with identity element $e$. Then if an element $a \in S$ has an inverse, then it is unique.

*Proof*: Suppose $b, b' \in S$ are both inverses of $a$. So $a * b = e = b * a$ and $a * b' = e = b' * a$. We have $b = b * e = b * (a * b') = (b * a) * b' = e * b' = b'$. $\blacksquare$

**Notation**: We write $a^{-1}$ for the inverse of $a$.

**Definition**: A **group** is a set $G$ with a binary operation $*$ that is associative, has an identity element, and every element has an inverse.

**Example**: $(\mathbb Z, +)$, $(\mathbb R, +)$

**Definition**: The set of all permutations of a set $S$ is denoted by $\operatorname{Sym}(S)$. The set of all permutations of the set $\lbrace 1, 2, \dots, n \rbrace$ is denoted by $S_n$. The group $\operatorname{Sym}(S)$ is called the **symmetric group** on $S$, and $S_n$ is called the **symmetric group of degree $n$**.

**Proposition (Cancellation Property for Groups)**: Let $G$ be a group, and let $a, b, c \in G$.
* if $ab = ac$, then $b = c$
* if $ac = bc$, then $a = b$

**Proposition**: If $G$ is a group if and only if for all $a, b \in G$, then each of the equations $ax = b$ and $xa = b$ has a unique solution.

**Definition**: A group $G$ is said to be **abelian** if $ab = ba$ for all $a, b \in G$.

**Definition**: The set of all invertible $n \times n$ matrices with entries in $\mathbb R$ is called the **general linear group of degree $n$ over the real numbers** and is denoted by $\text{GL}_n(\mathbb R)$

## Subgroups

**Definition**: Let $G$ be a group with identity $e$ and $H \subseteq G$. Then $H$ is a **subgroup** of $G$ if
1. $ab \in H$ for all $a, b \in H$
2. $e \in H$
3. $a^{-1} \in H$ for all $a \in H$

**Remark**: A subgroup of a group is itself a group.

**Example**: The set of all $n \times n$ matrices over $\mathbb R$ with determinant 1 is the **special linear group over $\mathbb R$** $\text{SL}_n(\mathbb R)$, which is a subgroup of $\text{GL}_n(\mathbb R)$.

**Lemma**: Let $G$ be a group and let $H \subseteq G$. Then $H$ is a subgroup of $G$ if and only if $H$ is non-empty and $ab^{-1} \in H$ for all $a, b \in H$.

*Proof*: $(\rightarrow)$ By definition.

$(\leftarrow)$ Suppose $H$ is non-empty and $ab^{-1} \in H$ for all $a, b \in H$. Then $aa^{-1} = e \in H$. Also, $ea^{-1} = a^{-1} \in H$. Finally, $a(b^{-1})^{-1} = ab \in H$. So $H$ is a subgroup of $G$. $\blacksquare$

**Lemma**: Let $G$ be a group, and let $H$ be a finite, non-empty subset of $G$. Then $H$ is a subgroup of $G$ if and only if $ab \in H$ for all $a, b \in H$.

*Proof (Sketch)*: $(\leftarrow)$ Since $ab \in H$, $a, a^2, a^3, \dots \in H$, and since $H$ is finite, eventually $a^i = a^j$ for some $i \lt j$ Then $a^{j - i} = e$ and $a^{j - i - 1}$ is the inverse of $a$.



## Homomorphisms

**Definition**: Let $(G_1, *_1)$ and $(G_2, *_2)$ be groups. A function $f: G_1 \to G_2$ is a **group homomorphism**, if for all $a, b \in G_1$, $f(a *_1 b) = f(a) *_2 f(b)$.

**Example**: $\det: GL_n(\mathbb R) \to \mathbb R^*$ is a group homomorphism since $\det(AB) = \det A \det B$.

**Example**: $\exp: \mathbb R \to \mathbb R^\times$ is a group homorphism since $\exp(x + y) = \exp x \exp y$.

**Lemma**: Let $(G_1, *_1)$ and $(G_2, *_2)$ be groups and $f: G_1 \to G_2$ be a homomorphism. Then:

1. $f(e_1) = e_2$
2. $f(a^{-1}) = f(a)^{-1}$ for all $a \in G$
3. $f(a^n) = (f(a))^n$ for all $a \in G$, $n \in \mathbb N$

*Proof*: 

(1) $e_2 *_2 f(e_1) = f(e_1) = f(e_1 *_1 e_1) = f(e_1) * f(e_1)$, so $e_2 = f(e_1)$, by the cancellation law.

(2) $f(a^{-1}) = f(a^{-1}e_1) = f(a^{-1})e_2 = f(a^{-1})f(a)f(a)^{-1} = f(a^{-1}a)f(a)^{-1} = f(e_1)f(a)^{-1} = f(a)^{-1}$.

(3) By induction.

$\blacksquare$

**Proposition**: Let $f: G_1 \to G_2$ be a group homomorphism.

1. If $H_1 \subseteq G_1$ is a subgroup, then $f(H_1)$ is a subgroup of $G_2$.
2. If $H_2 \subseteq G_2$ is a subgroup, then $f^{-1}(H_2)$ is a subgroup of $G_1$.

*Proof*:

(1) Let $H_1 \subseteq G_1$ be a subgroup. Let $a, b \in f(H_1)$. Then there is $x, y \in H_1$ such that $a = f(x)$ and $b = f(y)$. Since $H_1$ is a subgroup, $xy^{-1} \in H_1$. So, $f(xy^{-1}) = f(x)f(y^{-1}) = f(x)f(y)^{-1} = ab^{-1} \in f(H_1)$$. $\blacksquare$

(2) Let $H_2 \subseteq G_2$ be a subgroup. Let $x, y \in f^{-1}(H_2)$. Then there is $a, b \in H_2$ such that $a = f(x)$ and $b = f(y)$. Since $H_2$ is a subgroup, $ab^{-1} \in H_2$. So $f(x)f(y)^{-1} = f(xy^{-1}) \in H_2$, so $xy^{-1} \in f^{-1}(H_2)$. $\blacksquare$

**Definition**: The **kernel** of a group homomorphism $f: G_1 \to G_2$ is $\operatorname{Ker}(f) = \lbrace x \in G_1 \mid f(x) = e_2 \rbrace$.

**Remark**: $\operatorname{Ker}(f) = f^{-1}(\lbrace e_2 \rbrace)$.

**Corollary**: For any group homomorphism $f: G_1 \to G_2$, $\operatorname{Ker}(f)$ is a subgroup of $G_1$.

**Example**: $f: \mathbb Z \to \mathbb Z, k \mapsto 2k$, $\operatorname{Ker}(f) = \lbrace 0 \rbrace$.

**Example**: $\det: GL_n(\mathbb R) \to \mathbb R^*$. $\operatorname{Ker}(\det) = SL_n(\mathbb R)$.

**Proposition**: A group homomorphism $f: G_1 \to G_2$ is injective if and only if $\operatorname{Ker}(f) = \lbrace e_1 \rbrace$.

*Proof*: $(\rightarrow)$ Suppose $a \in \operatorname{Ker}(f)$. Then $f(a) = e_2 = f(e_1)$. By injectivity of $f$, $a = e_1$. 

$(\leftarrow)$ Suppose $\operatorname{Ker}(f) = \lbrace e_1 \rbrace$. Let $f(a) = f(b)$. Then $f(a)f(b)^{-1} = f(ab^{-1}) = e_2$. Since the kernel is trivial, $ab^{-1} = e_1$, so $a = b$. $\blacksquare$

**Definition**: A group homomorphism $f: G_1 \to G_2$ is a **group isomorphism** if there is any group homomorphism $g: G_2 \to G_1$ such that $g \circ f = \operatorname{id}_{G_1}$ and $f \circ g = \operatorname{id}_{G_2}$.

**Proposition**: A group homormophism $f: G_1 \to G_2$ is an isomorphism if and only if it is a bijection.

*Proof*: $(\rightarrow)$ By definition.

$(\leftarrow)$ Let $g: G_2 \to G_1$ such that $g \circ f = \operatorname{id}_{G_1}$ and $f \circ g = \operatorname{id}_{G_2}$. Choose $y, y' \in G_2$. Then

$$
\begin{align*}
    g(y_1 *_2 y_2) &= g(f(x_1) *_2 f(x_2)) \\
    &= g(f(x_1 *_1 x_2)) \\
    &= (g \circ f)(x_1 *_1 x_2) \\
    &= x_1 *_1 x_2 \\
    &= g(y_1) *_1 g(y_2)
\end{align*}
$$
$\blacksquare$

**Corollary**: 
1. The inverse of a group isomorphism is a group isomorphism.
2. The composite of a group isomorphism is a group isomorphism.

**Notation**: $G_1 \cong G_2$ if there is a group ismorphism $f: G_1 \to G_2$.

**Example**: $\mathbb Z \not \cong \mathbb Z_2$ since the orders differ.

**Definition**: Let $G_1$ and $G_2$ be groups. The product of $G_1$ and $G_2$ is the group $(G_1 \times G_2)$ with the operation defined elementwise.

**Example**: Show that $\mathbb Z_6 \cong \mathbb Z_2 \times \mathbb Z_3$ with the isomorphism given by $f(k) = (k \bmod 2, k \bmod 3)$

*Proof*: $f(a) + f(b) = (a + b \bmod 2, a + b \bmod 3) = f(a + b)$, Brute force check shows that it is bijective. $\blacksquare$.

## Cyclic Groups

**Definition**: Let $G$ be a group and $a \in G$.
* The subgroup generated by $a$ is $\langle a \rangle = \lbrace a^n \mid n \in \mathbb Z \rbrace$, and $a$ is called the **generator** of $\langle a \rangle$.
* $G$ is cyclic if $G = \langle a \rangle$.

**Definition**: Let $a \in G$ for some group $G$. If $\exists n \in \mathbb N^+$ such that $a^n = e$, then $a$ has **finite order**, and the smallest such $n$ is the **order** of $a$, denoted $o(a)$. If there does not exist such $n$, then $a$ has **infinite order**.

**Lemma**: Let $G$ be a group and $a \in G$.

1. If the order of $a$ is infinite, then $a^k = a^l$ if and only if $k = l$.
2. If the order of $a$ is $n$, then $a^k = a^l$ if and only if $n \mid k - l$.

*Proof*: 

(1) $(\rightarrow)$ Suppose $a^k = a^l$. Then $a^{k - l} = e$. Since $a$ has infinite order, this is only possibel when $k - l = 0$, that is, $k = l$.

$(\leftarrow)$ Trivial. $\blacksquare$

(2) $(\rightarrow)$ Suppose $a^k = a^l$. Then $a^{k - l} = e$. Since $o(a) = n$, $a^{k - l} = e$ when $k - l = mn$ for some $m$. That is, $n \mid k - l$.

$(\leftarrow)$ Suppose $n \mid k - l$. Then $k - l = mn$ for some $m$, and since $o(a) = n$, $a^{k - l} = a^{mn} = (a^n)^m = e^m = e$, that is, $a^k = a^l$. $\blacksquare$

**Corollary**: Let $a \in G$. If $o(a) = k$ and $a^n = e$, then $k \mid n$.

*Proof*: Suppose $a^n = e$. We have $(a^k)^m = e, so $a^n = a^{km}$, so by above, $k \mid n - km$, that is, $kx = n - km \implies k(x + m) = n$, so $k \mid n$. $\blacksquare$

**Lemma**: Let $G$ be a group and let $a \in G$.
1. The set $\langle a \rangle$ is a subgroup of $G$.
2. If $K$ is any subgroup of $G$ such that $a \in K$, then $\langle a \rangle \subseteq K$

*Proof*: 
(1) Let $x, y \in \langle a \rangle$. Then $x = a^n$ and $y = a^m$ for some $n, m \in \mathbb N$, and $y^{-1} = a^{-m} \in \langle a \rangle$, so $xy^{-1} = a^na^{-m} = a^{n - m} \in \langle a \rangle$. $\blacksquare$

(2) Let $K$ be a subgroup of $G$ with $a \in K$. Let $x \in \langle a \rangle$. Then $x = a^k$ for some $k \in \mathbb Z$. Since $k$ is a subgroup, by the closure property, $a^k \in K$. So $\langle a \rangle \subseteq K$. $\blacksquare$

**Proposition**: Every subgroup of a cyclic group is cyclic.

*Proof*: Let $H$ be a subgroup of a cyclic group $G$. Let $a \in G$ such that $\langle a \rangle = G$. If $H = \lbrace e \rbrace$ then $H$ is cyclic, so suppose otherwise. Then, choose the smallest $m \in \mathbb Z^+$ such that $a^m \in H$. We show that $H = \langle a^m \rangle$. Let $b \in H$. Since $H \subseteq G$, then $b = a^n$ for some $n \in \mathbb Z$. By the division algorithm, choose $q, r$ such that $0 \leq r \lt m$ and $n = mq + r$. Then $a^n = (a^m)^q a^r$. So $a^r = a^n (a^m)^{-q}$. Since $H$ is a group and $a^n, a^m \in H$, $a^r \in H$. Since $m$ is the smallest positive integer such that $a^m \in H$ and $0 \leq r \lt m$, $r = 0$. So $a^n = (a^m)^q = b$. $\blacksquare$

**Theorem**: Let $G$ be a cyclic group.

1. If the order of $G$ is infinite, then $G \cong \mathbb Z$.
2. If the order of $G$ is $n$, then $G \cong \mathbb Z_n$.

*Proof*: 

(1) Let $a$ be the generator of $G$. Consider $f: \mathbb Z \to G, n \mapsto a^n$. Then it is a homomorphism since $f(x)f(y) = a^xa^y = a^{x + y} = f(x + y)$. It is injective since $\operatorname{Ker}(f) = \lbrace 0 \rbrace$ and surjective since for any $a^n \in G, f(n) = a^n$. $\blacksquare$

(2) TODO.

**Example**: $\mathbb Z_{10} \cong \mathbb Z_{11}^*$ by the isomorphism $f: n \mapsto [2^n]$.

## Cayley's Theorem

**Theorem (Cayley)**: Let $(G, *)$ be a group. Then there is an injective homomorphism $f: G \to \operatorname{Bij}(G)$.

*Proof*: Define $f: G \to \operatorname{Bij}(G), a \mapsto \lambda_a$ where $\lambda_a: G \to G, x \mapsto ax$. We prove the following.

1. $\lambda_a$ is a bijection. 

The inverse of $\lambda_a$ is $\lambda_{a^-1}$, and we have $(\lambda_{a^{-1}} \circ \lambda_{a})(x) = a^{-1}(ax) = (a^{-1}a)x = x$, so $\lambda_{a^{-1}} \circ \lambda_{a} = \operatorname{id}_G$. The reverse can be shown similarily.

2. $f$ is a homormophism.

Let $a, b, x \in G$. Then $f(ab)(x) = \lambda_{ab}(x) = (ab)x = a(bx) = \lambda_a (bx) = (\lambda_a \circ \lambda_b)(x) = f(a) \circ f(b)$

3. $f$ is injective.

Suppose $f(a) = f(b)$. Then $a = ea = f(a)(e) = f(b)(e) = eb = b$. $\blacksquare$

**Remark**: Every group is isomorphic to a subgroup of some $\operatorname{Bij}(X)$.

### Symmetric Groups

**Definition**: The **symmetric group**, denoted $S_n$, is the group $\operatorname{Bij}(\lbrace 1, 2, \dots, n \rbrace)$. An element in $S_n$ is called a **permutation**.

**Notation**: We write a permutation $\sigma$ as $\begin{pmatrix}1 & 2 & 3 \\ \sigma(1) & \sigma(2) & \sigma(3) \end{pmatrix}$.

**Notation**: We can also describe a permutation by its cycles, so that $\sigma = (a, b, c)$ means $a \mapsto b, b \mapsto c, c \mapsto a$. Elements not listed in the cycle, say $d$, maps to itself. If a permutation has multiple cycles, it is denoted by the product of those cycles, e.g. $\sigma = (a, b, c)(d, e)$ means $a \mapsto b, b \mapsto c, c \mapsto a, d \mapsto e, e \mapsto d$.

**Remark**: The binary operation in $S_n$ is function composition.

**Example**: Let $\sigma = \begin{pmatrix}1 & 2 & 3 \\ 2 & 3 & 1 \end{pmatrix}$ and $\tau = \begin{pmatrix}1 & 2 & 3 \\ 1 & 3 & 2 \end{pmatrix}$. Then $\sigma \tau = \begin{pmatrix} 1 & 2 & 3 \\ 2 & 1 & 3 \end{pmatrix}$. and $\sigma \tau = \begin{pmatrix} 1 & 2 & 3 \\ 3 & 2 & 1 \end{pmatrix}$ Note that $S_n$ in general is not abelian and $\sigma \tau$ = $\tau \circ \sigma$.

**Proposition**: The order of $S_n$ is $n!$.

*Proof*: There are $n$ different permutations for $\lbrace 1, \dots, n \rbrace$, that is, $n!$. $\blacksquare$

**Proposition**: $S_n$ is non-abelian for $n \geq 3$.

*Proof*: From the example above, $S_3$ is not abelian. We proceed by induction. Let $n \gt 3$. Suppose $S_{n - 1}$ is non-abelian. Choose one such $\sigma_{n - 1}$ and $\tau_{n - 1}$ such that their composition does not commute. Define $\sigma_n(x) = \begin{cases}x,& x = n \\ \sigma_{n - 1}(x), & x < n\end{cases}$, and likewise for $\tau_n(x)$. Then $\sigma_n$ and $\tau_n$ do not commute, so $S_n$ is not abelian. $\blacksquare$

## Lagrange's Theorem

**Lemma**: Let $H$ be a subgroup of the group $G$. For $a, b \in G$, define $a \sim G$ if $ab^{-1} \in H$. Then $\sim$ is an equivalence relation.

*Proof*: The relation is reflexive since $aa^{-1} = e \in H$. It is symmetric since if $ab^{-1} \in H$, then $(ab^{-1})^{-1} = ba^{-1} \in H$, so $b \sim a$. It is transitive since if $a \sim b$ and $b \sim c$, then $(ab^{-1})(bc^{-1}) = ac^{-1} \in H$ (by closure). $\blacksquare$

**Theorem (Lagrange)**: Let $G$ be a group of order $n$, and $H$ a subgroup of order $m$. Then $m \mid n$.

*Proof*: Let $\sim$ denote the equivalence relation defined in the previous lemma. For $a \in G$, let $[a]$ denote the equivalence class of $a$. We show that $\vert [a] \vert = \vert H \vert = m$, from which it follows that $m \mid n$ since $n = mt$, where $t$ is the number of distinct equivalence classes.

Define $\rho_a: H \to [a], x \mapsto xa$. Note that the stated codomain is valid since if $x \in H$, then $(xa)a^{-1} = x \in H$, so $xa \sim a$. We show that $\rho_a$ is bijective. It is injective since if $\rho_a(x) = \rho_a(y)$, then $xa = ya$ so $x = y$ by the cancellation property. It is surjective since $xa = b$ has a solution, namely $x = ba^{-1}$. So it is bijective. $\blacksquare$

**Corollary**: The order of an element in a finite group divides the order of the group.

*Proof*: The order of an element $a$ is the order of $\langle a \rangle$, which by Lagrange's theorem divides the order of the group. $\blacksquare$

**Corollary**: Let $G$ be a group of prime order $p$. Then $G \cong \mathbb Z_p$.

*Proof*: Let $g \in G$. Then $o(g) \mid p$, so $o(g) = 1$ or $o(g) = p$. If $o(g) = 1$, then $g = e$. Since the order of $G$ is prime, it must have at least one other non-identity element, whose order must be $p$. Thus $G$ has an element of order $p$, so $G$ is cyclic, so $G \cong \mathbb Z_p$. $\blacksquare$

## Cosets and Normal Groups

**Definition**: Let $G$ be a group and $H$ a subgroup of $G$. For $a \in G$, define
1. The **left coset** of $H$ determined by $a$ is $aH = \lbrace ax \mid x \in H \rbrace$
2. The **right coset** of $H$ determined by $a$ is $Ha = \lbrace xa \mid x \in H \rbrace$

**Proposition**: Let $H$ be a subgroup of $G$ and $a \in G$. Then,
1. $[a]_{\sim_L} = aH$
2. $[a]_{\sim_R} = Ha$

where $a \sim_L b$ if and only if $a^{-1}b \in H$ and $a \sim_R b$ if and only if $ab^{-1} \in H$.

*Proof*: (1) $(\subseteq)$ Let $b \in [a]_{\sim_L}$. Then $a^{-1}b \in H$, so $b = aa^{-1}b \in aH$.

$(\supseteq)$ Let $b \in aH$. Then $b = ax$ for some $x \in H$, so $a^{-1}b = x \in H$, so $a \sim_L b$. $\blacksquare$

*Proof*: (2) $(\subseteq)$ Let $b \in [a]_{\sim_R}$. Then $ab^{-1} \in H$, so $ba^{-1} \in H$, and $b = ba^{-1}a \in Ha$.

$(\supseteq)$ Let $b \in Ha$. Then $b = xa$ for some $x \in H$, so $ba^{-1} = x \in H$, so $ab^{-1} \in H$, so $b \sim_R a$. $\blacksquare$

**Lemma**: Let $H$ be a subgroup $G$ and $a, b \in G$. Then TFAE:
1. $aH = bH$
2. $aH \subseteq bH$
3. $a \in bH$
4. $a^{-1}b \in H$

*Proof*: $(1 \implies 2)$ is clear.

$(2 \implies 3)$ Suppose $aH \subseteq bH$. Then $a = ae \in aH \subseteq bH$.

$(3 \implies 4)$ Suppose $a \in bH = [b]_{\sim_L}$. Then $b \sim_L a$, so $a \sim_L b$, so $a^{-1}b \in H$.

$(4 \implies 1)$ Suppose $a^{-1}b \in H$. Then $a \sim_L b$, so $aH = [a] = [b] = bH$. $\blacksquare$

**Lemma**: Let $H$ be a subgroup of $G$ and $a, b \in G$. Then TFAE.

1. $Ha = Hb$
2. $Ha \subseteq Hb$
3. $a \in Hb$
4. $ab^{-1} \in H$.

*Proof*: TODO.

**Example**: For $G = \mathbb Z$ and $H = 2\mathbb Z$, we have distinct left cosets $0H = \lbrace 0 + 2n \mid n \in \mathbb Z \rbrace = 2\mathbb Z$ and $1H = \lbrace 1 + 2n \mid n \in \mathbb Z \rbrace$.

**Example**: For $G \in \mathbb Z$ and $H = 3\mathbb Z$, we have distinct left cosets $0H, 1H, 2H$.

**Example**: For $G = \mathbb Z_4$ and $H = \lbrace 0, 2 \rbrace$, we have distinct left cosets $0H, 1H$.

**Example**: For $G = \mathbb Z_4$ and $H = \lbrace 0 \rbrace$, we have distinct left cosets $0H, 1H, 2H, 3H$.

**Example**: For $G = \mathbb Z_4$ and $H = \mathbb Z_4$, all left cosets are $\mathbb Z_4$.

**Remark**: If $G$ is abelian and $H$ is any subgroup, then the left and right cosets are equal, since $aH = \lbrace ax \mid x \in H \rbrace = \lbrace xa \mid x \in H \rbrace = Ha$.

**Example**: In $S_3$, we have subgroup $H = \lbrace \tau_0, \sigma_1 \rbrace$ (recall that $\tau_0 = \operatorname{id}$, $\tau_1 = (1, 2, 3)$ and $\sigma_1 = (2, 3)$).

$$
\begin{align*}
\tau_1\tau_0 = (1,2,3)(1)(2)(3) = (1,2,3) = \tau_1 \\
\tau_1\sigma_1 = (1,2,3)(2,3) = (2,1)(3) \\
\\
\tau_0\tau_1 = (1)(2)(3)(1,2,3) = (1,2,3) = \tau_1 \\
\sigma_1\tau_1 = (2,3)(1,2,3) = (1,3)(2)
\end{align*}
$$

so $\tau_1H = \lbrace (1, 2, 3), (2, 1)(3) \rbrace \neq H\tau_1 = \lbrace (1, 2, 3), (1,3)(2) \rbrace$

**Definition**: A subgroup $H$ of $G$ is **normal** if for every $a \in G$, $aH = Ha$.

**Remark**: This doesn't necessarily mean that for $a \in G$ and $x \in H$, $ax = xa$, instead, that for $a \in G$ and $x \in H$, there is a $y \in H$ such that $ax = ya$.

**Example**: If $G$ is abelian, then all subgroups are normal.

**Example**: For an arbitrary group $G$, we have that H = $\lbrace e \rbrace$ is normal, since $aH = \lbrace a \rbrace = Ha$ for all $a \in G$.

**Example**: For an arbitrary group $G$, we have that $G$ is normal, since $aG = G = Ga$.

**Definition**: Let $H$ be a subgroup of a group $G$. The **index** of $H$ in $G$, denoted $(G: H)$, is the number of left cosets of $H$ in $G$.

**Example**: $(\mathbb Z : 2\mathbb Z) = 2$. $(G : G) = 1$. $(\mathbb Z : n\mathbb Z) = n$. $(G : \lbrace e \rbrace) = \vert G \vert$.

**Proposition**: Let $H$ be a subgroup of a group $G$. Let $\mathcal L(G, H) = \lbrace aH \mid a \in G \rbrace$ and $\mathcal R(G, H) = \lbrace Ha \mid a \in G \rbrace$. Then the function $f: \mathcal L(G, H) \to \mathcal R(G, H)$ given by $f(aH) = Ha^{-1}$ is a bijection.

**Remark**: This shows that the number of left and right cosets are equal.

**Remark**: For $G$ finite, this follows from Lagrange's theorem.

*Proof*: First we show that $f$ is well defiend. Suppose $aH = bH$.  Then $a \in bH$, so $a = bx$ for some $x \in H$. Then $Ha^{-1} = H(bx)^{-1} = Hx^{-1}b^{-1} = Hb^{-1}$.

Next we show that $f$ is bijective. Define the inverse $g: \mathcal R(G, H) \to \mathcal L(G, H)$ as $g(Ha) = a^{-1}H$. This is well-defined since if $Ha = Hb$, then $a = xb$ for some $x \in H$, so $a^{-1}H = b^{-1}x^{-1}H = b^{-1}H$. And it is an inverse since $(g \circ f)(aH) = g(Ha^{-1}) = aH$. $\blacksquare$

**Lemma**: A subgroup $H$ of a group $G$ is normal if and only if $aHa^{-1} \subseteq H$ for all $a \in G$.

*Proof*: $(\rightarrow)$ Suppose that $H$ is normal and fix $a \in G$ and $x \in H$. We show that $axa^{-1} \in H$. Since $H$ is normal, there is a $y \in H$ such that $ax = ya$. So $axa^{-1} = yaa^{-1} = y \in H$.

$(\leftarrow)$ Suppose that $aHa^{-1} \subseteq H$ for all $a \in G$. We show that $aH = Ha$. $(\subseteq)$ Let $b \in aH$. Then $b = ax$ for some $x \in H$. By assumption, $axa^{-1} \in H$, so $b = ax = axa^{-1}a$ means $b \in Ha$. $(\supseteq)$ Analagous. $\blacksquare$

**Corollary**: Let $f: G \to G'$ be a group homomorphism. Then $\operatorname{Ker}(f)$ is a normal subgroup of $G$.

*Proof*: By the lemma, it suffices to show that for $a \in G$ and $x \in \operatorname{Ker}(f)$, we have that $axa^{-1} \in \operatorname{Ker}(f)$. We have $f(axa^{-1}) = f(a)f(x)f(a)^{-1} = f(a)f(a)^{-1} = e$, so $axa^{-1} \in \operatorname{Ker}(f)$. $\blacksquare$

**Example**: If $H$ is normal in $G$ and $f: G \to G'$ is a homomorphism, then $f(H)$ need **not** be normal in $G'$.

*Counterexample*: Consider $f: \mathbb Z_2 \to S_3$ given by $f(0) = \sigma_0, f(1) = \sigma_1$. This is a homomorphism and $\mathbb Z_2$ is normal in $\mathbb Z_2$, but $f(\mathbb Z_2)$ is not normal in $S_3$.

**Notation**: Let $G$ be a group and $N \leq G$ a normal subgroup. Then $G/N = \lbrace aN \mid a \in G \rbrace$ is the set of left cosets. 

**Remark**: By normality, $G/N$ is also the set of right cosets.

**Example**: $\mathbb Z / (3 \mathbb Z) = \lbrace 3 \mathbb Z, 1 + 3\mathbb Z, 2 + 3 \mathbb Z \rbrace$

**Definition**: For $aN, bN \in G/N$, define $aN * bN = (a * b)H$.

**Proposition**: The above is a well-defined binary operation.

*Proof*: Let $aN = a'N$ and $bN = b'N$. Then $a \in a'N$, so $a = a'n_a$ for some $n_a \in N$. Similarily, $b = b'n_b$ for some $n_b \in N$. So $(ab)N = (a'n_ab'n_b)N = (a'n_ab')N = (a'b'n)N = (a'b')N$, where we use the fact that $n_ab' = b'n$ for some $n, n_a \in N$, by normality of $N$. $\blacksquare$

**Theorem**: For a group $G$ and a normal subgroup $N \leq G$, the set $G/N$ equipped with the binary operation given by $(aN)(bN) = (ab)N$ is a group with the identity element $N$ and inverse $a^{-1}N$ for an element $aN$.

*Proof*: (Associativity) Let $aN, bN, cN \in G/N$. Then $(aN * bN) * cN = (a * b)N * cN = (a * b * c)N = aN * (b * c)N = aN * (bN * cN)$.

(Identity) Let $aN \in G/N$. Then $N * aN = eN * aN = (e * a)N = aN = (a * e)N = aN * eN = aN * N$.

(Inverse) Let $aN \in G/N$. Then $aN * a^{-1}N = (a * a^{-1})N = eN = N$. $\blacksquare$

**Example**: $\mathbb Z/3\mathbb Z$ is a group. It is generated by $(1 + 3\mathbb Z)$. Thus it is isomorphic to $\mathbb Z_3$, that is, $\mathbb Z/3\mathbb Z \cong \mathbb Z_3$

**Remark**: In general, $\mathbb Z/n\mathbb Z \cong \mathbb Z_n$

**Example**:
* Let $G$ be arbitrary. Let $H = G$. Then $G/H = \lbrace G \rbrace$ is the trivial group with element $G$.
* Let $G$ be arbitrary. Let $H = \lbrace e \rbrace$. Then $G/H \cong G$ since there is a one-to-one mapping between every coset $\lbrace a \rbrace \in G/H$ and every element $a \in G$.
* Let $G = \mathbb Z_4$ and $H = \langle 2 \rangle$. Then $G/H = \lbrace\langle 2 \rangle, 1 + \langle 2 \rangle \rbrace$. So $G/H \cong \mathbb Z_2$

**Definition**: Define the quotient map $q: G \to G/N$ by $q(a) = aN$.

**Theorem**: For any group $G$ and a normal subgroup $N$, $q: G \to G/N$ given by $q(a) = aN$ is a surjective group homomorphism with kernel $N$.

*Proof*: Let $a, b \in G$. Then $q(ab) = (ab)N = (aN)(bN) = q(a)q(b)$. Also, for $aN$, $q(a) = aN$, so it is surjective. Finally, if $a \in N$, then $q(a) = aN = N$ so $a \in \operatorname{Ker}(q)$, and $a \in \operatorname{Ker}(q)$ means $aN = q(a) = N$, so $a \in N$. so $N$ is the kernel. $\blacksquare$

**Remark**: Thus, every subgroup is the kernel of some homomorphism, and the kernel of every isomorphism is a normal subgroup.

### First Isomorphism Theorem

**Theorem (First Isomorphism)**: Let $f: G \to G'$ be a surjective group homomorphism and let $K = \operatorname{Ker}(f)$. Then there is a unique group isomorphism $\overline f: G/K \to G'$ such that $\overline f \circ q = f$.

*Proof*: (Existence): Define $\overline f: G/K \to G'$ by $\overline f(aK) = f(a)$ for $a \in G$.First, $\overline f$ is well-defined since if $aK = bK$, then $a \in bK$ so 

$$
f(a) = f(bk) = f(b)f(k) = f(b)
$$

Next, it is a homomorphism, since for $aK, bK \in G/K$,

$$
\begin{align*}
\overline f((aK)(bK)) 
&= \overline f((ab)K) \\
&= f(ab) \\
&= f(a)f(b) \\
&= \overline f(aK)\overline f(bK)
\end{align*}
$$

It is surjective, since for $a' \in G'$, we have $a' = f(a)$ by surjectivity of $f$, so $\overline f(aK) = f(a) = b$. And it is injective since if $\overline f(aK) = \overline f(bK)$, then $f(a) = f(b)$, so $f(a)f(b)^{-1} = e = f(ab^{-1})$, so $ab^{-1} = e \implies a = b$.

Finally, $\overline f \circ q = f$, since $(\overline f \circ q)(a) = \overline f(q(a)) = \overline f(aK) = f(a)$.

(Uniqueness) If $\overline f$ and $\overline f'$ both satisfy the above, then for any $aK \in G/K$, since $\overline f \circ q = f = \overline f' \circ q$,

$$
\begin{align*}
\overline f(aK)
&= \overline f(q(a)) \\
&= \overline f'(q(a)) \\
&= \overline f'(aK)
\end{align*}
$$

$\blacksquare$

**Remark**: The uniqueness of the above theorem is a direct consequence of surjectivity. For a function $f: X \to Y$, then $f$ is surjective if and only if for all $Z$ and pairs of functions $g, h: Y \to Z$, if $gf = hf$ then $g = h$.

*Proof*: $(\rightarrow)$ Suppose $f$ is surjective. Let $Z$ be a set with $g, h: Y \to Z$ and $g \circ f = h \circ f$. Then for $y \in Y$, by surjectivity of $f$, there is an $x$ such that $g(y) = g(f(x)) = h(f(x)) = h(y)$. 

$(\leftarrow)$ Suppose $f$ is not surjective. Define $g, h: Y \to Z$ such that they are identical except for one element $y' \in Y$ such that there is no element $x \in X$ with $f(x) = y'. Then, $g \circ f = h \circ f$ since they are identical for all $y \in Y$ except $y'$, but $g(y) \neq h(y)$. $\blacksquare$

**Example**: Cosnider $f: \mathbb Z \to \mathbb Z_n$ given by $f(k) = k \bmod n$. Then $f$ is a surjective group homomorphism and $\operatorname{Ker}(f) = n\mathbb Z$. So by the First Isomorphism Theorem, $\mathbb Z/n\mathbb Z \cong \mathbb Z_n$.

**Example**: Let $G = \mathbb Z \times \mathbb Z$ and $H = \langle(1, 0)\rangle$. Then $G/H = \lbrace (0, k) + \langle(1, 0)\rangle \mid k \in \mathbb Z \rbrace$. To show that $G/H \cong \mathbb Z$, consider the surjective homomorphism $f: (x, y) \mapsto y$. It is a homomorphism since 

$$
\begin{align*}
f((x, y) + (x', y'))
&= f((x + x', y + y')) \\
&= y + y' \\
&= f((x, y)) + f((x', y'))
\end{align*}
$$

and it is surjective since for any $y$, $f((x, y)) = y$. Finally, $\langle (1, 0) \rangle$ maps to $0$, the kernel of $H$. So by the First Homomorphism Theorem, $G \cong \mathbb Z$.

**Example**: If $G$ is abelian, then $G/H$ is abelian for any subgroup $H \leq G$.

*Proof*: Let $a, b \in G$ such that $aH, bH \in G/H$ are distinct. Then $(aH)(bH) = (ab)H = (ba)H = (bH)(aH)$, using the fact that $ab = ba$ since $G$ is abelian. $\blacksquare$

**Theorem**: For positive integers $m, n$, $\mathbb Z_{mn} \cong \mathbb Z_m \times \mathbb Z_n$ if and only if $\gcd(m, n) = 1$.

*Proof*: $(\leftarrow)$ Suppose $\gcd(m, n) = 1$. Define $\phi: \mathbb Z_{mn} \to \mathbb Z_m \times \mathbb Z_n$ as $\phi(x) = (x \bmod m, x \bmod n)$. It is easy to show that $\phi$ is a homomorphism. It is injective since $\gcd(m, n) = 1$, so $\phi(x) = (0, 0)$ only when $x = 0$. That is, $\operatorname{Ker}(\phi) = 0$. Since $\vert \mathbb Z_{mn} \vert = \mathbb Z_m \times \mathbb Z_n$, $\phi$ must also be surjective. So by the First Homomorphism Theorem, $\mathbb Z_{mn}/\mathbb \lbrace 0 \rbrace = \mathbb Z_{mn} \cong \mathbb Z_m \times \mathbb Z_n$.

$(\rightarrow)$ Suppose $\gcd(m, n) \gt 1$.  We show that $\mathbb Z_m \times \mathbb Z_n$ is not cyclic, and thus it cannot be congruent to $\mathbb Z_{mn}$. The least-common multiple of $m$, $n$ is $L = mn/\gcd(m, n) \lt mn$. The order of any element $(a, b) \in \mathbb Z_m \times \mathbb Z_n$ is $L$, thus no element in $\mathbb Z_m \times \mathbb Z_n$ has order $mn$, so the group cannot be cyclic. $\blacksquare$

**Definition**: Let $G$ be a group. Then $G$ is **generated** by a subset $S \subseteq G$, denoted $G = \langle S \rangle$, if $G = \lbrace a_1^{\epsilon_1} * \dots * a_n^{\epsilon_n}\mid a_1, \dots, a_n \in S, \epsilon_1, \dots, \epsilon_n = \pm 1, n \geq 0 \rbrace$.

**Remark**: A cyclic group is a group generated by a set containing a single element, $S = \lbrace a \rbrace$.

**Example**: $\mathbb Z \times \mathbb Z$ is generated by $\lbrace (1, 0), (0, 1) \rbrace$ as $(k, l) = (1, 0) + \dots + (1, 0) + (0, 1) + \dots + (0, 1)$ where there are $k$ copies of the first pair and $l$ copies of the second.

**Example**: $\mathbb Z \times \mathbb Z$ is generated by $\lbrace (1, 0), (1, 1) \rbrace$ with $(k, l)$ = $(k - l)(1, 0) + l(1, 1)$

**Remark**: Every group has a generating set: itself.

**Definition**: A group $G$ is **finitely generated** if there is a finite set $S$ such that $G = \langle S \rangle$.

**Example**: Every cyclic group is finitely generated.

**Example**: $\mathbb Z \times \mathbb Z$ is finitely generated but not finite.

**Theorem (Classification Theorem of Finitely Generated Abelian Groups)**: For a finitely generated abelian group $G$, there are (not necessarily distinct) primes $p_1, \dots, p_n$ amd positive integers $a_1, \dots, a_n, b$ such that

$$
G \cong \mathbb Z_{p_1^{a^1}} \times \dots \times Z_{p_n^{a_n}} \times \mathbb Z^b
$$

*Proof*: Outside the scope of this course (see a course in Group Theory or Rings and Modules).

**Example**: All abelian groups of order $n$:
* $n = 2$: $\mathbb Z_2$
* $n = 3$: $\mathbb Z_3$
* $n = 4$: $\mathbb Z_2 \times \mathbb Z_2$, $\mathbb Z_4$
* $n = 5$: $\mathbb Z_5$
* $n = 6$: $\mathbb Z_6 \cong \mathbb Z_2 \times \mathbb Z_3$
* $n = 7$: $\mathbb Z_7$
* $n = 8$: $\mathbb Z_2 \times \mathbb Z_2 \times \mathbb Z_2$, $\mathbb Z_4 \times \mathbb Z_2$, $\mathbb Z_8$
* $n = 9$: $\mathbb Z_3 \times \mathbb Z_3$, $\mathbb Z_9$
* $n = 10$: $\mathbb Z_2 \times \mathbb Z_5 \cong \mathbb Z_{10}$

**Remark**: By the above theorem, $\mathbb Z_{11}^\times \cong \mathbb Z_{10}$ trivially, since $\mathbb Z_{11}^\times$ has 10 elements and is abelian.

**Example**: Let $G = \mathbb Z_4 \times \mathbb Z_8$, $H = \langle (0, 1) \rangle$. The order of $H$ is 8 as $H = \lbrace (0, k) \mid k \in \mathbb Z_8 \rbrace$. So the order of $G/H$ is 4. There are two options, $\mathbb Z_4$ or $\mathbb Z_2 \times \mathbb Z_2$. We have $(1, 0) + H$, which we claim is of order 4. $((1, 0) + H) + ((1, 0) + H) = (2, 0) + H \neq H$. The order of $(1, 0) + H$ could be 2 or 4. We showed it is not 2, so it must be 4, so $G/H$ has an element of order 4, so $G/H \cong \mathbb Z_4$

**Example**: $G = \mathbb Z_4 \times \mathbb Z_8$, $H = \langle(2, 4)\rangle = \lbrace (0, 0), (2, 4) \rbrace$. The order of $G/H$ is $32/2 = 16$. The options are $\mathbb Z_{16}, \mathbb Z_8 \times \mathbb Z_2, \mathbb Z_4 \times \mathbb Z_4$, etc. The order of element $(0, 1) + H$ is 8 (find elements whose order is probably large). So for any $(k, l) + H$, we have $8((k, l) + H) = (8k \bmod 4, 8l \bmod 8) + H = (0, 0) + H = H$. So the order of every element is at most 8. So $G/H$ has an element of order 8. Thus $G/H \cong \mathbb Z_8 \times \mathbb Z_2$.