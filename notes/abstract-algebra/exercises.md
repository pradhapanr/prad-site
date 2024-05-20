---
layout: default
order: 100
toc: true
---

# Exercises

## Chapter 2

### 2.1 

#### 1

(a) injective since $x + 3 = x' + 3 \implies x = x'$

surjective since given $y \in \mathbb R$, $f(y - 3) = y - 3 + 3 = y$.

(b) injective since $x'^2 + 2x' + 1 = x^2 + 2x + 1 \implies x' = x$ (use quadratic formula on both sides)

surjective since for any $y \in \mathbb C$, $y = x^2 + 2x + 1 \implies x^2 + 2x + 1 - y = 0$, which has a solution by the Fundamental Theorem of Algebra.

(c) injective since if $[mx + b] = [mx' + b]$ then $[x] = [x']$ (subtracting by $[b]$ and dividing by $[m]$).

surjective since any $f([x]) = [y]$ is given by $[x] = []

(d) injective since if $\ln x' = \ln x$ then $x' = x$ (raising both sides to the power of $e$)

surjective since if $y \in \mathbb R$ then $\ln x = y$ when $x = e^y$,

### 2.2

#### 3
(a) Reflexivity holds, transitivity holds, symmetry does not (e.g. $5 \leq 10 \not\implies 10 \leq 5$)

(b) Reflexive since $a - a = 0 \in \mathbb Q$. 

Symmetric since if $a - b \in \mathbb Q$ then $b - a \in \mathbb Q$ since if $a - b = m/n$ then $b - a = -m/n$. 

Transitive since if $a - b \in \mathbb Q$ and $b - c \in \mathbb Q$, then $(a - b) + (b - c) = a - c \in \mathbb Q$ since $+$ is a binary operation on $\mathbb Q$.

(c) Reflexive since $\vert a - a \vert = 0 \leq 1$.

Symmetric since $\vert a - b \vert = \vert b - a \vert$.

Not transitive since $\vert 0 - 1 \vert \leq 1$ and $\vert 1 - 2 \vert \leq 1$ but $\vert 0 - 2 \gt 1$.

#### 4
Reflexive since $a_1 + a_2 = a_2 + a_1$.

Symmetric since $a_1 + b_2 = a_2 + b_1 \implies b_1 + a_2 = b_2 + a_1$.

Transitive since if $a_1 + b_2 = a_2 + b_1$ and $b_1 + c_2 = b_2 + c_1$ then, adding the second equation to the first and subtracting $b_1 + b_2$ yields $a_1 + c_2 = a_2 + c_1$, as desired.

#### 5
Note that $a_1^2 + a_2^2$ is the square of the distance of $(a_1, a_2)$ to the origin. It is easy to show that it is an equivalence relation. The equivalence classes are cirlces in $\mathbb R^2$.

#### 10
(a) Reflexive since $A \sim A$ by the identity function.

Symmetric since the inverse of a bijective function is itself bijective.

Transitive since the composition of a bijective function is itself bijective.

(b) $2^S = \lbrace \emptyset, \lbrace 1 \rbrace, \lbrace 2 \rbrace, \lbrace 3 \rbrace, \lbrace 4 \rbrace, \lbrace 1, 2 \rbrace, \dots \rbrace$ (all subsets of $S$)

$2^S / \sim \quad = \lbrace [\emptyset], [\lbrace 1 \rbrace], [\lbrace 1, 2 \rbrace], [\lbrace 1, 2, 3 \rbrace], [\lbrace 1, 2, 3, 4 \rbrace] \rbrace$

## Chapter 3

### 3.2

#### 26

(a) Suppose $a^n = e$. Then $e = (aa^{-1})^n = a^n(a^{-n}) = ea^{-n} = a^{-n}$. 

(b) (ab)^n = e  e = (ab)(ab)^-1



### 3.5

#### 1
 $a^12 = e$, so order of $a^j$ is $12/\operatorname{gcd}(j, 12)$.

#### 2 
$a^30 = e$, $a^j$ has order $k$ when $30 \mid jk$. So $j = 15, 10, 6$ for $k = 2, 3, 5$.

#### 7
 $\mathbb Z_{18}^\times, \mathbb Z_{27}^\times$

#### 8
 $\langle \pi \rangle = \lbrace \pi^k \mid k \in \mathbb Z \rbrace$

#### 9
 $\mathbb Z_4 \times \mathbb Z_2 = \lbrace (0, 0), (0, 1), (1, 0), (1, 1), \dots, (3, 0), (3, 1) \rbrace$

$\langle (0, 0) \rangle = \lbrace (0, 0) \rbrace$

$\langle (0, 1) \rangle = \lbrace (0, 1), (0, 0) \rbrace$

