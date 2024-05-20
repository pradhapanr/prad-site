---
toc: true
order: 4
layout: default
---

# Group Actions

## Definition and Examples

**Definition**: A **group action** of a group $G$ on a set $A$ is a map from $G \times A$ to $A$ (written $g \cdot a$ for all $g \in G$, $a \in A$) satisfying the following properties:
* $g_1 \cdot (g_2 \cdot a) = (g_1g_2) \cdot a$ for all $a \in A, g \in G$
* $1 \cdot a = a$ for all $a \in A$

We may say that **$G$ is a group acting on $A$**, and may write $ga$ in place of $g \cdot a$.

**Examples**:
* Consider $D_8$ acting on the vertices of the square (encoded as the set of permutations of the vertices 1,2,3,4 labelled in clockwise order). For example, $r \cdot (1)(2)(3)(4) = (1234)$: a clockwise rotation of 90 degrees.
* For a vector space $V$ with scalars in a field $F$, the vector space axioms declaring $cv \in V$ for $c \in F, v \in V$, $1v = v$, and $a(bv) = (ab)v, v \in V, a, b \in F$ describe $F$ as a group acting on the set of vectors $V$. 

**Remark**: Let $G$ be a group action on a non-empty set $A$. Then for each $g \in G$, the map $\sigma_g: A \to A, a \mapsto ga$ is a permutation on $A$.

