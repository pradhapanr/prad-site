---
layout: default
order: 1
toc: true
---

# Introduction to Groups

## Definitions and Examples

**Definition**: A **semigroup** is an ordered pair $(S, \star)$ where $S \neq 0$ and $\star$ is an associative binary operation on $S$. 

**Example**:
* $(\mathbb Z, +), (\mathbb Z, \cdot), (\mathbb Q, +)$, etc. are commutative semigroups.
* $(\mathbb R^3, \times)$ is **not** a semigroup, where $\times$ is the cross product, since the cross product is not associative.
* $(\mathbb Z, -)$ is not a semigroup either, since $(1 - 1) - 1 \neq 1 - (1 - 1)$.

**Definition**: A **group** is a semigroup $(G, *)$ with the additional following properties:
1. There is an identity element $e \in G$, that is, $ae = a = ea$ for all $a \in G$. 
2. Every element $a \in G$ has an inverse $b \in G$, that is, $ab = e = ba$.

**Examples**:
* Infinite group: $(\mathbb Z, +)$
* Finite group: $(\mathbb Z_5, +)$

**Remark**: Note that $ab = e$ doesn't necessarily imply $ba = e$ since commutativity is not a group axiom, so the inverse axiom requires both $ab = ba = e$.

**Proposition**: The identity element of a group is unique.

*Proof*: Let $e, e'$ be identities, then $e = ee' = e'$. $\blacksquare$

**Proposition**: The inverse element of an element $a$ in a group is unique.

*Proof*: Use associativity. Let $a$ have inverses $b, c$. Then $c(ab) = c = (ca)b = b$. $\blacksquare$

**Notation**: Since the inverse of $a$ is uniquely determined by $a$, we denote its inverse as $a^{-1}$.

**Proposition**: The inverse of the inverse of an element in a group is the element itself.

*Proof*: If $aa^{-1} = e = a^{-1}a$ for an element $a$ and identity $e$, then $a$ is also $a^{-1}$'s inverse. $\blacksquare$

**Proposition**: Let $a, b \in G$. Then $(ab)^{-1} = b^{-1}a^{-1}$.

*Proof*: $(ab)(b^{-1}a^{-1}) = e$, by associativity. $\blacksquare$

**Proposition (Generalized Associative Law)**: Let $a_1, \dots, a_n \in G$. Then $a_1\dots a_n$ is independent of how the expression is bracketed.

*Proof*: By induction on $n \geq 1$ to show that all bracket patterns are equal to the left-justified pattern $( \dots ((a_1 * a_2) * a_3) \dots * a_n)$. The base cases $n = 1, 2, 3$ are clear. For $n \geq 4$, consider the outer-most brackets, which partitions the expression $a_1\dots a_n$ as $(x * y)$, where $x = a_1\dots a_k$ and $y = a_{k + 1}\dots a_{n - 1}$ for some $k \lt n$. Then $x$ and $y$ are left-justified by the inductive hypothesis, so $(x * y)$ can be made left-justified, so $(x * y) * a_n$ is left-justified. $\blacksquare$

**Proposition (Cancellation Laws)** Let $a, u, v \in G$ a group. Then
1. $au = av \implies u = v$
2. $ua = va \implies u = v$

*Proof*: Left-mutiply (or right-multiply) by the inverse of $a$. $\blacksquare$

**Corollary**: Let $a, b \in G$ a group. If $ab = 1$, then $ba = 1$.

*Proof*: $ab = 1 = aa^{-1} \implies b = a^{-1}$, by Cancellation. $\blacksquare$

**Example**: In a semigroup $S$, it is possible that $ab = 1$ but $ba \neq 1$. Let $X = \lbrace (a_1, a_2, \dots,) \mid a_i \in \mathbb Z \rbrace$ and $S$ be the set of all functions on $X$. Define

$$
\rho(a_1, a_2, \dots) = (0, a_1, a_2, \dots)

\\
\lambda(a_1, a_2, \dots) = (a_2, a_3, \dots)
$$

then $\lambda \circ \rho = \operatorname{id}_X$ but not $\rho \circ \lambda$.

### Abelian Groups

**Definition**: An **Abelian** group is a commutative group.

**Notation**: $S^\times = \lbrace a \in S \mid a^{-1} \in S\rbrace$