$\langle (1, 0) \rangle = \lbrace (1, 0), (2, 0), (3, 0), (0, 0) \rbrace$

$\langle (1, 1) \rangle = \lbrace (1, 1), (2, 0), (3, 1), (0, 0) \rbrace$

...

(see the back of the book for the rest, all elements are generators of a cyclic subgroup)

#### 10
 Write out all subgroups generated from every $(x, y) \in \mathbb Z_6 \times \mathbb Z_3$...

### 3.7

#### 2
$\phi(x) = [mx]_{12}$ where $m$ and $12$ are coprime define all homomorphisms. (See Example 3.7.6).

#### 3
(a) $\phi(xy) = \vert xy \vert = \vert x \vert \vert y \vert = \phi(x)\phi(y)$

(b) $\phi(xy) = \frac{xy}{\vert xy \vert} = \frac{x}{\vert x \vert} \frac{y}{\vert y \vert} = \phi(x)\phi(y)$

(c) same as (b)

#### 4
$\phi(x * y) = (x * y)^n = x^n * y^n = \phi(x) * \phi(y)$. Note that the distirbution of $n$ is only possible because $G$ is abelian.

#### 7
$\phi((a + bi)(c + di)) = \phi((ac - bd) + i(ad + bc)) = (ac - bd)^2 + (ad + bc)^2 = ... = (a^2 + b^2)(c^2 + d^2) = \phi(a + bi)\phi(c + di)$ (see [here for the algebra](https://www.symbolab.com/solver/simplify-calculator/simplify%20%5Cleft(ac%20-%20bd%5Cright)%5E%7B2%7D%2B%5Cleft(ad%2Bbc%5Cright)%5E%7B2%7D?or=input))


#### 11

*If $G_1$ is abelian then so is $G_2$*.

*Proof*: Suppose $G_1$ is abelian. Let $c, d \in G_2$. By surjectivity of $f$, choose $a, b$ such that $c = f(a)$ and $d = f(b)$. Then $ab = ba$, so $cd = f(a)f(b) = f(ab) = f(ba) = f(b)f(a) = dc$. $\blacksquare$

*Counterexample of the converse*: Let $G_1 = GL_2(\mathbb R)$ and $G_2 = \lbrace e \rbrace$, with $f$ mapping everything to $e$. Then $G_2$ is abelian and $f$ is a surjective homomorphism, but $G_1$ is not abelian.

*If $G_1$ is cyclic then so is $G_2$*.

*Proof*: Suppose $G_1$ is cyclic. Let $G_1 = \langle a \rangle$. Let $b = f(a)$. $\langle b \rangle \subseteq G_2$ from the closure property of groups. Let $x \in G_2$. By surjectivity of $G_2$, $x = f(a^n)$ for some $n$. Then, $x = f(a^n) = f(a)^n = b^n$. So $x \in \langle b \rangle$, and $G_2 \subseteq \langle b \rangle$. So $G_2$ is cyclic. $\blacksquare$

*Counterexample of the converse*: Let $G_1 = \mathbb Z_2 \times \mathbb Z_2$ and $G_2 = \lbrace e \rbrace$, with $f$ mapping everything to $e$. Then $G_2$ is cyclic and $f$ is a surjective homomorphism, but $G_1$ is not cyclic.

### 3.8

#### 1
(a) Let $H = \langle [3] \rangle$. Then $0H = \langle [3] \rangle = 3H = 6H = 9H = 12H = 15H = 18H = 21H, 1H = \lbrace 1, 4, 7, 10, 13, 16, 19, 22 \rbrace = 4H = 7H = 10H = 13H = 16H = 19H = 22H$, $2H = \lbrace 2, 5, 8, 11, 14, 17, 20, 23 \rbrace = 5H = 8H = 11H = 14H = 17H = 20H = 23H$.

(b) Let $H = \langle [16] \rangle$. The distinct cosets are $0H, 1H, \dots, 15H$.

#### 2
Cosets of $H$:
* $(0,0)H = \lbrace (1,2), (2,4), (0, 0) \rbrace = (1,2)H, (2,4)H$
* $(0, 1)H = \lbrace (1, 3), (2, 5), (0, 1) \rbrace = (1,3)H, (2,5)H$
* $(0, 2)H = \lbrace (1, 4), (2, 0), (0, 2) \rbrace = (1,4)H, (2,0)H$
* $(0, 3)H = \lbrace (1, 5), (2, 1), (0, 3) \rbrace = (1,5)H, (2,1)H$
* $(1, 0)H = \lbrace (1, 0), (2, 2), (0, 4) \rbrace = (2,2)H, (0,4)H$
* $(1, 1)H = \lbrace (1,1), (2,3), (0,5) \rbrace = (1,1)H, (2,3)H$

#### 3
TODO.

#### 6
**Proposition**: Let $H$ be a subgroup of a group $G$. Let $\mathcal L(G, H) = \lbrace aH \mid a \in G \rbrace$ and $\mathcal R(G, H) = \lbrace Ha \mid a \in G \rbrace$. Then the function $f: \mathcal L(G, H) \to \mathcal R(G, H)$ given by $f(aH) = Ha^{-1}$ is a bijection.

**Remark**: This shows that the number of left and right cosets are equal.

**Remark**: For $G$ finite, this follows from Lagrange's theorem.

*Proof*: First we show that $f$ is well defined. Suppose $aH = bH$.  Then $a \in bH$, so $a = bx$ for some $x \in H$. Then $Ha^{-1} = H(bx)^{-1} = Hx^{-1}b^{-1} = Hb^{-1}$.

Next we show that $f$ is bijective. Define the inverse $g: \mathcal R(G, H) \to \mathcal L(G, H)$ as $g(Ha) = a^{-1}H$. This is well-defined since if $Ha = Hb$, then $a = xb$ for some $x \in H$, so $a^{-1}H = b^{-1}x^{-1}H = b^{-1}H$. And it is an inverse since $(g \circ f)(aH) = g(Ha^{-1}) = aH$. $\blacksquare$

#### 7
*Proof*: First note that $H \cap N$ is a subgroup of $H$ since $H \cap N \subseteq H$ and for all $a, b \in H \cap N$, $a, b \in H$ so $ab^{-1} \in H$, and also $a, b \in N$ so $ab^{-1} \in N$, so $ab^{-1} \in H \cap N$. To show that $H \cap N$ is normal, we show that $a(H \cap N)a^{-1} \subseteq H \cap N$ for all $a \in H$.

Let $x \in H \cap N$. Since $N$ is a normal subgroup of $G$, $ax = ya$ for some $y \in N$.

#### 8
*Proof*: Let $H \leq G$.

$(\rightarrow)$ Suppose $H$ is normal in $G$, that is, $aH = Ha$ for all $a \in G$. Then for any $x \in aH$, $ax \in H$ and there is a $y \in H$ such that $ax = ya \in Ha$. So $axa^{-1} = yaa^{-1} = y \in H$. So $aHa^{-1} \subseteq H$. And analagously in reverse for $H \subseteq aHa^{-1}$.

$(\leftarrow)$ Now suppose $aHa^{-1} = H$ with $a \in G$. $(\subseteq)$ Let $x \in H$, so $ax \in aH$. Then $axa^{-1} \in H$, so $axa^{-1}a = ax \in Ha$. $(\supseteq)$ Let $x \in H$, so $xa \in Ha$. Then $a^{-1}xa \in aHa^{-1} = H$, so $aa^{-1}xa = xa \in Ha$. $\blacksquare$

##### 9
*Proof*: Suppose $H$ is the only subgroup of $G$ of order $n$. First, we show that $aHa^{-1}$ is a subgroup of $G$ for all $a \in G$. Let $c, d \in aHa^{-1}$. Then there exists $x, y \in H$ such that $c = axa^{-1}$ and $d = aya^{-1}$. So $xy^{-1} = (axa^{-1})(ay^{-1}a^{-1}) = a(xy^{-1})a^{-1} \in aHa^{-1}$. So $aHa^{-1}$ is a subgroup of $G$ with the same order as $H$. But $H$ is the only subgroup of order $n$, so $aHa^{-1} = H$. $\blacksquare$

#### 10
*Proof*: Let $N$ be a normal subgroup of index $m$ in $G$. Let $a \in G$. We have that $\vert G/N \vert = m$, so by Lagrange's Theorem, the order of $aN$ divides $m$, so $(aN)^m = N$, and since $(aN)^m = a^mN$, then $a^m \in N$. $\blacksquare$

#### 11
*Proof*: Let $N$ be a normal subgroup of $G$. Let $a \in G$ with order $m$. Let $n$ be the order of $aN$ in $\vert G/N \vert$. Also, $(aN)^n = N$. Since $n = o(aN)$, we must have $m \geq n$. Write $m = nq + r$ for $n, r \in \mathbb N$ with $r \lt n$. So $a^r = a^ma^{-nq} = ea^{-nq} = (a^{-n})^q$. Since $(aN)^n = N$, $a^n \in N$, so $a^{-n} \in N$, so $a^{-qn} \in N$. So $a^r \in N$. Then $a^rN = (aN)^r =N$. But $n$ is the order of $aN$, so since $r \lt n$, it must be that $r = 0$. That is, $m = nq$, so $m \mid n$. $\blacksquare$

#### 12
*Proof*: Let $h \in H$ and $k \in K$. Then $hkh^{-1}k^{-1} = (hkh^{-1})k^{-1} \in K$ and $h(kh^{-1}k) \in H$. So $hkh^{-1}k^{-1} \in H \cap K = \lbrace e \rbrace$. So $hkh^{-1}k^{-1} = e \implies hk = kh$. $\blacksquare$

#### 13
$(\rightarrow)$ Suppose $G/N$ is abelian. Let $a, b \in G$. Then $abN = baN$, so $ab(ba)^{-1} = aba^{-1}b^{-1} \in N$. $(\leftarrow)$ Suppose $aba^{-1}b^{-1} \in N$ for all $a, b \in G$. Then $ab \sim ba$, so $abN = baN$. $\blacksquare$

#### 14

*Proof*: Let $N$ be a subgroup of $Z(G)$. Suppose $G/N$ is cyclic. Let $aN$ be a generator of $G/N$. Let $x, y \in G$. Then $xN = (aN)^i = a^iN$ and $yN = (aN)^j = a^jN$ for some $i, j \in \mathbb Z$. So, $x \in a^iN$, so $x = a^in_x$ for some $n_x \in N$. Similarily, $y = a^jn_y$. Then, $xy = (a^in_x)(a^jn_y) = (a^jn_y)(a^in_x) = yx$, using the fact that $a^i, a^j, n_x, n_y \in N$, and $N \subseteq Z(G)$ is abelian. So $G$ is abelian. $\blacksquare$

#### 18
$\langle(2, 2)\rangle$ is of order 6, and $\mathbb Z_6 \times \mathbb Z_4$ is of order 24, so the factor group is of order 4. Note that $\langle(2, 2)\rangle$ covers all $(k, l)$ such that $k, l$ are even, so for any $(a, b) \in \mathbb Z_6 \times \mathbb Z_4$, $2(a, b) \in \langle(2, 2)\rangle$. So the maximum order of any element is 2. So the group is congruent to $\mathbb Z_2 \times \mathbb Z_2$, by the Classification Theorem for Finite Abelian Groups.

#### 19

The factor group is of order 24 / 2 = 12. $(1, 1) + \langle(3, 2)\rangle$ is of order 12, so the factor group is congruent to $\mathbb Z_{12}$ (by the Classification Theorem).

#### 20
*Proof*: Define $\phi: \mathbb Z \times \mathbb Z \to \mathbb Z$ as $(x, y) \mapsto x$. Then it is easy to show that $\phi$ is a homomorphism, and, $\phi((0, k)) = 0$ for all $k \in \mathbb Z$, so $\langle(0, 1)\rangle = \operatorname{Ker}(\phi)$. So by the Fundamental Homomorphism Theorem, $\mathbb Z \times \mathbb Z / \langle(0, 1)\rangle \cong \mathbb Z$, so it is an infinite cyclic group. $\blacksquare$

#### 21
*Proof*: Define $\phi: \mathbb Z \times \mathbb Z \to \mathbb Z$ as $(x, y) \mapsto x - y$. Then it is a homomorphism since $\phi((a, b) + (c, d)) = \phi((a + c, b + d)) = a + c - b - d = a - b + c - d = \phi(a, b) + \phi(c, d)$, and the kernel is $(k, k)$ for all $k \in \mathbb Z$, that is, $\langle (1, 1) \rangle$. So by the Fundamental Homomorphism Theorem, $\mathbb Z \times \mathbb Z / \langle(1, 1)\rangle \cong \mathbb Z$, so it is an infintie cyclic group. $\blacksquare$

#### 22
*Proof*: Define $\phi: \mathbb Z \times \mathbb Z \to \mathbb Z_2 \times \mathbb Z_2$ as $(x, y) \mapsto (x \bmod 2, y \bmod 2)$. Then it is a homomorphism since $\phi((a, b) + (c, d)) = \phi((a + c, b + d)) = (a + c \bmod 2, b + d \bmod 2) = (a \bmod 2, b \bmod 2) + (c \bmod 2, d \bmod 2) = \phi((a, b)) + \phi((b, c))$ and the kernel is $(2k, 2k)$ for all $k \in \mathbb Z$, that is, $\langle(2, 2)\rangle$. So by the Fundamental Homomorphism Theorem, $(\mathbb Z \times \mathbb Z)/\langle(2, 2)\rangle \cong \mathbb Z_2 \times \mathbb Z_2$, which is non-cyclic. $\blacksquare$

#### 23
*Proof*: Define $\phi: \mathbb R \to \mathbb R^+$ as $x \mapsto \vert x \vert$. Then it is a homomorphism since $\phi(xy) = \vert x y \vert = \vert x \vert \vert y \vert = \phi(x)\phi(y)$. Also, the kernel is $\lbrace -1, 1 \rbrace$, that is, $\langle -1 \rangle$. So $\mathbb R^\times/\langle -1 \rangle \cong \mathbb R^+$. $\blacksquare$