*Proof*: $\sigma_g$ is surjective since if $a \in A$, then $\sigma_g(g^{-1}a) = a$. It is injective since if $\sigma_g(a) = \sigma_g(a')$ then $ga = ga'$ so $a = a'$ by cancellation. $\blacksquare$

**Definition**: Let $\varphi: G \to S_A$ be defined by $\varphi(g) = \sigma_g$. Then $\varphi$ is called the **permutation representation** associated to the given action.

**Proposition A**: The permutation representation associated with a given action is a homomorphism.

*Proof*: Let $g, g' \in G$ and $a \in A$, where $G$ acts on $A$ by $ga$. Then 

$$
\varphi(gg')(a) = \sigma_{gg'}(a) = gg'a = \sigma_g(\sigma_{g'}(a)) = \varphi(g)\varphi(g')(a).
$$

$\blacksquare$

**Definition**: Let $G$ act on $A$ by $\phi$.
* The **kernel** is $\lbrace g \in G \mid \phi(a) = a, \forall a \in A \rbrace$.
* The **stabilizer of $a$** in $G$ is $\lbrace g \in G \mid \phi(a) = a \rbrace$
* The action is **faithful** if its kernel is the identity.

**Remark**: The kernel of an action is the intersection of the stabilizers over every element of $G$.

**Remark**: The kernel of an action is the same as the kernel of the associated permutation representation.

**Remark**: Two group elements induce the same permutation on $A$ if and only if they are in the same coset of the kernel (that is, the same fiber of the permutation representation).

**Proposition 1**: For any group $G$ and any non-empty set $A$, there is a bijection between the actions of $G$ on $A$ and the homomorphisms of $G$ into $S_A$.

*Proof*: Let $\varphi$ be a homomorphism from $G$ into $S_A$. Then define $g \cdot a$ as $g \cdot a = \varphi(g)(a)$ is a group action of $G$ on $A$ since $(gg')a = \varphi(gg')a = \varphi(g)\varphi(g')a = g(g'a)$.

Suppose $\varphi(g)(a) = \varphi(g)(a')$ for all $g \in G$, $a, a' \in A$. Then $g\cdot a=\varphi(g)(a) = \varphi(g)(a') = g\cdot a'$, so the mapping is injective. It is surjective by construction. So it is bijective.
$\blacksquare$

**Definition**: If $G$ is a group, a **permutation representation** of $G$ is any homomorphism of $G$ into the symmetric group $S_A$ for some non-empty set $A$. We say a given action of $G$ on $A$ **affords** or **induces** the associated permutation representation of $G$.

**Proposition 2**: Let $G$ be a group acting on the non-empty set $A$. The relation on $A$ defined by

$$
a \sim b \iff \exists g \in G, a = g \cdot b
$$

is an equivalence relation. For each $a \in A$, the number of elements in the equivalence relation class containing $a$ is $[G : G_a]$.

*Proof*: Reflexivity holds since $a = 1 \cdot a$. Symmetry holds since if $a = g \cdot b$ for some $g \in G$, then $b = g^{-1} \cdot a$. Transitivity holds since if $a = g \cdot b$ and $b = g' \cdot c$, then $a = g \cdot (g' \cdot c) = (gg') \cdot c$.

To prove the second claim, let $a \in A$. Define a mapping from the elements in the class of $a$, $\mathcal C_a$, to the cosets of $G_a$ as $g\cdot a \mapsto gG_a$. It is surjective since given a coset $gG_a$, $g \cdot a \in \mathcal C_a$. It is injetive since if $gG_a = g'G_a$, then $g'^{-1}g \in G_a$ so $g \cdot a = g' \cdot a$. $\blacksquare$

**Definition**: Let $G$ be a group acting on the non-empty set $A$.
1. The equivalence class $\lbrace g \cdot a \mid g \in G \rbrace$ is called the **orbit** of $G$ containing $a$.
2. The action of $G$ on $A$ is called **transitive** if there is only one orbit.

### Cycle Decompositions

**Proposition B**: The cycle decomposition of an element $\sigma \in S_n$ is unique.

*Proof*: Let $G = \langle \sigma \rangle$. By Proposition 2, it acts on $A = \lbrace 1, \dots, n \rbrace$ and partitions it into orbits. Let $\mathcal O$ be one of such orbits and let $x \in \mathcal O$. By the proof of Proposition 2, there is a bijection between $\mathcal O$ and the set of cosets of $G_x$, namely, $\sigma^i G_x \mapsto \sigma^i x$. Since $G$ is cyclic, $G_x \trianglelefteq G$ so $G/G_x$ is cyclic of order $\vert G_x \vert = [G : G_x] = \vert \mathcal O \vert$. Thus, each of the elements of $\mathcal O$ may be iterated as $\sigma^i \cdot x$ and represent a $d$-cycle. The orbits are uniquemly determined by $\sigma$, so the cycle decomposition is unique. $\blacksquare$

### Exercises

**Exercise 1**: Let $G$ act on the set $A$. Prove that if $a, b \in A$ and $b = g \cdot a$ for some $g \in G$, then $G_b = gG_ag^{-1}$. Deduce that if $G$ acts transitively on $A$ then the kernel of the action is $\bigcap_{g \in G} gG_ag^{-1}$.

*Proof*: Let $g_a \in G_a$. We have $g^{-1} \cdot b = a$, so

$$
gg_ag^{-1} \cdot b = gg_a \cdot a = g \cdot a = b.
$$
So $gg_ag^{-1} \in G_b$ and $gG_ag^{-1} \subseteq G_b$. Now let $g_b \in G_b$. Then 

$$
g^{-1} g_b g \cdot a = g^{-1} g_b \cdot b = g^{-1} \cdot a = a
$$

so $g^{-1}g_bg = g_a' \in G_a$, so $g_b = gg'_ag^{-1} \in gG_ag^{-1}$, so $G_b \subseteq gG_ag^{-1}$. Thus, $G_b = g^{-1}G_ag$.

Consequently, $\bigcap_{g \in G} gG_ag^{-1} = \bigcap_{a \in A} G_a$ since $g \cdot a$ ranges over all of $A$.
$\blacksquare$

**Exercise 2**: Let $G \leq S_a$ be a permutation group on the set $A$, let $\sigma \in G$, and let $a \in A$. Prove that $\sigma G_a\sigma^{-1} = G_{\sigma(a)}$. Deduce that if $G$ acts transitively on $A$ then

$$
\bigcap_{\sigma \in G} \sigma G_a\sigma^{-1} = 1
$$

*Proof*: The first part holds by Exercise 1. If $G$ acts transitively on $A$, then the intersection intersects all stabilizers of $G$. Only the identity fixes every element of $A$, so the result follows. $\blacksquare$

**Exercise 3**: Assume that $G$ is an abelian, transitive subgroup of $S_A$.  Show that $\sigma(a) \neq a$ for all $\sigma \in G - \lbrace 1 \rbrace$ and all $a \in A$. Deduce that $\vert G \vert = \vert A \vert$.

*Proof*: Let $a \in A$ and $\sigma \in G - \lbrace 1 \rbrace$. By Exercise 2 and the fact that $G$ is abelian, $\sigma G_a\sigma^{_1} = G_{\sigma(a)} = G_a$. Since $\sigma \neq 1$, $G_a = G_b$ for all $b \in A$. So $G_a = \bigcap_{b \in A} G_b = 1$ by Exercise 2, so $G_a = 1$. Since $\sigma \neq 1$, $\sigma \not\in G_a$, so $\sigma(a) \neq a$.

Finally, since $G_a = 1$ and there is a bijection between the elements of $\mathcal C_a$ and the cosets of $G_a$, $\vert \mathcal C_a \vert = \vert A \vert = [G : G_a] = \vert G \vert$. (Note that $\vert \mathcal C_a \vert = \vert A \vert$ since the action is transitive.) $\blacksquare$

**Exercise 4**: Let $S_3$ act on the set of ordered pairs for integers $1 \leq i, j \leq 3$ by $\sigma((i, j)) = (\sigma(i), \sigma(j))$. Find the orbits of the action and the cycle decomposition of each $\sigma \in S_3$. For each orbit $\mathcal O$, pick some $a \in \mathcal O$ and find its stabilizer.

There are two orbits, one consisting of all elements $i == j$ and the other of all elements $i \neq j$. For $(1, 1)$, its stabilizer is $\lbrace (23) \rbrace$.

## Groups Acting on Themselves By Left Multiplication: Cayley's Theorem

**Theorem 3**: Let $G$ be a group, $H \leq G$ and $G$ act by left multiplication on the set $A$ of left cosets of $H$ in $G$. Let $\pi_H$ be the associated permutation representation afforded by this action. Then
1. $G$ acts transitively on $A$
2. The stabilizer in $G$ of the point $1H \in A$ is the subgroup $H$
3. The kernel of the action is $\bigcap_{x \in G} xHx^{-1}$, and $\operatorname{ker} \pi_H$ is the largest normal subgroup of $G$ contained in $H$.

*Proof*: $(1)$ Let $aH, bH \in A$. Then $ba^{-1} \in G$ and $(ba^{-1})aH = bH$.

$(2)$ $xH = H$ if and only if $x \in H$ so the stabilizer of $1H$ is $H$.

$(3)$ We have that

$$
\begin{align*}
\operatorname{ker} \pi_H &= \lbrace g \in G \mid gxH = xH, \forall x \in G \rbrace \\
&= \lbrace g \in G \mid x^{-1}gxH = H, \forall x \in G \rbrace \\
&= \lbrace g \in G \mid x^{-1}gx \in H, \forall x \in G \rbrace \\
&= \lbrace g \in G \mid g \in xHx^{-1}, \forall x \in G \rbrace \\
&= \bigcap_{x \in G} xHx^{-1}
\end{align*}
$$

First note that $\operatorname{ker} \pi_H$ is normal in $G$ since it is the kernel of a homomorphism. Also, $\operatorname{ker} \pi_H \leq H$. Now suppose there is a normal subgroup $N$ with $\operatorname{ker} \pi \leq N \leq H$. Then $N = xNx^{-1} \leq xHx^{-1}$ for all $x \in G$, so $N \leq \operatorname{ker} \pi_H$ and $N = \operatorname{ker} \pi_H$. So $\operatorname{ker} \pi_H$ is the largest normal subgroup of $G$ contained in $H$. $\blacksquare$

**Corollary 4 (Cayley's Theorem)**: Every group is isomorphic to a subgroup of some symmetric group. If $G$ is a group of order $n$, then $G$ is isomorphic to a subgroup of $S_n$.
 
*Proof*: Let $G$ be a group acting on itself and $H = 1\leq G$. Then the permutation representation $\pi$ afforded by this action is a homomorphism into $S_G$. Since its kernel is $\bigcap_{x \in G} xHx^{-1} = \bigcap_{x \in G} x1x^{-1} = 1$, the homomorphism is injective. So $G \cong \pi(G) \leq S_G$. $\blacksquare$ 

**Definition**: The permutation representation afforded by lfet multiplication on the elements of $G$ is called the **left regular representation** of $G$.

**Corollary 5**: If $G$ is a finite group of order $n$ and $p$ is the smallest prime dividing $\vert G \vert$, then any subgroup of index $p$ is normal.

*Proof*: Let $H \leq G$ with $[G : H] = p$. Let $\pi_H$ be the permutation representation afforded by the left action of $G$ on the cosets of $H$ in $G$. Then $\operatorname{ker} \pi_H = K \trianglelefteq G$ is contained in $H$ and let $[H : K] = k$. We have $[G : K] = [G : H][H : K] = pk$. Since $G/K \cong \pi_H(G) \leq S_p$, $\vert G/K \vert \mid \vert S_p \vert$ by Lagrange's Theorem. So $pk \mid p!$, that is, $k \mid (p - 1)!$. Every prime divisor of $(p - 1)!$ is less than $p$, and by the minimality of $p$, every prime divisor of $k$ is greater than or equal to $p$. So $k = 1$, so $H = K \trianglelefteq G$. $\blacksquare$

### Exercises

**Exercise 8**: Prove that if $H$ has finite index $n$, then there is a $K \trianglelefteq G$ with $K \leq H$ and $[G : K] \leq n!$.

*Proof*: Define $\pi$ as the permutation representation afforded by $G$ acting on the left cosets of $H$ in $G$. Let $K = \operatorname{ker} \pi$. Then $K \trianglelefteq G$ and $K \leq H$. Since $\pi: G \to S_G$, by the First Isomorphism Theorem, $G/K \cong \pi(G) \leq S_G$, so $[G : K] \leq n!$. $\blacksquare$

**Exercise 9**: Prove that if $p$ is a prime and $G$ is a group of order $p^\alpha$ for some $\alpha \in \mathbb Z^+$, then every subgroup of index $p$ is normal in $G$. Deduce that every group of order $p^2$ has a normal subgroup of order $p$.

*Proof*: Let $H \leq G$ with $[G : H] = p$. By Corollary 5, since $p$ is the smallest prime dividing $p^\alpha$, $H$ s normal in $G$. $\blacksquare$

## Groups Acting on Themselves By Conjugation: The Class Equation

**Definition**: Let $G$ be a group. **$G$ acting on itself by conjugation** is defined by

$$
g \cdot a = gag^{-1}, \forall a, g \in G
$$

**Definition**: Two elements $a, b \in G$ are said to be **conjugate** in $G$ if there is some $g \in G$ such that $b = gag^{-1}$.

**Definition**: The orbits of $G$ acting on itself by conjugation are called the **conjugacy classes** of $G$.

**Examples**:
* If $G$ is an abelian group, then the action of $G$ on itself by conjugation is the trivial action.
* If $\vert G \vert \gt 1$, then $G$ never acts transitively on itself because $\lbrace 1 \rbrace$ is always a conjugacy class.

**Definition**: Two subsets $S, T \subseteq G$ are said to be **conjugate in $G$** if there is some $g \in G$ such that $T = gSg^{-1}$.

**Proposition 6**: The number of conjugates of a subset $S$ in a group $G$ is the index of the normalizer of $S$.

*Proof*: The stabilizer of a subset $S \subseteq G$ for action by conjugation is the normalizer of $S$. The result follows by Proposition 2. $\blacksquare$

**Theorem 7 (The Class Equation)**: Let $G$ be a finite group and $g_1, \dots, g_r$ the representatives of the distinct conjugacy classes of $G$ not contained in the center of $G$. Then

$$
\vert G \vert = \vert Z(G) \vert + \sum_{i = 1}^r [G : C_G(g_i)]
$$

*Proof*: We compute $\vert Z \vert$ by summing the orders of its conjugacy classes, since the orbits partition $G$ by Proposition 2. Each element in $Z(G)$ is the sole member of its conjugacy class since if $gz = zg$ for $z \in Z(G), g \in G$, then $g^{-1}zg = z$. Let $\mathcal K_1, \dots, \mathcal K_r$ be the conjugacy classes with representatives of $g_1, \dots, g_r$, respectively. Then

$$
\begin{align*}
\vert G \vert &= \sum_{z \in Z(G)} 1 + \sum_{i = 1}^r \vert \mathcal K_i \vert \\
&= \vert Z(G) \vert + \sum_{i = 1}^r [G : C_G(g_i)]
\end{align*}
$$

$\blacksquare$

**Theorem 8**: If $p$ is a prime and $P$ is a group of prime power order $p^\alpha$ for some $\alpha \geq 1$, then $P$ has a nontrivial center.

*Proof*: $[G : C_G(g_i)]$ in the class equation divides $p^\alpha$ so it is divisible by $p$. Since $p$ also divides $\vert P \vert$ by Lagrange's, $p$ must divide $\vert Z(G) \vert$ by the class equation. So $Z(G) \neq 1$. $\blacksquare$

**Corollary 9**: If $\vert P \vert = p^2$ for some prime $p$, then $P$ is abelian and isomorphic to either $Z_{p^2}$ or $Z_p \times Z_p$.

*Proof*: By Theorem 8, $Z(P) \neq 1$, so by Lagrange's, $\vert Z(P) \vert = p$ or $p^2$. If the order is $p^2$ then $Z(P) = P \cong Z_p^2$ and we are done. So suppose $\vert Z(P) \vert = p$. Then $P/Z(P)$ is cyclic so $P$ is abelian. Let $x \in P - \lbrace 1 \rbrace$. and $y \in P - \langle x \rangle$. The order of $x$ and $y$ are not $p^2$ (since $\vert Z(P) \vert = p$), so $\vert \langle x, y \rangle \vert \gt \vert \langle x \rangle\vert  = p$, so $\langle x, y \rangle = P$. Since both have order $p$, $\langle x \rangle \times \langle y \rangle = Z_p \times Z_p$. Then $(x^a, y^b) \mapsto x^ay^b$ is an isomorphism from $\langle x \rangle \times \langle y \rangle$ to $P$. $\blacksquare$

### Conjugacy in $S_n$

**Proposition 10**: Let $\sigma, \tau \in S_n$ and suppose $\sigma = (a_1 \enspace \dots \enspace a_{k_1})(b_1 \enspace \dots \enspace b_{k_2})$. Then

$$
\tau\sigma\tau^{-1} = (\tau(a_1) \enspace \dots \enspace \tau(a_{k_1}))(\tau(b_1) \enspace \dots \enspace \tau(b_{k_2}))
$$

*Proof*: Let $\sigma(i) = j$. Then $\tau\sigma\tau^{-1}(\tau(i)) =\tau(j)$. $\blacksquare$

**Definition**:
1. If $\sigma \in S_n$ is the product of disjoint cycles with lengths $n_1, \dots, n_r$ with $n_1 \leq \dots \leq n_r$, then the integers $n_1, \dots, n_r$ are called the **cycle type** of $\sigma$.
2. If $n \in \mathbb Z^{+}$, a partition of $n$ is any non-decreasing sequence of positive integers whose sum is $n$.

**Remark**: By Proposition B, the cycle type of a permutation is unique.

**Proposition 11**: Two elements of $S_n$ are conjugate in $S_n$ if and only if they have the same cycle type. The number of conjugacy classes of $S_n$ equals the number of partitions of $n$.

*Proof*: The forward implication follows from Proposition 10. For the converse, let $\sigma_1, \sigma_2 \in S_n$. Arrange their cycle decompositions in increasing order of cycle length. Each permutation lists each number from $1$ to $n$ exactly once, so we may define a permutation $\tau$ mapping the $i$th element in $\sigma_1$ to the $i$th element in $\sigma_2$. Then $\tau\sigma_1\tau^{-1}$ = \sigma_2$, so the permutations are conjugate. $\blacksquare$.

**Note**: There may be many elements conjugating $\sigma_1$ into $\sigma_2$.

**Remark**: The order of the centralizer of an $m$-cycle $\sigma \in S_n$ is $m(n - m)!$.

*Proof*: There are $(n \cdot (n - 1) \cdot \dots \cdot (n - m + 1))/m$ conjugates of $\sigma$ (number of $m$-cycles), and by Proposition 6, this is the index of the centralizer, that is, $\vert S_n \vert / \vert C_{S_N}(\sigma) \vert$. Since $\vert S_n \vert = n!$, we have $\vert C_{S_N}(\sigma) \vert = m(n - m)!$. $\blacksquare$

**Proposition C**: If $H \trianglelefteq G$, then for every conjugacy class $\mathcal K$ of $G$, either $\mathcal K \subseteq H$ or $\mathcal K \cap H = \emptyset$. That is, normal subgroups of $G$ are the union of conjugacy classes in $G$.

*Proof*: Let $k \in \mathcal K$ and suppose $k \not\in H$. Then $kHk^{-1} \neq H$ so $k \not\in H$. $\blacksquare$.

**Theorem 12**: $A_5$ is a simple group.

*Proof*: The conjugacy classes of $A_5$ have orders $1, 15, 20, 12$, and $12$. A subgroup of $H$ must have order that divides $5!/2 = 60$ and is the sum of the orders of the conjugacy classes. Only $\vert H \vert = 1$ and $\vert H \vert = 60$ have this property. So $A_5$ is simple. $\blacksquare$

### Right Group Actions

Group actions may identically be defined from the right. Conjugation is traditionally defined by a right group action and uses the notation

$$
a^g = g^{-1}ag, \forall g, a \in G
$$

### Exercises



## Automorphisms

**Definition**: Let $G$ be a group. An isomorphism from $G$ onto itself is caleld an **automorphism** of $G$. The set of all automorphisms of $G$ is denoted $\operatorname{Aut}(G)$.

**Proposition D**: $\operatorname{Aut}(G)$ is a group under composition, and forms the **automorphism group of $G$.**

*Proof*: The group is non-empty since $1 \in \operatorname{Aut}(G)$. Let $f, g \in \operatorname{Aut}(G)$ and $x, y \in G$. Then

$$
(f \circ g^{-1})(xy) = f(g^{-1}(xy)) = f(g^{-1}(x)g^{-1}(y)) = (f \circ g^{-1})(x)(f \circ g^{-1}(y)) 
$$

so $fg^{-1}$ is an isomorphism and is in $\operatorname{Aut}(G)$. So it is a group. $\blacksquare$

**Proposition 13**: Let $H$ be a normal subgroup of the group $G$. Then $G$ acts by conjugation on $H$ as automorphisms of $H$. The permutation representation afforded by this action is a homomorphism of $G$ into $\operatorname{Aut}(H)$ with kernel $C_G(H)$.

*Proof*: Let $g \in G$ and let $\varphi_g$ denote conjugation by $g$. Then

$$
\varphi_g(h_1h_2) = gh_1h_2g^{-1} = gh_1g^{-1}gh_2g^{-1} = \varphi_g(h_1)\varphi_g(h_2)
$$

with $h_1, h_2 \in H$, so $\varphi_g$ is a homomorphism from $G \to G$. It is injective since if $ghg^{-1} = gh'g^{-1}$ then $h = h'$ by cancellation, and it is surjective since given $h \in H$ we have $\varphi_g(g^{-1}hg) = h$. So $\varphi_g$ is an isomorphism.

The permutation representation $\phi: G \to S_H$ defined by $\phi(g) = \varphi_g$ is a homomorphism by above whose image is contained in $\operatorname{Aut}(H)$. The kernel is all elements $g \in G$ such that $ghg^{-1} = h$ for all $h \in H$, that is, the centralizer of $H$. So by the First Isomorphism Theorem, $G/C_G(H) \cong \varphi(G) \leq \operatorname{Aut}(H)$. $\blacksquare$

**Corollary 14**: If $K \leq G$ and $g \in G$, then $K \cong gKg^{-1}$. Thus, conjugate elements and conjugate subgroups have the same order.

*Proof*: Let $H = G$ in Proposition 13, then $G$ acting on itself by conjugation is an automorphism. Thus, $G$ acting on a subgroup $K$ by conjugation is an automorphism on $K$, as well. $\blacksquare$

**Corollary 15**: Let $H \leq G$. Then $N_G(H)/C_G(H)$ is isomorphic to a subgroup of $\operatorname{Aut}(H)$.

*Proof*: $H \trianglelefteq N_G(H)$, so the result follows by Proposition 13. $\blacksquare$

**Remark**: In particular, by Corollary 15, $G/Z(G)$ is isomorphic to a subgroup of $\operatorname{Aut}(G)$.

**Definition**: Let $G$ be a group and $g \in G$. Conjugation by $g$ is called an **inner automorphism** of $G$ and the subgroup of $\operatorname{Aut}(G)$ consisting of all inner automorphisms is denoted $\operatorname{Inn}(G)$.

**Note**: By Corollary 15, $\operatorname{Inn}(G) \cong G/Z(G)$.

**Proposition E**: A group is abelian if and only if every inner automorphism is trivial.

*Proof*: Let $G$ be a group. Then for all $x, y \in G$,

$$
\begin{align*}
xy = yx
&\iff xyx^{-1} = y \\
&\iff \sigma_x(y) = y, \forall \sigma_x \in \operatorname{Inn}(G) \\
&\iff \sigma_x(y) = \operatorname{id}, \forall \sigma_x \in \operatorname{Inn}(G)
\end{align*}
$$

$\blacksquare$

**Proposition F**: If $H \trianglelefteq G$ is abelian and is not contained in $Z(G)$, then there is some $g \in G$ such that if $\sigma_g$ is restricted to $H$,  $\sigma_g \notin \operatorname{Inn}(H)$.

*Proof*: Let $g \in G$ such that $h'g \neq gh'$ for some $h' \in H$. Suppose to the contrary that every inner automorphism of $G$ restricted to $H$ is an inner automorphism of $H$. Then in particular, $\sigma_g \in \operatorname{Inn}(H)$, so for all $x \in H$, $gxg^{-1} = hxh^{-1}$ for some $h \in H$. Since $H$ is abelian, then $gxg^{-1} = x$ for all $x \in H$, so $gx = xg$. But this contradicts that $g$ does not commute with some element of $H$. $\blacksquare$

**Examples**:
1. Since $Z(Q_8) = \langle -1 \rangle$, $\operatorname{Inn}(Q_8) \cong V_4$.
2. Since $Z(D_8) = \langle r^2 \rangle$, $\operatorname{Inn}(D_8) \cong V_4$.
3. Since for al $n \geq 3$, $Z(S_n) = 1$, $\operatorname{Inn}(S_n) \cong S_n$.

**Example**: Show that if $H \cong Z_2$, then $\operatorname{Aut}(H) = 1$. Deduce that $N_G(H) = C_G(H)$.

*Proof*: $H$ has one element of order 1 and one element of order 2. By Corollary 14, automorphisms preserve order, so the only automorphism of $H$ is the identity. Then by Corollary 15, $N_G(H)/C_G(H) = 1$, so $N_G(H) = C_G(H)$. $\blacksquare$

**Definition**: A subgroup $H$ of a group $G$ is called **characteristic in $G$**, denoted $H$ char $G$, if every automorphism of $G$ maps $H$ to itself. That is, $\sigma(H) = H$ for all $\sigma \in \operatorname{Aut}(G)$.

**Proposition G**: Characteristic subgroups are normal.

*Proof*: In particular, an inner automorphism of $G$ maps $H$ to itself, that is, $gHg^{-1} = H$ for all $g \in G$. That is, $H$ is normal. $\blacksquare$

**Proposition H**: If $H$ is the unique subgroup of $G$ of a given order, then $H$ is characteristic in $G$.

*Proof*: Automorphisms are isomorphisms, so in particular they preserve group order. So any automorphism of $G$ must map $H$ to a subgroup of the same order, which must be $H$. $\blacksquare$

**Proposition I**: If $K$ char $H$ and $H \trianglelefteq G$, then $K \trianglelefteq G$.

*Proof*: Since $H \trianglelefteq G$, every inner automorphism of $G$ restricted to $H$ is an automorphism of $H$. Since $K$ char $H$, every inner automorphism of $G$ maps $K$ to itself, that is, $gKg^{-1} = K$ for all $g \in G$, that is, $K$ is normal in $G$. $\blacksquare$

**Proposition 16**: The automorphism group of the cyclic group of order $n$ is isomorphic to $(\mathbb Z/n\mathbb Z)^\times$.

*Proof*: Let $x$ be a generator of $Z_n$. If $\psi \in \operatorname{Aut}(Z_n)$, then $\psi(x) = x^a$, for some $a \in \mathbb Z$, denoted $\psi_a$. Since $\psi_a$ is an automorphism, $\vert x \vert = \vert x^a \vert$ so $(a, n) = 1$. Note that if $(a, n) = 1$, then $x \mapsto x^a$ is an automorphism of $Z_n$. So $\phi: \operatorname{Aut}(Z_n) \to (\mathbb Z/n\mathbb Z)^\times$ is surjective with $\psi_a \mapsto a \pmod n$. It is a homomorphism since $\psi_a \circ \psi_b(x) = \psi_a(x^b) = x^ab = \psi_{ab}(x)$ for $\psi_a, \psi_b \in \operatorname{Aut}(Z_n)$, and it is injective, so it is an isomorphism.

**Example**: Let $G$ be a group of order $pq$, with $p, q$ prime and $p \leq q$. If $p \nmid q - 1$, then $G$ is abelian.

*Proof*: TODO.

## Sylow's Theorem

**Definition**: Let $G$ be a group and $p$ a prime.
1. A group of order $p^\alpha$ for some $\alpha \geq 1$ is called a **$p$-group**. Subgroups of $G$ which are $p$-groups are called **$p$-subgroups**.
2. If $G$ is a group of order $p^\alpha m$ where $p \nmid m$, then a subgroup of order $p^\alpha$ is called a **Sylow $p$-subgroup of $G$**.
3. The set of Sylow $p$-subgroups of $G$ are denoted by $Syl_p(G)$, and the number of Sylow $p$-subgroups of $G$ is denoted by $n_p(G)$ (or just $n_p$ when $G$ is clear from the context).

**Theorem 18 (Sylow's Theorem)**: Let $G$ be a group of order $p^\alpha m$, where $p$ is a prime not dividing $m$.
1. Sylow $p$-subgroups of $G$ exist.
2. If $P$ is a Sylow $p$-subgroup of $G$ and $Q$ is any $p$-subgroup of $G$, then there exists $g \in G$ such that $Q \leq gPg^{-1}$.
3. The number of Sylow $p$-subgroups of $G$ is $n_p \equiv 1 \pmod p$. $n_p$ is also the index in $G$ of the normalizer $N_G(P)$ for any Slow $p$-subgroup $P$, hence $n_p$ divides $m$.

*Proof*: $(1)$ By induction on $\vert G \vert$. If $\vert G \vert = 1$, we are done. Assume inductively the existence of Sylow $p$-subgroups for all groups of order less than $\vert G \vert$.

Suppose $p \mid \vert Z(G) \vert$, then by Cauchy's Theorem, there is an $N \trianglelefteq Z(G)$ of order $p$. Let $\overline G = G/N$. Then $\overline G$ has a Sylow $p$-group $\overline P$ of order $p^{\alpha - 1}$. By the Lattice Isomorphism Theorem, we have $P \leq G$ with $\vert P \vert = \vert P/N \vert \cdot \vert N \vert = p^\alpha$, so $P$ is a Sylow $p$-subgroup of $G$.

Now suppose $p \nmid \vert Z(G) \vert$. Since $p \mid G$, $p$ does not divide the order of some conjugacy class with representative $g \in G$, by the class equation. Then $\vert C_G(g) \vert = \vert G \vert / [G : C_G(g)] = p^\alpha k$ where $p \nmid k$. By induction, $C_G(g)$ has a Sylow $p$-subgroup, so $G$ has a Sylow $p$-subgroup.

$(2, 3)$ Let $P$ be a Sylow $p$-subgroup of $G$. Let $\mathcal P$ be the set of conjugates of $P$ in $G$. $P$ acts on $\mathcal P$ by conjugation with $P$ as the unique fixed point. Indeed, if $R \in \mathcal P$ and $P$ fixes $R$, then $P$ normalizes $R$, so $PR$ is a subgroup with $\vert PR \vert = \vert P \vert \vert R \vert / \vert P \cap R \vert$, so $PR$ is a $p$-subgroup of $G$ since $P$ and $R$ are $p$-subgroups of $G$. We have $P \leq PR$, but since $P$ is the maximal $p$-subgroup, $P = PR$ so $P = R$. $p$ divides the size of the other orbits, so $\vert \mathcal P \vert \equiv 1 \pmod p$.

Suppose now that some Sylow $p$-subgroup is not in $\mathcal P$. Then $p$ divides the size of every orbit so $\vert \mathcal P \vert \equiv 0 \pmod p$, a contradiction. So every Sylow $p$-subgroup is conjugate. So $n_p = \vert \mathcal P \vert \equiv 1 \pmod p$.

Note that $n_p \mid m$ since $m = [G : P] = [G : N_G(P)][N_G(P) : P] = n_p[N_G(P) : P]$.

Finally assume $Q$ is a $p$-subgroup not contained in a conjugate of $P$. $Q$ acts on $\mathcal P$ by conjugation, but the size of each of its orbits would be divsible by $p$, a contradiction. So $Q$ is contained in some conjugate of $P$.

$n_p$$\blacksquare$

**Corollary 20**: Let $P$ be a Sylow $p$-subgroup of $G$. Then the following are equivalent:
1. $P$ is the unique Sylow $p$-subgroup of $G$
2. $P$ is normal in $G$
3. $P$ is characteristic in $G$
4. All subgroups generated by elements of $p$-power order are $p$-groups.

*Proof*: $(1 \to 3)$. By Proposition $H$.

$(3 \to 2)$ By Proposition $G$.

$(2 \to 1)$ If $P \trianglelefteq G$ and $Q \in Syl_p(G)$ then $Q = gPg^{-1} = P$ for some $g \in G$, so $Syl_p(G) = \lbrace P \rbrace$.

$(1 \to 4)$ Let $X \subseteq G$ with every element in $X$ of $p$-power order. Then for $x \in X$, $\langle x \rangle$ is a $p$-subgroup so $\langle x \rangle \subseteq gPg^{-1} = P$ by Sylow's Theorem, so $x \in P$. So $\langle X \rangle \subseteq P$, so $X$ is a $p$-group.

$(4 \to 1)$. Let $X$ be the union of all Sylow $p$-subgroups of $G$. If $P \in Syl_p(G)$, then $P \leq \langle X \rangle$, but $P$ is the maximal $p$-subgroup, so $P = \langle X \rangle$ $\blacksquare$.

### Applications of Sylow's Theorem

**Example**: Let $\vert G \vert = pq$ for primes $p, q$ with $p \lt q$. Let $P \in Syl_p(G)$ and $Q \in Syl_q(G)$. Then $Q \trianglelefteq G$ and if $P \trianglelefteq G$, then $G$ is cyclic.

*Proof*: Since $n_q \equiv 1 \pmod q$ and $n_q \mid p$, $n_q = 1$ so $Syl_q(G) = \lbrace Q \rbrace$. By Corollary 20, then, $Q$ is normal.