**Example**:
* $\mathbb Z, \mathbb Q, \mathbb R, \mathbb C$ are all Abelian groups under $+$ with $e = 0$ and $-a$ the inverse of $a$.
* $\mathbb R^{\times} = \lbrace a \in \mathbb R \mid 1/a \in \mathbb R\rbrace = \mathbb R - \lbrace 0 \rbrace$ is an Abelian group.
* $\mathbb Q^\times = \mathbb Q - \lbrace 0 \rbrace$ and $\mathbb C^\times = \mathbb C - \lbrace 0 \rbrace$ are also Abelian groups.
* $\mathbb Z - \lbrace 0 \rbrace$ is a commutative subgroup but not a group, since only $1$ and $-1$ have inverses.
  * Note that $\mathbb Z - \lbrace 0 \rbrace \neq \mathbb Z^\times$.
* If $V$ is a vector space, then it is an Abelian group under $+$, where $e = \vec 0$.
* The symmetries of a square $(D_8)$ are not Abelian.
* The group of invertible square matrices under multiplication is not Abelian.

### Integers modulo $n$

**Notation**: Let $n \in \mathbb Z^+$. Then $\bar a = \lbrace a + nk \mid k \in \mathbb Z \rbrace = a + n\mathbb Z$. The integers moodulo $n$ is denoted

$$
\mathbb Z/n\mathbb Z = \lbrace \overline a \mid a \in \mathbb Z \rbrace = \lbrace \overline 0, \overline 1, \dots, \overline{n - 1} \rbrace
$$

Notice that $\overline a = \overline b \iff n \mid (a - b) \iff a \equiv b \pmod n$. We define binary operations on $\mathbb Z/n\mathbb Z$ by

$$
\overline a + \overline b := \overline{a + b} \\
\overline a \cdot \overline b := \overline{ab}
$$

**Theorem**: The operations $+$ and $\cdot$ are well-defined on $\mathbb Z/n\mathbb Z$, that is, they are independent of the choices of representatives of the conjugacy classes.

*Proof*: Take $\overline a_1 = \overline a_2$ and $\overline b_1 = \overline b_2$ and write $a_1 = a_2 + kn$ and $b_1 = b_2 + ln$ for $k, l \in \mathbb Z$ to show that $a_1 + b_1 = a_2 + b_2 + (k + l)n$, so $\overline{a_1 + b_1} = \overline{a_2 + b_2}$. Similarily for multiplication. $\blacksquare$

**Example**: In $(\mathbb Z/n\mathbb Z, \cdot), \overline 0$ has no multiplicative inverse unless $n = 1$. So $(\mathbb Z/n\mathbb Z)$ is **not** a group, unless $n = 1$, so $\overline 0 = \overline 1$.

---

**Notation**: $(a, n) := \gcd(a, n)$

**Proposition**: $a \in (\mathbb Z/n\mathbb Z)^\times$ if and only if $(a, n) = 1$.

**Example**: $(\mathbb Z/6\mathbb Z)^\times = \lbrace 1, 5 \rbrace$.

*Proof*: $(\rightarrow)$ If $a \in (\mathbb Z/n\mathbb Z)^\times$ then so is $a^{-1}$, and $aa^{-1} = 1 \equiv aa^{-1} + nx = \overline 1$, so $(a, n) = 1$.    

$(\leftarrow)$ By Bezout's identity, $ax + ny = 1$, for some $x, y \in \mathbb Z$ so $\overline a \overline x = \overline{ax} = \overline 1$. So $\overline x = \overline a^{-1}$. $\blacksquare$

**Theorem**: $((\mathbb Z/n\mathbb Z)^\times, \cdot)$ is a finite Abelian group with cardinality

$$
\phi(n) := \vert (\mathbb Z/n\mathbb Z)^\times \vert
$$

where $\phi$ is the Euler-phi (or Euler-totient) function of $n$.

*Proof*: That it is a group follows by definition. $\blacksquare$

**Example**: 
* If $p$ is prime, then $(\mathbb Z/p\mathbb Z)^\times = (\mathbb Z/p\mathbb Z) - \lbrace 0 \rbrace$. So $\phi(p) = p - 1$.
* Also, $\phi(p^r) = p^r - p^{r - 1}$, because the elements in $(\mathbb Z/p^r\mathbb Z)$ not in $(\mathbb Z/p^r\mathbb Z)^\times$ are the $r - 1$ powers of $p$.

