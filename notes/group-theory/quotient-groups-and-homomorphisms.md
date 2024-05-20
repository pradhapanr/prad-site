---
toc: true
layout: default
order: 3
---

# Quotient Groups and Homomorphisms

## Definition and Examples

**Definition**: Let $\varphi: G \to H$ be a homomoprhism. A **fiber** of $\varphi$ is a subset of $G$ that maps to a single element in $H$.

**Definition**: If $\varphi: G \to H$ is a homomorphism, then the **kernel of $\varphi$** is the fiber mapping to the identity element in $H$.

**Proposition 1**: Let $G, H$ be groups and $\varphi: G \to H$ a homomorphism.
1. Identity is preserved under homomorphism.
2. Inverse is preserved under homomorphism.
3. Powers are preserved under homomorphism.
4. The kernel is a subgroup of $G$.
5. The image of $G$ under $\varphi$ is a subgroup of $H$.

*Proof*: (1) $\varphi(1 \cdot 1) = \varphi(1)\varphi(1) = \varphi(1)$, so $\varphi(1) = 1_H$ by cancellation. $\blacksquare$

(2) $\varphi(1) = \varphi(gg^{-1}) = \varphi(g)\varphi(g^{-1}) = 1$, and multiplying on the left by $\varphi(g)^{-1}$ gives $\varphi(g^{-1}) = \varphi(g)^{-1}$. $\blacksquare$

(3) By induction: suppose $\varphi(g^n) = \varphi(g)^n$. Then $\varphi(g^n \cdot g) = \varphi(g)^n\varphi(g) = \varphi(g^{n + 1})$. And the base case holds for $n = 1$ trivially. $\blacksquare$

(4) $1 \in \operatorname{ker} \varphi$ so it is non-empty. Let $a, b \in \operatorname{ker} \varphi$. Then $\varphi(ab^{-1}) = \varphi(a)\varphi(b^{-1}) = 1$ so $ab^{-1} \in \operatorname{ker} \varphi$. $\blacksquare$

(5) $\varphi(G)$ is non-empty since identity is preserved. Let $a, b \in \varphi(G)$. Then $\varphi(x) = a$ and $\varphi(y) = b$ for some $x. y \in G$. $\varphi(y^{-1}) = b^{-1}$, so $\varphi(xy^{-1}) = ab^{-1}$. $\blacksquare$

**Definition**: Let $\varphi: G \to H$ be a homomorphism with kernel $K$. The **quotient group** or **factor group**, $G/K$ (read **$G$ modulo $K$** or **$G$ mod $K$**) is the group whose elements are the fibers of $\varphi$ with the group operation between two fibers above $a$ and $b$ as the fiber above the product $ab$.

**Proposition 2**: Let $\varphi: G \to H$ be a homormophism of groups with kernel $K$. Let $X \in G/K$ be the fiber above $a$. Then
1. For any $u \in X, X = \lbrace uk \mid k \in K \rbrace$.
2. For any $u \in X, X = \lbrace ku \mid k \in K \rbrace$.

*Proof*: (1) Let $u \in X$. We first show $X \subseteq uK$. Let $g \in X$. Let $k = u^{-1}g$. Then $\varphi(k) = 1$ so $k \in \operatorname{ker} \varphi$, $g = uk$, so $g \in uK$. Thus $X \subseteq uK$. Now let $g \in uK$. Then $\varphi(g) = \varphi(u)\varphi(k) = \varphi(u) = a$ since $u \in X$, so $g \in X$. Thus $uK \subseteq X$. $\blacksquare$

(2) Proceeds symmetrically as (1).

**Definition**: For any $N \subseteq G$ and any $g \in G$, let

$$
gN = \lbrace gn \mid n \in N \rbrace
$$

and

$$
Ng = \lbrace ng \mid n \in N \rbrace
$$

be the **left coset** and **right coset** of $N$ in $G$, respectively. Any element of a coset is called a **representative** for the coset.

Note that Proposition 2 tells us that $gN = g'N$ for any $g' \in gN$, motivating the nomenclature of a coset representative.

**Lemma 3**: Let $N \leq G, u, v \in G$. The following are equivalent:
1. $uN = vN$
2. $u \in vN$
3. $v^{-1}u \in N$
4. $u, v$ are representatives of the same coset.

*Proof*: $(1 \to 2)$. Suppose $uN = vN$. Then $x = un_u = vn_v$ for some $x \in uN, n_u, n_v \in N$.So $u = vn_vn_u^{-1} \in vN$.

$(2 \to 3)$ Suppose $u \in vN$. Then $u = vn$ for some $n \in N$, so $v^{-1}u = n$, so $v^{-1}u \in N$.

$(3 \to 1)$ Suppose $v^{-1}u \in N$. Let $x \in uN$. Then $x = un$ for some $n \in N$, so $u = xn^{-1}$. Thus $v^{-1}u = vxn^{-1}$, so $x = v^{-1}(v^{-1}u)n$. By the assumption, $v^{-1}u \in N$, so $v^{-1}un \in N$, so $x \in vN$. So $uN \subseteq vN$. Symmetrically, $vN \subseteq uN$, so $uN = vN$.


**Theorem 3**: Let $G$ be a group and let $K$ be a kernel of some homomorphisms from $G$ to another group. Then the set whose elements are the left cosets of $K$ in $G$ with operation defined by

$$
uK \circ vK = (uv)K
$$

is well-defined.

*Proof*: First we show the operation is well-defined. Let $uK = u'K$ and $vK = v'K$. By Proposition 2, it suffices to show that $u'v' \in (uv)K$. By Proposition 2, $u' \in uK$, so $u' = uk_u$. Similarily, $v' = vk_v$. So $u'v' = (uk_u)(vk_v)$, and $\varphi(u'v') = \varphi(uk_u)\varphi(vk_v) = \varphi(u)\varphi(v)$. So $u'v'$ and $uv$ are in the same coset of $K$, that is, $u'v' \in (uv)K$.

**Examples**:
* The fibers of $\varphi: \mathbb Z \to Z_n$, $\varphi(k) = k \pmod n$ are $a + n\mathbb Z$. The group $\mathbb Z/n\mathbb Z$ is thus isomorphic to $Z_n$.
* If $\varphi: G \to H$ is an isomorphism, then $K = 1$, and the fibers of $\varphi$ are the singleton subsets of $G$.
* The trivial homomorphism of $G$ (the homomorphism mapping everything to $1$) has a kernel of $G$, and shows $G/G \cong \lbrace 1 \rbrace$.
* The projection of vectors in $\mathbb R^2$ on the x-axis is a homomorphism, with fibers being the vertical lines crossing the x-axis, and the kernel the vertical line crossing the orgin.
* To show that $Q_8/\lbrace \pm 1 \rbrace \cong V_4$, define the homomorphism $\varphi: Q_8 \to V_4$ as $\varphi: \pm 1 \mapsto 1, \pm i \mapsto a, \pm j \mapsto b, \pm k \mapsto c$. 

$(2 = 4)$ $u \in vN$ if and only if $u$ is a representative of $vN$, so $uN = vN$ if and only if $u$ and $v$ are representatives of the same coset. $\blacksquare$

**Proposition 4**: Let $N \leq G$. The set of left cosets of $N$ form a partition of $G$. 

*Proof*: First we show $\bigcup_{g \in G} gN = G$. Let $x \in gN$. Then $x = gn$ for some $g \in G$, $n \in N \subseteq G$ so $x \in G$ by closure. Now suppose $x \in G$. Since $N \leq G$, $1 \in N$, so $x = x1 \in gN$. This shows subset inclusion in both directions, so $\bigcup_{g \in G} gN = G$.

Next we show that $uN \cap vN = \emptyset$ for $uN \neq vN$. Suppose $uN \cap vN \neq \emptyset$. Then $x = un_u = vn_v$ for some $x \in uN \cap vN$, $n_u, n_v \in N$. In particular, $u = vn_vn_u^{-1} \in vN$, so $uN = vN$. $\blacksquare$