**Theorem**: If $n = p_1^{r_1}\dots p_t^{r_t}$ is a natural with a prime decomposition, then

$$
\phi(n) = \phi(p_1^{r_1})\dots\phi(p_t^{r_t})
$$

*Proof*: TODO.

### Direct Products

**Definition**: Let $(G, \star)$ and $(H, \circ)$ be groups. Then

$$
G \times H = \lbrace (g, h) \mid g \in G, h \in H \rbrace
$$

equipped with the operation

$$
(g_1, h_1)(g_2, h_2) = (g_1 \star g_2, h_1 \circ h_2)
$$

is a group and is called the **direct product** of $G$ and $H$.

**Example**: $\mathbb Z \times \mathbb Z$ is a group with addition defined component-wise.

### Order

**Definition**: The **order** of $G$ in $\vert G \vert$ is the cardinality of $G$.

**Definition**: For an $x \in G$, the **order** of $x$ is the smallest $n \in \mathbb Z^+$ such that $x^n = 1$. We denote $\vert x \vert = n$, in this case. If $n$ does not exist, then $\vert x \vert = \infty$.

**Example**: The order of $\overline 5$ in $(\mathbb Z/6\mathbb Z)^\times$ is 2 since $\overline 5^2 = \overline {25} = \overline 1$.

**Example**: The order of $\overline 5$ in $(\mathbb Z/6\mathbb Z)$ is 6 since $6 \cdot \overline 5 = \overline 30 = \overline 0$.

**Proposition**: The order of $\overline a$ in $\mathbb Z/n\mathbb Z$ is $\frac{n}{(a, n)}$.

*Proof*: We have $n \mid \frac{n}{(a, n)}a$. Suppose there were an $m \leq \frac{n}{(a, n)}$ with $n \mid ma$. Then $\frac{n}{(a, n)} \mid m \frac{a}{(a, n)}$, but $(\frac{n}{(a, n)}, \frac{a}{(a, n)}) = 1$, so $\frac{n}{(a, n)} \mid m$ and $\frac{n}{(a, n)} \leq m$. So $m = \frac{n}{(a, n)}$. $\blacksquare$

**Example**: The order of $2$ in $\mathbb Z$ is $\infty$ since $2m \neq 0$ for all $m \in \mathbb Z^+$.

**Example**: The only $x \in \mathbb Z$ with $\vert x \vert \lt \infty$ is $x = 0$, with $\vert 0 \vert = 1$.

**Note**: The order of the identity in any group is 1. Conversely, if $\vert x \vert = 1$ for $x \in G$, then $x = 1$ since $x = x^1 = 1$.

**Example**: The only elements of finite order in $\mathbb R^\times$ are $1$ and $-1$.

**Definition**: Let $G = \lbrace g_1, \dots, g_n \rbrace$ be a finite group. Then the matrix

$$
\begin{matrix}
g_1g_1 & \dots & g_1g_n \\
\vdots & \ddots & \vdots \\
g_n g_1 & \dots & g_n g_n 
\end{matrix}
$$

is the **group table** of $G$.

## Dihedral Groups

Consider a square with vertices labelled clockwise $1, 2, 3, 4$. Symmetries of the square can be represented as permutations of the vertices. For example, a rotation by $90^\circ$ clockwise can be represented as $r = \begin{pmatrix}1 & 2 & 3 & 4 \\ 2 & 3 & 4 & 1\end{pmatrix}$. Similarily, a reflection along the diagonal can be represented as $s = \begin{pmatrix}1 & 2 & 3 & 4 \\ 1 & 4 & 3 & 2 \end{pmatrix}$.

**Notation**: Composition of functions is always right-to-left.

**Example**:

$$
\begin{align*}
sr = s \circ r &= \begin{pmatrix}1 & 2 & 3 & 4 \\ 1 & 4 & 3 & 2\end{pmatrix}
\begin{pmatrix}1 & 2 & 3 & 4 \\ 2 & 3 & 4 & 1\end{pmatrix} \\
&=\begin{pmatrix}1 & 2 & 3 & 4 \\ 4 & 3 & 2 & 1 \end{pmatrix}
\end{align*}
$$

The set of all symmetries of the square is $D_8 = \lbrace 1, r, r^2, r^3, s, sr, sr^2, sr^3 \rbrace$. $D_8$ is a group under composition, with the identity element being the identity function.

Note that since $rs = sr^{-1}$, any product of elements in $D_8$ can be written in the form $s^ir^j$ where $i = 0, 1$ and $j = 0, 1, 2, 3$. So the group is closed under composition.

Every element in $D_8$ has an inverse in $D_8$ since $(s^i r^j)^{-1} = (r^{-1})^j (s^{-1})^i$.

In fact, the relations $r^4 = 1, s^2 = 1, rs = sr^{-1}$ completely describe $D_8$!. So $D_8$ is generated by $r$ and $s$ subjected to these relations:

$$
D_8 = \langle r, s \mid r^4 = 1, s^2 = 1, rs = sr^{-1} \rangle
$$

Similarily, if $n \geq 3$, the group of symemtries of a regular $n$-gon is given by 

$$
\begin{align*}
D_{2n} &= \lbrace 1, r, r^2 \dots, r^{n - 1}, s, sr, \dots, sr^{n - 1} \rbrace \\
&= \langle r, s \mid r^n = s^2 = 1, rs = sr^{-1} \rangle
\end{align*}
$$


## Symmetric Groups

Let $\Omega \neq \emptyset$ be any set, and $S_\Omega$ be the set of all permutations (biijections) $\sigma: \Omega \to \Omega$. Then $S_\Omega$ is a group under composition called the **symetric group on $\Omega$**.

When $\Omega = \lbrace 1, 2, \dots, n \rbrace$, $S_\Omega$ is called the **symmetric group of degree $n$** and denoted by $S_n$. Note $\vert S_n \vert = n!$.

**Notation**: Permutations can be represented by their cycles, for example

$$
\sigma = \begin{pmatrix}
1 & 2 & 3 & 4 \\
3 & 2 & 1 & 4
\end{pmatrix}
= 
(1\enspace 3)(2)(4)
$$

since $1$ and $3$ form a 2-cycle, and $2$ and $4$ form 1-cycles. This is th **e**cyclic decomposition of $\sigma \in S_4$. Notice that the cycles in $\sigma$ are **disjoint**. Also note that $(5\enspace 11 \enspace 7) = (11 \enspace 7 \enspace 5)$, that is, the cycle is indepdenent of the starting point.

**Remark**: If $\tau$ is a $t$-cycle, then $\vert \tau \vert = t$.

**Proposition**: The order of a permutation $\sigma \in S_n$ is the least-common multiple of the length of each cycle of $\sigma$.

*Proof*: Let $\sigma = \tau_1 \tau_2 \dots \tau_n$ be the cyclic decompostion of $\sigma$. Since the cycles are disjoint, they commute, so $\sigma^m = \tau_1^{m} \tau_2^{m} \dots \tau_n^{m}$. If $\sigma^m = 1$, then $\tau^{m} = \dots \tau^{m} = 1$, which is possible only when $\vert \tau \vert \mid m$. So $m$ must be the least-common multiple of the length of all cycles. $\blacksquare$

**Remark**: The inverse of a cycle $(a \enspace b \enspace c)^{-1} = (c \enspace b \enspace a)$.

**Example**:
* $S_1 = \lbrace (1) \rbrace = \lbrace 1 \rbrace$ ($1$ is the identity function)
* $S_2 = \lbrace 1, (1 \enspace 2) \rbrace$
* $S_3 = \lbrace 1, (1 \enspace 2 \enspace 3) , (1 \enspace 3 \enspace 2), (1 \enspace 2), (2 \enspace 3), (1 \enspace 3) \rbrace$

## Matrix Groups

**Definition**: A **field** is a set $F$ with 2 operations $+$ and $\cdot$ such that
1. $(F, +)$ is an Abelian group
2. $(F^\times, \cdot)$, where $F^\times = F - \lbrace 0 \rbrace$, is an Abelian group
3. Multiplication distributes over addition, that is, $\forall a, b, c \in F$, $a(b + c) = ab + ac$.

**Example**: $\mathbb Q, \mathbb R, \mathbb C$ are fields, but $\mathbb Z$ is not a field since $2^{-1} \not\in \mathbb Z$.

**Example**: Let $n \geq 2$. Then $\mathbb Z_n := \mathbb Z/n\mathbb Z$ is a field if and only if $n$ is prime.