**Proposition 5**: Let $G$ be a group and $N \leq G$. The operation on left cosets $uN \cdot vN = (uv)N$ is well defined if and only if $gng^{-1} \in N$ for all $g \in G$ and $n \in N$. This operation also defines a group on the set of left cosets of $N$.

*Proof*: Suppose $gng^{-1} \in N$ for all $g \in G, n \in N$. Then $gn = n'g$ for some $n' \in N$. We show that if $u' \in uN$ and $v' \in vN$,

$$
\begin{align*}
    u'v' &= (un_u)(vn_v) \\
         &= uv(n_u'n_v) \\ 
         &\in (uv)N
\end{align*}
$$

whre $n_u, n_v, n'_u \in N$, and the second line uses the assumption.

Now suppose the operation is well-defined. Then for all $u, u' \in uN$ and $v, v' \in vN$, $uvN = u'v'N$. Let $g \in G, n \in N$. In particular, choose $u = 1$, $u' = n$, $v = v' = g^{-1}$. Note that $u \in u'N$ since $1 \in N$ and $v \in v'N$ since $v = v'$, both by Lemma 3. We have $g^{-1}N = ng^{-1}N$, so $gng^{-1}N = N$, so $gng^{-1} \in N$, by Lemma 3.

That this operation defines a group follows from the associativity of $G$. It can also be shown that the identity is $1N$ and the inverse for some coset $aN$ is $a^{-1}N$. $\blacksquare$

**Definition**: The element $gng^{-1}$ is called the **conjugate** of $n \in N$ by $g$. The set $gNg^{-1} = \lbrace gng{-1} \mid n \in N \rbrace$ is called the **conjugate** of $N$ by $g$. The element $g$ **normalizes** $N$ if $gNg^{-1} = N$. A subgroup $N \leq G$ is called **normal** if every element of $G$ normalizes $N$, and is written $N \trianglelefteq G$

**Theorem 6**: Let $N \trianglelefteq G$. The following are equivalent:
1. $N \trianglelefteq G$
2. $N_G(N) = G$
3. $gN = Ng$ for all $g \in G$
4. The operations on left cosets of $N$ in $G$ in Proposition 5 makes the set of left cosets into a group.
5. $gNg^{-1} \subseteq N$ for all $g \in G$

*Proof*: $(1 \to 2)$ by definition.

$(2 \to 3)$ Suppose $gNg^{-1} = N$ for all $g \in G$. If $gn \in gN$, then $gng^{-1} = n'$ for some $n' \in N$, so $gn = n'g$ and $gn \in Ng$. So $gN \subseteq Ng$, and symmetrically, $Ng \subseteq gN$. So $gN = Ng$.

$(3 \to 4)$ If $gN = Ng$ then $gng^{-1} \in N$ for all $g \in G, n \in N$, and $(4)$ follows from Proposition 5.

$(4 \to 5)$ If $(4)$, then $gng^{-1} \in N$ by Proposition 5, so $(5)$.

$(5 \to 1)$ Let $n \in N$, $g \in G$. Then $g^{-1}ng = n'$ for some $n' \in N$, so $n = gn'g^{-1} \in gNg^{-1}$. So $N \subseteq gNg^{-1}$ and $N = gNg^{-1}$, thus $N \trianglelefteq G$, by definition. $\blacksquare$

**Proposition 7**: A subgroup $N \trianglelefteq G$ if and only if it is the kernel of some homomorphism.

*Proof*: Suppose $N \trianglelefteq G$. Define $\phi: G \to G/N$ as $\phi(g) = gN$. It is a homomorphism since $\phi(xy) = (xy)N = (xN)(yN) = \phi(x)\phi(y)$, since the operation is well-defined by Proposition 5. Also $\operatorname{ker}(\phi) = N$ since $gN = 1N = N$ if and only if $g \in N$ by Lemma 3.

Now suppose $N$ is the kernel of some homomorphism. We show that $gNg^{-1} \subseteq N$, from which $N \trianglelefteq G$ follows from Theorem 6. Let $gng^{-1} \in gNg^{-1}$. and $\phi$ the homomorphism for which $N$ is a kernel. Then $\phi(gng^{-1}) = \phi(g)\phi(n)\phi(g^{-1}) = \phi(g)\phi(g^{-1}) = 1$, so $gng^{-1} \in \operatorname{ker}\phi = N$. 

(For an even shorter proof of this converse, note that by Proposition 2 the left and right cosets of the kernel coincide, thus by $(3)$ in Theorem 6, $N \trianglelefteq G$.)
$\blacksquare$

**Definition**: Let $N \trianglelefteq G$. The homomorphism $\pi: G \to G/N$ defined by $\pi(g) = gN$ is the **natural projection (homomorphism)** of $G$ onto $G/N$. If $\overline H \leq G/N$ is a subgroup of $G/N$, the **complete preimage** of $\overline H$ is $\pi^{-1}(\overline H)$.

**Examples**:
* The subgroups $1$ and $G$ are always normal in $G$.
* If $G$ is abelian, any subgroup $N \leq G$ is normal since $gng^{-1} = gg^{-1}n = n$, for $g \in G, n \in N$. 
  * Note that it is not sufficient for $N$ to be abelian, since $H = \lbrace 1, (12) \rbrace \leq S_3$ is abelian, but $gHg^{-1} = \lbrace 1, (23), \rbrace \neq H$ for $g = (13)$.
* If $N \leq Z(G)$, then $N \trianglelefteq Z(G)$ since $gng^{-1} = n \in N$.
* Let $G$ be a cyclic group of order $k$. Let $N \leq G$. Then $N = \langle x^d \rangle$ for some $x$ \in G$ where $d$ is the smallest power such that $x^d \in N$. Then $G/N$ is cyclic since 
  
$$
G/N = \lbrace gN \mid g \in G \rbrace = \lbrace x^aN \mid a \in \mathbb Z \rbrace = \lbrace (xN)^a \mid a \in \mathbb Z \rbrace
$$

by Exercise 4. Thus, quotient groups of cyclic groups are cyclic.

The exercises below highlight some additional important properties, e.g.

* The preimage of a homomorphism of a subgroup is a subgroup (Exercise 1).
* The preimage of a homomorphism of a snormal subgroup is a normal subgroup (Exercise 1).
* The quotient group of an abelian group is itself abelian. (Exercise 3).
* The order of $gN$ in a quotient group $G/N$ is the smallest $n$ such that $g^n \in N$ (note, this is NOT the order of $g \in G$). (Exercise 5)

### Exercises

**Exercise 1**: Let $\phi: G \to H$ be a homomorphism and $E \leq H$. Then $\phi^{-1}(E) \leq G$. If $E \trianglelefteq H$, then $\phi^{-1}(E) \trianglelefteq G$. And, $\operatorname{ker} \phi \trianglelefteq G$.

*Proof*: $1 \in \phi^{-1}(E)$ since $1 \in E$ and $\phi(1^{-1}) = \phi(1)^{-1}$. So $\phi^{-1}(E)$ is non-empty. Now let $a, b \in \phi^{-1}(E)$. Then $\phi(a), \phi(b) \in E$, so $\phi(a)\phi(b)^{-1} = \phi(ab^{-1}) \in E$, so $ab^{-1} \in \phi^{-1}(E)$. 

Now suppose $E \trianglelefteq H$. Let $g \in G$ and $x \in \phi^{-1}(E)$. Then $\phi(gxg^{-1}) \in E$ by normality of $E$ so $gxg^{-1} \in \phi^{-1}(E)$.

Finally, $\operatorname{ker} \phi \trianglelefteq G$ by Proposition 7.

$\blacksquare$

**Exercise 2**: Let $\phi: G \to H$ be a homomorphism with kernel $K$ and $a, b \in \phi(G)$ with corresponding fibers $X, Y$. Let $u \in X$. Show that if $XY = Z$ in $G/K$ and $w \in Z$, then there is a $v \in Y$ with $uv = w$.

*Proof*: Since $XY = Z, Y = X^{-1}Z = (u^{-1}K)(wK) = (u^{-1}w)K$. So $u^{-1}w \in Y$. $\blacksquare$

**Exercise 3**: Let $A$ be an abelian group and $B \leq A$. Then $A/B$ is abelian. Give an example of a non-abelian group containing a proper normal subgroup $N$ with $G/N$ abelian.

*Proof*: Let $X, Y \in A/B$. Let $x \in X, y \in Y$ Then $XY = xByB = xyB = yxB = yBxB$. 

(Note we use Proposition 2 in the claim that $X = xB$ and $Y = yB$). $\blacksquare$

For an example, consider $S_3/\lbrace 1, (12) \rbrace$, which is abelian.

**Exercise 4**: Prove that in the quotient gruop $G/N, (gN)^\alpha = g^\alpha N$ for all $\alpha \in \mathbb Z$.

*Proof*: $(gN)(gN) = ggN = g^2N$, and the exercise follows by induction. Negative powers proceed likewise with $g^{-1}$. $\blacksquare$

**Exercise 5**: Prove the order of $gN$ in $G/N$ is $n$, where $n$ is the smallest positive integer such that $g^n \in N$, and infinite order if no such $n$ exists.

*Proof*: By Exercise 4, the smallest $n$ such that $(gN)^n = N$ is precisely the smallest such $n$ such that $g^n \in N$. since if $g^n \in N$ then $g^nN = N$ (and likewise for the infinite case).$\blacksquare$  

The example holds whenever $g \in N$ but $g \neq 1$. For example, let $G = \mathbb Z_6$ and $N = \mathbb Z_3$. Then the order of $g = 3$ is 2 but the order of $gN = 3 + \mathbb Z_3 = \mathbb Z_3$ is 1.

**Exercise 14**: Consider the additive quotient group $\mathbb Q/\mathbb Z$.

**a.** Show that every coset of $\mathbb Z$ in $\mathbb Q$ contains exactly one representative $q \in \mathbb Q$ in the range $0 \leq q \lt 1$.

*Proof*: Consider $r + \mathbb Z$, $r \in \mathbb Q$. The sole representative is $r - k$ where $k$ is the largest integer smaller than $r$. $0 \leq r - k \lt 1$ since $0 \leq r - k$ since $r$ is larger than $k$ and $r - k \lt 1$ since if it weren't, then $1 \leq r - k$ and $k + 1$ would be a larger integer smaller than $r$; a contradiction. $\blacksquare$

**b.** Show that every element of $\mathbb Q/\mathbb Z$ has finite order, but there are elements of arbitrarily large order.

*Proof*: Every element $a/b + \mathbb Z$ has finite order since $b(a/b) \in \mathbb Z$. The order is $\operatorname{lcm}(a, b)$, so orders can be made arbitrarily large by choosing $a, b$ with arbitrarily large LCMs. $\blacksquare$

**c.**: Show that $\mathbb Q/\mathbb Z$ is the torsion subgroup of $\mathbb R/\mathbb Z$.

*Proof*: If $r + \mathbb Z$ where $r \in \mathbb R$ is irrational, then $kr \neq n$ for any $n \in \mathbb Z$ for all $k \in \mathbb Z$ since if it did, then $r = k/n$, contradicting that $r$ is irrational. $\blacksquare$

**Exercise 15**: Prove that the quotient of a divisible abelian group by any proper subgroup is also divisible.

*Proof*: Let $G$ be a divisible abelian group with $H \lt G$. Let $X \in G/H$ and $k \in \mathbb Z$. Let $x \in X$ and $y \in Y$ such that $y^k = x$, by divisibility. Then $Y^k = (yH)^k = xH = X$. $\blacksquare$

**Exercise 16**: Let $G$ be a group and $N \trianglelefteq G$. Define $\overline G = G/N$. Show that if $G = \langle S \rangle$ for any $S \subseteq G$, then $\overline G = \langle \overline S \rangle$.

*Proof*: Let $X \in \overline G$ and $x \in X$. Then $x$ is some finite product of elements in $S$. So $X$ is some finite product of elements in $\overline S$ since $aNbN = abN$. So $X \in \langle \overline S \rangle$ and $\overline G \subseteq \langle \overline S \rangle$. Similar in the opposite direction. $\blacksquare$

**Exercise 36**: Prove that if $G/Z(G)$ is cyclic then $G$ is abelian.

*Proof*: Let $g \in G$. Since $G/Z(G)$ is cyclic, $g \in gZ(G) = x^aZ(G)$ for some $x \in G$ and $a \in \mathbb Z$. So $g = x^az$ for some $z \in Z(G)$. Similarily, $h = x^bz'$. So $gh = x^azx^bz' = x^ax^bzz' = x^bz'x^az = hg$. $\blacksquare$

**Exercise 42**: Let $H, K \trianglelefteq G$ with $H \cap K = 1$. Prove that $xy = yx$ for all $x \in H$ and $y \in K$.

*Proof*: Let $x \in H, y \in K$. Then $x^{-1}y^{-1}xy = x^{-1}h \in H$ where $h = y^{-1}xy \in H$ by normality of $H$. Similarily, $x^{-1}y^{-1}xy = ky \in K$ where $k = x^{-1}y^{-1}x \in K$ by normality of $K$. So $x^{-1}y^{-1}xy \in H \cap K = 1$, so $xy = yx$. $\blacksquare$

## More on Cosets and Lagrange's Theorem

**Theorem 8 (Lagrange's Theorem)**: If $G$ is a finite group and $H$ is a subgroup of $G$, then the order of $H$ divides the order of $G$, and the number of left cosets of $H$ in $G$ equals $\vert G \vert/\vert H \vert$.

*Proof*: By Proposition 4, the cosets of $H$ define a partition over $G$, so it suffices to show that $\vert gH \vert = \vert H \vert$ for any coset $gH$. Define $\sigma_g: H \to gH$ as $h \mapsto gh$, which is surjective since $gh = \sigma_g(h)$ and injective since if $gh = gh'$ then $h = h'$ by cancellation. So $\vert G \vert = k\vert H \vert$, where $k$ is the number of cosets of $H$.

Consequently, $k = \vert G \vert / \vert H \vert$. $\blacksquare$

**Definition**: If $G$ is a group and $H \leq G$, the number of left cosets of $H$ in $G$ is called the **index** of $H$ in $G$ and denoted $\vert G : H \vert$.

**Corollary 9**: If $G$ is a finite group and $x \in G$, then the order of $x$ divides the order of $G$.

*Proof*: $\langle x \rangle$ is a subgroup of $G$, so $\vert \langle x \rangle \vert = \vert x \vert \mid \vert G \vert$. $\blacksquare$

**Corollary 10**: If $G$ is a group of prime order $p$, then $G$ is cyclic.

*Proof*: $G$ must not be trivial, so let $x \in G - \lbrace 0 \rbrace$. Then by Lagrange's, $\vert \langle x \rangle \vert = p$ (not 1 since $x \neq 1$), so $\langle x \rangle = G$.

**Example**: Any subgroup $H \leq G$ of index 2 is normal in $G$.

*Proof*: Consider the 2 cosets of $H$, $H$ and $gH$. Since cosets form a partition, $gH = G - H$. Similarily, the 2 right cosets of $H$ are $H$ and $Hg$, and $Hg = G - H$. $gH = Hg$ so $H$ is normal. $\blacksquare$

**Theorem 11 (Cauchy's Theorem)**: If $G$ is a finite group and $p$ is a prime dividing $\vert G \vert$, then $G$ has an element of order $p$.

*Proof*: Later. $\blacksquare$

**Theorem 12 (Sylow)**: If $G$ is a finite group of order $p^\alpha m$, where $p$ is prime and $p \nmid m$, then $G$ has a subgroup of order $p^\alpha$.

*Proof*: Later. $\blacksquare$

**Definition**: Let $H$ and $K$ be subgroups of a group. Then the **direct product** $HK = \lbrace hk \mid h \in H, k \in K \rbrace$.

**Proposition 13**: If $H$ and $K$ are finite subgroups of a group, then

$$
\vert HK \vert = \frac{\vert H \vert \vert K \vert}{\vert H \cap K \vert}
$$

*Proof*: Note that $HK = \bigcup_{h \in H} hK$. The distinct cosets of $hK$ are the distinct cosets of $h(H \cap K)$, since if $h_1, h_2 \in K$ then $h_1K = h_2K$. By Lagrange's Theorem, $\vert H : H \cap K\vert = \vert H \vert/\vert H \cap K \vert$. We showed in the proof of Lagrange's Theorem that $\vert hK \vert = \vert K \vert$. Multiplying the number of distinct cosets by the order of each coset gives the result. $\blacksquare$

**Proposition 14**: If $H$ and $K$ are subgroups of a group, $HK$ is a subgroup if and only if $HK = KH$.

*Proof*: Suppose $HK = KH$. First note that $HK$ is non-empty since $H$ and $K$ are non-empty. Let $a, b \in HK$. Then $ab^{-1} = hkk'^{-1}h'^{-1}$ for some $h, h' \in H$ and $k, k' \in K$. Since $KH = HK$, $kk'^{-1}h'^{-1} = h^\star k^\star$ for some $h^\star \in H$ and $k^\star \in K$. So $ab^{-1} \in HK$, and $HK$ is a subgroup by the subgroup criterion.

Now suppose $HK$ is a subgroup. Let $x \in HK$. Since $HK$ is a subgroup, $x = (hk)^{-1}$ for some $hk \in HK$. Then $x^{-1} = (h'k')^{-1} = k'^{-1}h'^{-1} \in KH$, so $HK \subseteq KH$. A symmetric argument shows $KH \subseteq HK$.
$\blacksquare$

**Definition**: If $A \subseteq N_G(K)$ (or $C_G(K)$), then $A$ **normalizes** $K$ (**centralizes** $K$).

**Corollary 15**: If $H$ and $K$ are subgroups of $G$ and $H$ normalizes $K$, then $HK \leq G$.

*Proof*: Let $hk \in HK$. Since $H$ normalizes $K$, $k = h^{-1}k'h$ for some $k'$, so $hk = hh^{-1}k'h = k'h \in KH$ so $HK \subseteq KH$. Similarily $KH \subseteq HK$, so by Proposition 14, $HK \leq G$. $\blacksquare$

Some properties shown in the exercises:
* If a subgroup is the sole subgroup of its order, then it is normal. (Exercise 5)
* Let $K \leq H \leq G$ where $H$ has finite index in $G$. Then $\vert G : K\vert = \vert G : H\vert\vert H : K\vert$. (Exercise 11).
* The number of left cosets equals the number of right cosets by the correspondence $x \mapsto x^{-1}$ (Exercise 12).

### Exercises

**Exercise 1**: Only the orders $n$ that divide 120, and their corresponding index is $120/n$.

**Exercise 4**: Show that if $\vert G \vert = pq$ for some primes $p, q$ (not necessarily distinct), then $G$ is abelian or $Z(G) = 1$.

*Proof*: By Lagrange's theorem, the order of $Z(G)$ is either $pq, p, q$ or 1. If the order is $pq$, then $Z(G) = G$ so $G$ is Abelian. If it is $p$ (or $q$), then $\vert G/Z(G) \vert = q$ (or $p$), so it is cyclic and thus Abelian by Corollary 10. Thus, $G$ is either Abelian or $\vert Z(G) \vert = 1$ so $Z(G) = 1$. $\blacksquare$

**Exercise 5**: Let $H$ be a subgroup of $G$ and let $g \in G$.

**a.** Prove that $gHg^{-1}$ is a subgroup of $G$ and of same order as $H$.

*Proof*: $H' = gHg^{-1}$ is non-empty since $H$ is non-empty. Let $a, b \in H'$. Then $ab^{-1} = (gxg^{-1})(gyg^{-1}) = gxyg^{-1} \in H'$ for some $x, y \in H$. So $H'$ is a subgroup. To show that $\vert H' \vert = \vert H \vert$, define the map $\phi: H \to H'$ as $h \mapsto ghg^{-1}$, which can easily be shown to be an isomorphism. $\blacksquare$

**b.** Deduce that if $n \in \mathbb Z^+$ and $H$ is the unique subgroup of $G$ of order $n$ then $H \trianglelefteq G$. 

*Proof*: By (a), $gHg^{-1}$ is a subgroup of $G$ of order $n$, so $H = gHg^{-1}$. $\blacksquare$

**Exercise 6**: Let $H \leq G$ and let $g \in G$. Prove that if $Hg$ equals some left coset of $H$, then $Hg = gH$ and $g \in N_G(H)$.

*Proof*: Suppose $Hg = xH$ where $x \in G$. Note that $g \in gH$ and $g \in Hg$ since $1 \in H$, so $g \in xH$. Since $xH$ and $gH$ share an element, $gH = xH$. So $Hg = gH$ and $g$ normalizes $H$. $\blacksquare$

**Exercise 8**: Prove that if $H$ and $K$ are finite subgroups of $G$ whose orders are relatively prime then $H \cap K = 1$.

*Proof*: Since $H \cap K$ is a subgroup of $H$ and of $K$, if $\vert H \cap K \vert = n \neq 1$, then by Lagrange's, $n$ divides $H$ and $K$, so their orders are not relatively prime. $\blacksquare$

**Exercise 10**: Suppose $H$ and $K$ are subgroups of finite index $m$, $n$, respectively, in $G$ (possibly infinite). Prove that $\operatorname{lcm}(m,n) \leq \vert G : H \cap K \vert \leq mn$.

*Proof*: First, note that $a(H \cap K) = aH \cap aK$, so the number of cosets of $H \cap K$ is at most the product of the number of cosets of $aH$ and of $aK$, that is, $mn$. For the lower bound, note that since $H \cap K \leq H$ and $H \cap K \leq K$,

$$
\vert G : H \cap K\vert = \vert G : K\vert\vert K : H \cap K\vert = \vert G : H\vert\vert H : H \cap K\vert
$$

since $H \cap K$ partitions $H$ which partitions $G$ (likewise for $H \cap K$ paritioning $K$ partitioning $G$) (see Exercise 11 for a complete proof). So $m$ and $n$ divide $\vert G : H \cap K\vert$, so $\operatorname{lcm}(m, n) \leq \vert G : H \cap K\vert$. $\blacksquare$

**Exercise 11**: Let $H \leq K \leq G$. Prove that $\vert G : H \vert = \vert G : K \vert \cdot \vert K : H \vert$.

*Proof*: Let $n = \vert G : K \vert, m = \vert K : H \vert$. We have

$$
\begin{align*}
G = \bigsqcup_{g \in G} gK = \bigsqcup_{g \in G}g\bigsqcup_{k \in K}kH = \bigsqcup_{g \in G, k \in K} gkH
\end{align*}
$$

and there are $mn$ distinct cosets of $gkH$. $\blacksquare$

**Exercise 12**: Let $H \leq G$. Prove that $x \mapsto x^{-1}$ maps each left coset of $H$ in $G$ onto a right coset of $H$ and gives a bijection between the set of left cosets and the set of right cosets of $H$ in $G$.

*Proof*: Let $g \in G$ and $x \in Hg$. Then $x = hg$ for some $h \in H$, so $x^{-1} = g^{-1}h^{-1} \in g^{-1}H$, so the mapping is surjective. Now suppose $hg = h'g$. Then, taking the inverse of both sides, shows $g^{-1}h^{-1} = g^{-1}h'^{-1}$, so the mapping is injective. Thus it is bijective. $\blacksquare$

## The Isomorphism Theorems

**Theorem 16 (The First Isomorphism Theorem)**: If $\phi: G \to H$ is a homomorphism of groups, then $\operatorname{ker} \phi \trianglelefteq G$ and $G/\operatorname{ker}\phi \cong \phi(G)$.

*Proof*: The first statement is Proposition 7, and the second is Theorem 3 and Proposition 5. $\blacksquare$

**Corollary 17**: Let $\varphi: G \to H$ be a homomorphism of groups.
1. $\varphi$ is injective if and only if $\operatorname{ker} \varphi = 1$.
2. $\vert G : \operatorname{ker} \varphi \vert = \vert \varphi(G) \vert$

*Proof*: $(1)$ Suppose $\varphi$ is injective. Then for $a \in G$, $\phi(a) = 1$ if and only if $a = 1$ since $\varphi(1) = 1$. Conversely, suppose the kernel is trivial. Then $G/1 = G \cong \varphi(G)$ by the First Isomorphism Theorem, so $\varphi$ is bijective (and thus injective).

$(2)$ $\vert G : \operatorname{ker} \varphi \vert = \vert G/\operatorname{ker} \varphi \vert = \vert \varphi(G) \vert$ since $G/\operatorname{ker} \varphi \cong \varphi(G)$ by the First Isomorphism Theorem. $\blacksquare$.

**Theorem 18 (The Second Isomorphism Theorem)**: Let $G$ be a group, $A, B \leq G$, and $A \leq N_G(B)$. Then $AB \leq G$, $B \trianglelefteq AB$, $A \cap B \trianglelefteq A$, and $AB/B \cong A/A \cap B$.

*Proof*: $AB \leq G$ since $A \leq N_G(B)$ by Corollary 15.

We have $B \trianglelefteq A$, so $(ab)B(ab)^{-1} = abBb^{-1}a^{-1} \subseteq aBa^{-1}\subseteq B$ for $ab \in AB$, so $B \trianglelefteq AB$ by Theorem 6.

Define $\varphi: A \to AB/B$ as $\varphi(a) = aB$. It is surjective since if $abB \in AB/B$, then $\varphi(a) = abB = aB$. It is also a homomorphism since $\varphi(aa') = (aa')B = aBa'B = \varphi(a)\varphi(a')$. The identity is $1B$, which is mapped to when $a \in B$, so $\operatorname{ker} \varphi = B$. Thus by the First Isomorphism Theorem, $AB/B \cong A/A \cap B$, and $A \cap B \trianglelefteq A$ by Proposition 7. $\blacksquare$

**Theorem 19 (The Third Isomorphism Theorem)**: Let $G$ be a group and $H, K \trianglelefteq G$ with $H \leq K$. Then $K/H \trianglelefteq G/H$ and

$$
(G/H)/(K/H) \cong G/K
$$

*Proof*: Define a map $\varphi: G/H \to G/K$ as $\varphi(gH) = gK$. It is well-defined since if $gH = g'H$ then $gK = g'K$ since if $g \in H$ then $g \in K$ since $H \leq K$ (and likewise for $g'$). It is surjective since $g$ may be chosen arbitrarily. Finally, $\operatorname{ker} \varphi = K/H$ since if $kH \in K/H$ then $\varphi(kH) = kK = K$ since $k \in K$, and conversely, if $\varphi(gH) = K$ for $gH \in G/H$ then $g \in K$, that is, $gH \in G/K$. So by the First Isomorphism Theorem, the statement holds and $K/H \trianglelefteq G/H$ by Proposition 7. $\blacksquare$

**Theorem 20 (Fourth Isomoprhism Theorem) (Correspondence Theorem) (Lattice Isomorphism Theorem)**: Let $G$ be a group and $N \trianglelefteq G$. Then there is a bijection between the set of subgroups $A$ of $G$ containing $N$ and the set of subgroups $A/N$ of $G/N$. In particular, for all $A, B \leq G$ and $N \leq A, N \leq B$,
1. $A \leq B$ if and only if $\overline A \leq \overline B$
2. If $A \leq B$, then $\vert B : A \vert = \vert \overline B : \overline A \vert$
3. $\overline{\langle A, B \rangle} = \langle \overline A, \overline B \rangle$
4. $\overline{(A \cap B)} = \overline A \cap \overline B$
5. $A \trianglelefteq G$ if and only if $\overline A \trianglelefteq \overline G$.

where $\overline X := X/N$ for some group $X$.

*Proof*: Let $X^\star$ be the set of subgroups $A$ of $G$ containing $N$ and $Y^\star$ the set of subgroups $A/N$ of $G/N$. Define $\varphi: X^\star \to Y^\star$ as $\varphi(A) = \pi(A)$. It is surjective since the complete preimage of a subgroup in $G/N$ is a subgroup in $G$ (by Exercise 1 in "Definition and Examples"). It is injective since if $\pi(A) = \pi(A')$ then $A = \pi^{-1}(\pi(A)) = \pi^{-1}(\pi(A')) = A'$. So $\varphi$ is bijective.

$(1)$ Suppose $A \leq B$. $\overline A$ is non-empty since $1 \in A$, so $\pi(1) \in \overline A$. Let $aN, a'N \in \overline A$. Then $(aN)(a'N)^{-1} \in \overline A$ since $A$ is a subgroup, so $\overline A \leq \overline B$.

Now suppose $\overline A \leq \overline B$. $A$ is non-empty since $1 \in \overline A$ so $\pi^{-1}(1) \in A$. Let $a, a' \in A$. Then $aa'^{-1} = \pi^{-1}(aN)\pi^{-1}((a'N)^{-1}) = \pi^{-1}((aa'^{-1})N) \in A$ since $\overline A \leq \overline B$. So $A \leq B$.

$(2)$ Suppose $A \leq B$. Define a mapping from the cosets in $B/A$ to the cosets of $\overline B/\overline A$ as $bA \mapsto (bN)\overline A$. It is injective and well-defined since

$$
\begin{align*}
    bA = b'A 
    &\iff b'^{-1}b \in A \\
    &\iff b'^{-1}bN \in \overline A \\
    &\iff (bN)\overline A = (b'N)\overline A
\end{align*}
$$

and it is surjective since $B$ ranges over all values of $b$ in $(bN)\overline A$.

$(3)$ We have

$$
\begin{align*}
    \overline X \in \overline{\langle A, B \rangle}
    &\iff \overline X = (x_1 \dots x_n)N \\
    &\iff \overline X = (x_1N)\dots(x_nN) \\
    &\iff \overline X \in \langle \overline A, \overline B \rangle
\end{align*}
$$

where $x_1, x_2, \dots, x_n \in A \cup B$.

$(4)$ We have

$$
\begin{align*}
    xN \in \overline{A \cap B}
    &\iff x \in A \cap B \\
    &\iff xN \in \overline A \land xN \in \overline B \\
    &\iff xN \in \overline A \cap \overline B.
\end{align*}
$$

$(5)$ Suppose $A \trianglelefteq G$. Let $gN \in \overline G$ and $aN \in \overline A$. Then $(gN)(aN)(gN)^{-1} = (gag^{-1})N = N$. For the converse, suppose $\overline A \trianglelefteq \overline G$ and let $a \in A$ and $g \in G$. Then $gag^{-1} \in \pi^{-1}(gN)\pi^{-1}(aN)\pi^{-1}((gN)^{-1}) = \pi^{-1}(gag^{-1}N) = \pi^{-1}(N) = A$, where $\pi$ is the natural projection.

$\blacksquare$

**Proposition**: Let $N \trianglelefteq G$ and $\varphi$ a homomorphism on $G/N$ whose value for some coset $gN$ depends only on $g$. Define $\phi$ as a homomorphism on $G$ with $\phi(g) = \varphi(\pi(g))$, where $\pi$ is the natural projection. Then $\varphi$ is well-defined if and only if $N \leq \operatorname{ker}{\phi}$.

*Proof*: Suppose $N \leq \operatorname{ker}\phi$. Let $gN = g'N \in G/N$. Then $g'^{-1}g \in N$, so $g'^{-1}g \in \operatorname{ker}\phi$, so $\phi(g'^{-1}g) = \varphi(g'^{-1}gN) = 1$, so $\varphi(g'^{-1}N) = \varphi(g^{-1}N)$.

Suppose now that $\varphi$ is well-defined. First note that $N \subseteq \operatorname{ker}\phi$ since if it weren't, then given $gN = g'N$, one may have $g'^{-1}g \in N - \operatorname{ker} \phi$, so $\phi(g'^{-1}g) =\varphi(g'^{-1}gN) = x \neq 1$, thus $\varphi(g'^{-1}N) = x\varphi(gN)$ with $x \neq 1$, so $\varphi(g'^{-1}N) \neq \varphi(gN)$, violating the well-definedness of $\varphi$. Finally, since $N \trianglelefteq G$, $N$ is a group so $N \leq \operatorname{ker} \phi$.

$\blacksquare$

### Exercises

**Exercise 1**: Let $F$ be a finite field of order $q$ and let $n \in \mathbb Z^+$. Prove that $\vert GL_n(F) : SL_n(F) \vert = q - 1$.

*Proof*: Define $\varphi: GL_n(F) \to F - \lbrace 0 \rbrace$ as $\varphi(M) = \det M$. It is a homomorphism since $\det(M)\det(M') = \det(MM')$ and it is surjective since given some $d \in F$, a matrix $M \in GL_n(F)$ with identical entries to the identity matrix, except for $M_{00} = d$, has determinant $d$ (the product of the entries along the diagonal). The kernel of $\varphi$ is the set of matrices with determinant 1, that is, $SL_n(F)$. So by the First Isomorphism Theorem, $GL_n(F)/SL_n(F) \cong F$, so $\vert GL_n(F) : SL_n(F) \vert = \vert F - \lbrace 0 \rbrace \vert = q - 1$. $\blacksquare$

**Exercise 2**: Prove all parts of the Lattice Isomorphism Theorem (proved above).

**Exercise 3**: Prove that if $H$ is a normal subgroup of $G$ of prime index $p$ then for all $K \leq G$, either ($K \leq H$) or ($G = HK$ and $\vert K : K \cap H \vert = p$).

*Proof*: Suppose $K \nleq H$. By Corollary 15, $HK \leq G$, so $H \leq HK \leq G$. We have $[G : H] = p = [G : HK][HK : H]$ by Exercise 11 in "More on Cosets and Lagrange's Theorem", so either $[G : HK] = 1$, in which case $G = HK$, or $[G : HK] = p$. If $[G : HK] = p$, then $[HK : H] = 1$, but then $HK = H$ and $K \leq HK = H$; a contradiction. So $[G : HK] = 1$ and $G = HK$.

To show that $[K : K \cap H] = p$, note that by the Second Isomorphism Theorem, $HK/H \cong K/(K \cap H)$, and since $[HK : H] = p$, $[K : K \cap H] = p$. $\blacksquare$

**Exercise 4**: Let $C \trianglelefteq A$ and $D \trianglelefteq B$. Prove that $(C \times D) \trianglelefteq (A \times B)$ and $(A \times B)/(C \times D) \cong (A/C) \times (B/ D)$.

*Proof*: Define $\varphi: A \times B \to A/C \times B/D$ as $\varphi((a, b)) = (aC, bD)$. It is a surjective homomorphism with kernel $C \times D$, so by the First Isomorphism Theorem and Proposition 7, both statements hold. $\blacksquare$

**Exercise 7**: Let $M$ and $N$ be normal subgroups of $G$ such that $G = MN$. Prove that $G/(M \cap N) \cong (G/M) \times (G/N)$.

*Proof*: By the Second Isomorphism Theorem, $G/M = MN/M \cong N/(M \cap N)$ and $G/N = MN/N \cong M/(M\cap N)$. So let $\varphi: M/(M \cap N) \times N/(M \cap N) \to G/(M \cap N)$ be defined as $\varphi: (m(M \cap N), n(M \cap N)) \mapsto mn(M \cap N)$. It is a surjective homomorphism since $G = MN$ and the kernel is $(M \cap N)$, so by the First Isomorphism Theorem, the statement holds. $\blacksquare$

## Composition Series and the Holder Program

**Proposition 21 (Cauchy's Theorem)**: If $G$ is a finite abelian group and $p$ is a prime dividing $\vert G \vert$, then $G$ contains an element of order $p$.

*Proof*: By induction. Let $G$ be a finite abelian group of order $n > 1$. Suppose the statement holds for all such groups with order less than $n$. Since $n > 1$, there is an $x \in G$ with $x \neq 1$. If $n = p$ then $\vert x \vert = p$ by Lagrange's and we are done.

So suppose $n > p$. Choose $x \in G$ and define $H = \langle x \rangle$ with $m = \vert H \vert$. If $p$ divides $m$ then $m = kp$ and $\vert x^k \vert = p$. So suppose $p$ does not divide $m$. $m$ divides $n$ by Lagrange's and is normal in $G$ since it is abelian. So $G/H$ is defined and $\vert G/H \vert = n/m$. Since $p$ does not divide $m$ and it divides $n$, it divides $n/m$ so $G/H$ contains an element, call it $yN$, of order $p$ by the inductive hypothesis. Since $\vert yN \vert \neq 1$ we have $y \not\in N$, but $y^p \in N$ since $(yN)^p = 1$. We have $\langle y^p \rangle \leq \langle y \rangle$ so $\vert y^p \vert \leq \vert y \vert$. Also $\langle y^p \rangle \leq N$ but $\langle y \rangle \nleq N$, so $\langle y^p \rangle \neq \langle y \rangle$ so $\vert y^p \vert \neq \vert y \vert$. So $\vert y^p \vert \lt \vert y \vert$. But by Proposition 2.5, $\vert y^p \vert = \vert y \vert/(\vert y \vert, p)$. $\vert y^p \vert \lt \vert y \vert$ so $(\vert y \vert, p) > 1$, so $p \mid \vert y \vert$ since $p$ is prime. So $lp = \vert y \vert$ for some integer $l$, so $y^l$ has order $p$ in $G$. $\blacksquare$

**Definition**: A group $G$ is called **simple** if $\vert G \vert \gt 1$ and the only normal subgroups of $G$ are $1$ and $G$.

**Definition**: In a group $G$, a sequence of subgroups

$$
1 = N_0 \leq N_1 \leq \dots \leq N_k = G
$$

is called a **composition series** if $N_i \trianglelefteq N_{i + 1}$ and $N_{i + 1}/N_i$ is a simple group for $0 \leq i \leq k - 1$. Then, the quotient groups $N_{i + 1}/N_i$ are called **composition factors** of $G$.

**Theorem 22 (Jordan-Holder)**: Let $G$ be a finite, non-trivial group. Then
1. $G$ has a composition series and
2. The composition factors in a composition series are unique. That is, any two composition series for $G$ is the same length and there is a one-to-one congruence of each composition factor between each series.

*Proof*: $(1)$ We induct on $\vert G \vert = n$. The base case of $n = 2$ holds since if $n = 2$ then $G = Z_2$ and $1 \leq Z_2$ is a composition series for $Z_2$. For the inductive step, suppose $n > 2$. If $G$ has no nontrivial proper normal subgroups, then $1 \leq G$ is a composition series so suppose otherwise. Let $N$ be such a normal subgroup. Then $\vert G/N \vert \leq \vert G \vert$ so by the inductive hypothesis, $G/N = \overline G$ has a composition series $\overline{G_1}, \dots, \overline{G_N}$. By the Lattice Isomorphism Theorem, there is some $G_i \leq G$ for each $\overline {G_i} \leq \overline G$, and $G_i \trianglelefteq G_{i + 1}$ for all $0 \leq i \lt n$ with $G_n = G$. Finally, by the Third Isomorphism Theorem, $\overline{G_{i + 1}}/\overline{G_i} \cong G_{i + 1}/G_i$, so each composition factor is simple. So $G_1, \dots, G_n$ is a composition series for $G$.

$(2)$ TODO.

**Theorem**: There are 18 (infinite) families of simple groups and 26 simple groups not belonging to these families, called the **sporadic** simple group, such that every finite simple group is isomorphic to one of the groups in the list.

**Theorem (Feit-Thompson)**: If $G$ is a simple group of odd order, then $G \cong Z_p$ for some prime $p$.

*Proof*: Out of scope (understatement).

**Definition**: A group $G$ is **solvable** if there is a chain of subgroups

$$
1 = G_0 \trianglelefteq G_1 \trianglelefteq \dots \trianglelefteq G_s = G
$$

such that $G_{i + 1}/G_i$ is abelian for $0 \leq i \lt s$.

**Proposition**: If $N$ and $G/N$ are solvable, then $G$ is solvable.

*Proof*: Let $\overline G = G/N$ and $1 = N_0 \trianglelefteq N_1 \dots \trianglelefteq N_n = N$ and $1 = \overline G_0 \trianglelefteq \overline G_1 \trianglelefteq \dots \trianglelefteq \overline G_m = \overline G$ be the composition series with abelian factors for $N$ and $\overline G$, respectively. By the Fourth Isomorphism Theorem, $\overline G_i \cong G_i/N$ for some subgroups $G_i$ of $G$ with $N \trianglelefteq G$ and $G_i \trianglelefteq G_{i + 1}$ for $0 \leq i \lt m$. By the Third Isomorphism Theorem, $\overline G_{i + 1}/\overline G \cong G_{i + 1}/G_i$ so $G_{i + 1}/G_i$ is abelian. Thus

$$
1 = N_0 \trianglelefteq N_1 \trianglelefteq \dots \trianglelefteq N_n = N = G_0 \trianglelefteq G_1 \trianglelefteq \dots \trianglelefteq G_m = G
$$

is a composition series with abelian composition factors. Thus $G$ is solvable. $\blacksquare$

Many important properties are shown in the exercises, such as:
* If $G$ is an abelian simple group, then $G \cong Z_p$ for some prime $p$ (Exercise 1).
* A finite abelian group has a subgroup of order $n$ for each positive divisor $n$ of its order. (Exercise 4).
* Subgroups and quotient groups of a solvable group are solvable (Exercise 5).
* If $G$ is a finite group and $H \trianglelefteq G$, there is a composition series of $G$, one of whose terms is $H$ (Exercise 7)
* $G$ being a finite group is equivalent to all of the following: (Exercise 8)
  * $G$ is solvable
  * $G$ has a chain of subgroups with cyclic factors
  * All composition factors of $G$ are of prime order
  * $G$ has a chain of normal subgroups with abelian factors 

### Exercises

**Exercise 1**: Prove that if $G$ is an abelian simple group then $G \cong Z_p$ for some prime $p$ ($G$ is not necessarily finite).

*Proof*: If $G$ is an abelian simple group, then for $\langle x \rangle \leq G$ for $x \in G - \lbrace 1 \rbrace$ we have $\langle x \rangle = G$, since otherwise $\langle x \rangle$ would be a normal proper subgroup of $G$; a contradiction. So $G$ is cyclic and $G \cong Z_n$ for some $n$. If $n$ were not prime, then $\langle d \rangle$ is a proper subgroup of $Z_n$; a contradiction. So $G \cong Z_p$ for some prime $p$. $\blacksquare$

**Exercise 2**: Exhibit all 3 composition series for $Q_8$ and all 7 composition series for $D_8$. List the composition factors in each case.

The composition series for each is every path from 1 to $Q_8$ (or $D_8$) in the lattice structure. For $D_8$:

| Composition Series | Composition Factors |
| ------------------ | ------------------- |
| $1, \langle r^2 \rangle, \langle r \rangle, D_8$ | $Z_2, Z_2, Z_2$|
|$1, \langle s \rangle, D_4, D_8$| as above|
|$1, \langle r^2s \rangle, D_4, D_8$| as above|
|$1, \langle r^2 \rangle, D_4, D_8$| as above|
|$1, \langle r^2 \rangle, D_4', D_8$| as above|
| $\dots$ | $\dots$

**Exercise 4**: Use Cauchy's Theorem and induction to show that a finite abelian group has a subgroup of order $d$ for each positive divisor $d$ of its order.

*Proof*: By induction. The base case is when $\vert G \vert = 1$ which is trivial. For the inductive step, suppose $\vert G \vert = n$. Let $d$ be a divisor of $n$. $d = kp$ for some prime $p$, so $p \mid n$ and by Cauchy's Theorem there exists a subgroup $H \leq G$ of order $p$. Since $G$ is abelian, $H$ is normal, so take $G/H$ with order $n/p$. By the inductive hypothesis, let $K/H \leq G/H$ with order $d/p$. By the Correspondence Theorem, $\vert K \vert = \vert H \vert d/p = d$. So $K \leq G$ with order $d$. $\blacksquare$

**Exercise 5**: Prove that subgroups and quotient groups of a solvable group are solvable.

*Proof*: Let $G$ be solvable with a series $G_1, \dots G_n$ and $H \leq G$. We show that $H$ is solvable with series $H_i = G_i \cap H$, $0 \leq i \leq n$. Note that $H_{i} = G_i \cap H = (G_{i + 1} \cap H) \cap G_i$. So by the Second Isomorphism Theorem,

$$
\frac{H_{i + 1}}{H_i} = \frac{G_{i + 1} \cap H}{(G_{i + 1} \cap H) \cap G_i} \cong \frac{(G_{i + 1} \cap H)G_i}{G_i}
$$

so $H_{i} \trianglelefteq H_{i + 1}$. Also, $(G_{i + 1} \cap H)G_i \leq G_{i + 1}$, so by the Lattice Isomorphism Theorem, $\frac{(G_{i + 1} \cap H)G_i}{G_i} \leq G_{i + 1}/G_i$. so $H_{i + 1}/H_i$ is abelian.

For the quotient group of a solvable group, let $G$ be solvable with series $G_1, \dots, G_n$ and $N \trianglelefteq G$. Define $\overline G = G/N$. $\overline G$ is solvable with series $\overline G_1, \dots, \overline G_n$ since by the Lattice Isomorphism Theorem, $\overline{G_{i}} \trianglelefteq \overline{G_{i + 1}}$ since $G_{i} \trianglelefteq G_{i + 1}$, and $\overline{ G_{i + 1}} / \overline {G_i}$ is abelian since by the Third Isomorphism Theorem, $\overline{ G_{i + 1}}/\overline {G_i} \cong G_{i + 1}/G_i$. $\blacksquare$ 

**Exercise 6**: Proof of $(1)$ of Jordan-Holder.

**Exercise 7**: If $G$ is a finite group and $H \trianglelefteq G$, prove that there is a composition series of $G$, one of whose terms is $H$.

*Proof*: By $(1)$ of Jordan-Holder, $H$ has a composition series $1 = H_1 \trianglelefteq \dots \trianglelefteq H_n = H$. Since $H \trianglelefteq G$, $\overline G = G/H$ is well-defined and also has a composition series $1 = \overline{G_1} \trianglelefteq \dots \trianglelefteq \overline{G_m} = \overline G$. By the Third and Fourth Isomorphism Theorems, there is a $G_i \leq G$ such that $\overline G_i = G_i/N$ and $H = G_1 \trianglelefteq \dots \trianglelefteq G_m = G$ is a composition series from $H$ to $G$ (see the proof of $(1)$ of Jordan-Holder). So

$$
1 = H_1 \trianglelefteq \dots \trianglelefteq H_n = H = G_1 \trianglelefteq \dots \trianglelefteq G_m = G
$$

is a composition series for $G$, one of whose terms is $H$. $\blacksquare$

**Exercise 8**: Let $G$ be a finite group. Prove that the following are equivalent.
1. $G$ is solvable.
2. $G$ has a chain of subgroups $1 = H_0 \trianglelefteq \dots \trianglelefteq H_s = G$ such that $H_{i + 1}/H_i$ is cyclic for $0 \leq i \leq s - i$.
3. All composition factors of $G$ are of prime order.
4. $G$ has a chain of subgroups $1 = N_0 \trianglelefteq \dots \trianglelefteq N_t = G$ such that each $N_i \trianglelefteq G$ and $N_{i + 1}/N_i$ is abelian, $0 \leq i \leq t - i$.

*Proof*: $(1 \to 2)$ Suppose $G$ is solvable with series $1 = H_0 \trianglelefteq \dots \trianglelefteq H_s = G$ where $s$ is maximal. Suppose there is a factor $H_{i + 1}/H_i$ that is non-cyclic. Then, it has a cyclic proper subgroup $X/H_i$. Since the factors are abelian, $X/H_i \trianglelefteq H_{i + 1}/H_i$, so by the Lattice Isormorphism Theorem, $X \trianglelefteq H_{i + 1}$. So $X$ can be placed in between $H_i$ and $H_{i + 1}$ in the series, contradicting that $s$ is maximal. So every factor is cyclic.

$(2 \to 3)$ Let $1 = H_0 \trianglelefteq \dots \trianglelefteq H_s = G$ be the subnormal series existing by the assumption with maximal $s$. Suppose there is a quotient $H/N$ that is not of prime order. Since it is cyclic, there is a subgroup $M/N \trianglelefteq H/N$, so $N \trianglelefteq M \trianglelefteq H$, so $M$ may be added to the subnormal series between $N$ and $H$, contradicting that $s$ is maximal. So every quotient is of prime order. Every quotient is prime and cyclic, so it is simple, so the series is a composition series with factors of prime order. By Jordan-Holder, this composition series is unique, so all composition factors are of prime order.

$(3 \to 4)$ TODO.

$(4 \to 1)$ TODO.

## Transpositions and the Alternating Group

### Transpositions and Generation of $S_n$

**Definition**: A 2-cycle is called a **transposition**.

**Proposition**: Every element of $S_n$ may be written as a product of transpositions.

*Proof*: Note that $(a_1a_2 \dots a_m) = (a_1a_m)(a_1a_{m - 1})\dots(a_1a_2)$ for any $m$-cycle, so we may write any element in $S_n$ as a product of cycles (its cycle decomposition), and then each of these cycles in turn as a product of transpositions as in the above. $\blacksquare$

**Example**: The product of transpositions for $\sigma = (1,12,8,10,4)(2,13)(5,11,7)(6,9)$ is

$$
\sigma = (1,4)(1,10)(1,8)(1,12)(2,13)(5,7)(5,11)(6,9)
$$

### The Alternating Group

**Definition**: Let $x_1, \dots, x_n$ be independent variables and

$$
\Delta = \prod_{1 \leq i \lt j \leq n}(x_i - x_j)
$$

and let $\sigma \in S_n$ act on $\Delta$ by permuting the variables by its indices as

$$
\sigma(\Delta) = \prod_{1 \leq i \lt j \leq n} \left(x_{\sigma(i)} - x_{\sigma(j)}\right).
$$

Now, define

$$
\epsilon(\sigma) = \begin{cases}
  1, &\sigma(\Delta) = \Delta \\
  -1, &\sigma(\Delta) = -\Delta
\end{cases}
$$

Then, $\epsilon(\sigma)$ is the **sign** of $\sigma$ and $\sigma$ is an **even permutation** if $\epsilon(\sigma) = 1$ and and **odd permutation** if $\epsilon(\sigma) = -1$.

**Proposition 23**: The map $\epsilon: S_n \to \lbrace \pm 1 \rbrace$ is a homomorphism.

*Proof*: Let $\sigma, \tau \in S_n$. Note that $\sigma(\Delta) = \epsilon(\sigma)\Delta$ and similarily $\tau(\Delta) = \epsilon(\tau)\Delta$. Then

$$
(\tau \sigma)(\Delta) = \epsilon(\sigma)\tau(\Delta)=\epsilon(\sigma)\epsilon(\tau)\Delta
$$

Thus $(\tau\sigma)(\Delta) = \epsilon(\sigma\tau)\Delta = \epsilon(\sigma)\epsilon(\tau)\Delta$, so $\epsilon(\sigma\tau) = \epsilon(\sigma)\epsilon(\tau)$. $\blacksquare$

**Proposition 25**: Transpositions are all odd permutations and $\epsilon$ is a surjctiv ehomomorphism.

*Proof*: Let $(a, b) \in S_n$, $1 \leq a,b \leq n$ be a transposition. Let $\lambda = (1,a)(2, b)$. Then $(a, b) = \lambda(1,2)\lambda$ so

$$
\begin{align*}
\epsilon((a, b)) &= \epsilon(\lambda(1, 2)\lambda)
&= \epsilon(\lambda)^2 \epsilon((1, 2)) \\
&= \epsilon((1, 2)) \\
&= -1
\end{align*}
$$

$\blacksquare$

**Definition**: The **alternating group of degree $n$**, denoted by $A_n$, is the kernel of $\epsilon$, that is, the set of even permutations.

**Remark**: The product of two permutations is even if and only if either both permutations are even or both are odd.

**Proposition 25**: The permutation of $\sigma$ is odd if and only if the number of cycles of even length in its cycle decomposition is odd.

*Proof*: A cycle of even length has an odd number of transpositions, so the cycle is odd. $(-1)^k = -1$ if and only if $k$ is odd. $\blacksquare$

Some useful tools used in the Exercises:
* Given two transpositions $(ab)$ and $(bc)$, we may construct $(ac)$ by conjugating $(bc)$ by $(ab)$. (Exercise 3, 4)

### Exercises

**Exercise 2**: Prove that $\sigma^2$ is an even permutation for every permutation $\sigma$.

*Proof*: $\epsilon(\sigma^2) = \epsilon(\sigma)\epsilon(\sigma) = 1$ for all $\epsilon(\sigma) \pm 1$. $\blacksquare$

**Exercise 3**: Prove that $S_n$ is generated by $\lbrace (i,i+1) \mid 1 \leq i \leq n - 1 \rbrace$.

*Proof*: We know that $S_n$ may be generated by any transposition. It suffices to show that the adjacent transpositions generate the set of transpositions. It is straightforward to show by induction that $(1, k) = (k,k-1)(1,k-1)(k,k-1)^{-1}$ for all $2 \leq k \leq n$, and similarily for $(2, k)$, $(3, k)$, etc. $\blacksquare$

**Exercise 4**: Show that $S_n = \langle (1,2), (1,2,3,\dots,n) \rangle$

*Proof*: $(1,2,\dots,n)$ can be represented as a product of adjacent transpositions $(1,2)(2,3)\dots(n - 1, n)$, from which the result follows from Exercise 3.

**Exercise 5**: Show that if $p$ is prime, then $S_p = \langle \sigma, \tau \rangle$ where $\sigma$ is any transposition and $\tau$ is any $p$-cycle.

*Proof*: Without loss of generality, let $\tau = (1, 2, \dots, p)$ and $\sigma = (a, b), 1 \leq a \lt b \leq p$. Let $d = b - a$. We may produce all $p$ transpositions of the form $(i, (i + d) \bmod p)$ with $\tau^{-i}\sigma\tau^i$ for all $0 \leq i \leq p$. Then, given two transpositions $\alpha = (1, (1 + d) \bmod p)$ and $\beta = ((1 + d) \bmod p, (1 + 2d) \bmod p)$, one has $\alpha_2 = (1, (1 + 2d) \bmod p) = \alpha^{-1}\beta\alpha$, and in general, $\alpha_k = (1, (1 + kd) \bmod p)$. By Bezout's Theorem, $kd \bmod p = 1$ for some $k$, so we have $(1, 2)$. Then, by Exercise 4, the statement follows. $\blacksquare$

**Exercise 6**: Show that $\langle (1\enspace 3), (1 \enspace 2 \enspace 3 \enspace 4) \rangle$ is a proper subgroup of $S_4$. What is the isomorphism type of this subgroup?

Let $\alpha = (1 \enspace 3)$ and $\beta = (1 \enspace 2 \enspace 3 \enspace 4)$. Then the subgroup generated is $\lbrace 1, \beta, \beta^2, \beta^3, \alpha\beta, \alpha\beta^2, \alpha\beta^3 \rbrace$, which is isomorphic to $D_8$.