*Proof*: $(\mathbb Z_n, +)$ is an Abelian group. Distributivity follows since

$$
\overline a \cdot (\overline b + \overline c) = \overline a \cdot (\overline{b + c}) = \overline{a(b + c)} = \overline {ab + ac} = \overline a \overline c + \overline b \overline c
$$

We've shown that $\overline a \in \mathbb Z_n$ has a multiplicative inverse if and only if $(a, n) = 1$. Thus $(\mathbb Z_n - \lbrace 0 \rbrace, \cdot)$ is a multiplicative group if and only if $n$ is prime. $\blacksquare$

**Definition**: If $p$ is a prime, then $\mathbb F_p := \mathbb Z/p\mathbb Z$ is a field.

**Note**: $\forall q = p^n$, there is a finite field $\mathbb F_{p^n}$ with $p^n$ many elements.

### Linear Groups

**Definition**: $GL_n(F) = \lbrace A \in M_{n \times n}(F) \mid \det A \neq 0 \rbrace$ is called the **general linear group** of degree $n$ over $F$.

**Remark**: $GL_n(F)$ forms a group over multiplicatoin since $\det A \neq 0$ if and only if $A$ is invertible.

**Definition**: $SL_n(F) = \lbrace A \in M_{n \times n}(F) \mid \det A = 1 \rbrace$ is called the **special linear group** of degree $n$ over $F$.

**Remark**: $\det A = 1 \implies \det A^{-1} = 1$.

## The Quaternion Group

**Definition**: The **quaternion group** $Q_8$ is defined by

$$
Q_8 = \lbrace \pm 1, \pm i, \pm j, \pm k \rbrace
$$

with products

* $i^2 = j^2 = k^2 = -1$
* $ij = k, jk = i, ki = j$
* $ji = -k, kj = -i, ik = -j$
* $1a = a = a1$
* $(-1)a = -a = a(-1)$
* $(-1)^2 = 1$

## Homomorphisms and Isomorphisms

**Definition**: Suppose $G, H$ are groups. Then a **homomorphism** $\phi: G \to H$ is a map such that

$$
\phi(g_1 g_2) = \phi(g_1)\phi(g_2)
$$

**Examples**:
* Homomorphism on an infinite group:
  * $\phi: \mathbb Z \to \lbrace \pm 1 \rbrace$, where $\phi(x) = 1$ if $x$ is even and $-1$ otherwise.
* Homomorphism on a finite group:
  * $\phi: \mathbb Z_n \to \lbrace 0 \rbrace$: everything maps to $0$

**Definition**: An **isomorphism** $\phi: G \to H$ is an **isomorphism** if $\phi$ is a bijective homomorphism.

**Definition**: If there is an isomorphism $\phi: G \to H$, then $G$ and $H$ are called **isomorphic** and we write $G \cong H$.

**Examples**:
* Isomorphism on an infinite group
  * $\phi: (\mathbb R, +)  \to (\mathbb R^+, \times), \phi(x) = e^x$ is a homomorphism

Note that in some sense, homomorphisms preserve the structure of a group but (if it is not an isomophirms) loses some information in the mapping. On the other hand, isomorphisms preserve the entirety of the information of the structure of the group.

As such, isomorphisms preserve every property of the group: i.e. Abelianness, order, etc.

## Group Actions

**Definition**: A **group action** of a group $G$ on a set $A$ is a map from $G \times A$ to $A$ (written $g \cdot a$ for all $g \in G$, $a \in A$) satisfying the following properties:
* $g_1 \cdot (g_2 \cdot a) = (g_1g_2) \cdot a$ for all $a \in A, g \in G$
* $1 \cdot a = a$ for all $a \in A$

We may say that **$G$ is a group acting on $A$**, and may write $ga$ in place of $g \cdot a$.

**Examples**:
* Consider $D_8$ acting on the vertices of the square (encoded as the set of permutations of the vertices 1,2,3,4 labelled in clockwise order). For example, $r \cdot (1)(2)(3)(4) = (1234)$: a clockwise rotation of 90 degrees.
* For a vector space $V$ with scalars in a field $F$, the vector space axioms declaring $cv \in V$ for $c \in F, v \in V$, $1v = v$, and $a(bv) = (ab)v, v \in V, a, b \in F$ describe $F$ as a group acting on the set of vectors $V$. 