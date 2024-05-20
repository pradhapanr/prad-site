---
layout: default
order: 2
toc: true
---

# Rings

**Definition**: A **ring** is a set $R$ with two binary operations: addition, written $+$, and multiplication, written $\cdot$, subject to 6 axioms:
1. $(a + b) + c = a + (b + c)$ for all $a, b, c \in R$
2. There is an element $0 \in R$ such that for every $a \in R$, $a + 0 = a = 0 + a$
3. For any $a \in R$, there is $-a \in R$ such that $a + (-a) = 0 = (-a + a)$
4. $a + b = b + a$ for all $a, b \in R$
5. $(ab)c = a(bc)$ for all $a, b, c \in R$
6. $a(b + c) = ab + ac$ and $(a + b)c = ac + bc$ for all $a, b, c \in R$ (**distributivity**)

**Remark**: 
* $(R, +)$ is an abelian group (by (1)-(4)).
* $0$ and additive inverses are unique.

**Definition**: A ring $R$:
* has **unity** if there is $1 \in R$ such that $1 \cdot a = a = a \cdot 1$ for all $a \in R$
* is **commutative** if $a \cdot b = b \cdot a$ for all $a, b \in R$

**Remark**: The identity of a unitary ring is unique.

**Example**:
* $\mathbb Z$ with $+$ and $\cdot$ forms a ring and is commutative with unity.
* $\mathbb Q, \mathbb R, \mathbb C$ with $+$ and $\cdot$ are all rings with commutative and unity.
* $\mathbb Z[x] =$ set of polynomials with integer coefficients is a commutative ring with unity given by constant polynomial 1.
* Similarily, $\mathbb Q[x], \mathbb R[x], \mathbb C[x]$ are commutative with unity 1.
* $\mathbb Z_n$ with $+_n$ and $\cdot_n$, commutative with unity 1
* $M_{n \times n}(\mathbb R)$ with addition and multiplication of matrices is not commutative with unity $I_n = \begin{bmatrix} 1 & 0 \\ 0 & 1\end{bmatrix}$.
* $M_{n \times n}(R)$ is a ring for any ring $R$ (has unity if and only if $R$ has unity)
* $R[x]$ is a ring for any ring $R$.
* $2 \mathbb Z$ is a commutative ring without unity

**Definition**: The **product** of rings $R_1, R_2$ is the ring $R_1 \times R_2 = \lbrace (r_1, r_2) \mid r_1 \in R_1, r_2 \in R_2 \rbrace$ with

$$
\begin{align*}
(r_1, r_2) + (r_1', r_2') &= (r_1 + r_1', r_2 + r_2') \\
(r_1, r_2) \cdot (r_1', r_2') &= (r_1r_1' + r_2r_2')
\end{align*}
$$

**Proposition**: Let $R$ be a ring. Then,
1. $a \cdot 0 = 0 = 0 \cdot a$ for all $a \in R$
2. $(-a) \cdot b = - a\cdot b = a \cdot (-b)$
3. $(-a) \cdot (-b) = a \cdot b$

*Proof*: (1) For $a \in R$, $a \cdot 0 = a \cdot (0 + 0) = a \cdot 0 + a \cdot 0$, and since $a \cdot 0 = a \cdot 0 + 0$, by Cancellation in the abelian group $(R, +)$, $a \cdot 0 = 0$.

(2) For $a, b \in R$, we have $ab + (-a)b = (a + (-a))b = 0 \cdot b = 0 = ab + (-ab)$, so by Cancellation in the abelian group $(R, +)$, $(-a)b = -ab$.

(3) TODO.

**Definition**: Let $R$ be a ring with unity 1. An element $a \in R$ is a **unit** if there is an element $b \in R$ such that $ab = ba = 1$.

**Example**:
* In $\mathbb Z: 1, -1$
* In $\mathbb Z_3: 1, 2$
* In $\mathbb Z_4: 1, 3$
* In $\mathbb Z_{10}: 1, 3, 7, 9$
* In $\mathbb Z_n$: all $k$ with $\gcd(k, n) = 1$
* In $\mathbb Q$: all non-zero elements
* In $\mathbb R$: all non-zero elements
* In $\mathbb C$: all non-zero elements
* In $M_{n \times n}(\mathbb R)$: invertible matrices ($\det \neq 0$)
* In $\mathbb R[x]$: non-zero constant polynomials

**Definition**: Let $R$ be a ring. A subset $S \subseteq R$ is a **subring** if
1. $a + b \in S$ for all $a, b \in S$
2. $0 \in S$
3. $-a \in S$ for all $a \in S$
4. $a \cdot b \in S$ for all $a, b \in S$

**Example**:
* $\mathbb Z[x]$ is a subring of $\mathbb Q[x]$.
* $2 \mathbb Z$ is a subring of $\mathbb Z$.

**Remark**: Units and multiplicative identities do not necessarily hold in the subring.

**Definition**: Let $R$ be a ring. A non-zero element $a \in R$ is a **zero divisor** if there is a non-zero element $b \in R$ such that $ab = ba = 0$.

**Example**:
* $\mathbb Z$: nothing
* $\mathbb Q, \mathbb R, \mathbb C$: nothing
* $\mathbb Z_4: 2$
* $\mathbb Z_{10}: 2, 4, 5, 6, 8$
* $\mathbb Z_n$: all $k \neq 0$ with $\gcd(k, n) \gt 1$

## Integral Domains and Fields

**Definition**: An **integral domain** is a commutative ring with unity $1 \neq 0$ without zero divisors.

**Example**: $\mathbb Z, \mathbb Q, \mathbb R, \mathbb C, \mathbb Z_p$, $\mathbb R[x], \mathbb Q[x], \mathbb C[x], \mathbb Z[x]$, not $\mathbb Z_n$.

**Definition**: A **field** is a commutative ring with unity $1 \neq 0$ such that every nonzero element is a unit.

**Remark**: Every field is an integral domain.

**Example**:
* $\mathbb Z$ is not a field, since $2$ is not a unit.
* $\mathbb Q$ is a field as for $a/b \in \mathbb Q$ where $a,b \in \mathbb Z$, $b \neq 0$, if $a/b \neq 0$, then $a \neq 0$, so $b/a \cdot a/b = 1$.
* $\mathbb R, \mathbb C$
* $\mathbb Z_p$

**Theorem (Cancellation Law)**: Let $R$ be an integral domain and $a \in R$ a nonzero element. If $ab = ac$, then $b = c$ where $b, c \in R$.

*Proof*: We have $ab - ac = 0$, so $a(b - c) = 0$. Since $R$ has no zero-divisors, $(b - c) = 0$, so $b = c$. $\blacksquare$

**Theorem**: If $D$ is a finite integral domain, then $D$ is a field.

*Proof*: Let $D = \lbrace a_1, \dots, a_n \rbrace$. For $b \in D$ nonzero, consider the list $ba, \dots, ba_n$. All elements are distinct by the Cancellation Law. In particular, $1 = ba_i$ for some $i$. So $a_i$ is the multiplicative inverse of $b$, making it a unit. $\blacksquare$

**Example**: $\mathbb Z[x]$ is an integral domain but ont a field, since $x \in \mathbb Z[x]$ is not a unit. Similarily, $\mathbb R[x], \mathbb Q[x], \mathbb C[x], \mathbb Z_p[x]$ are integral domains but not fields.

## Ring Homomorphisms

**Definition**: Let $R, S$ be rings. A **ring homomorphism** $f: R \to S$ is a function such that $f(r + r') = f(r) + f(r')$ and $f(rr') = f(r)f(r')$ for all $r, r' \in R$.

**Example**: 
* $q_n: \mathbb Z \to \mathbb Z_n$ given by $q_n(k) = k \bmod n$.
* $\operatorname{id}_R: R \to R$ for any ring $R$.
* $\operatorname{ev}_1: \mathbb Z[x] \to \mathbb Z$ given by $\operatorname{ev}_1(f(x)) = f(1)$
* $i: \mathbb Z \to \mathbb Z[x]$ given by $i(k) = k$.
* $d: \mathbb Z \to \mathbb Z$ given by $d(k) = 2k$ is NOT a ring homomorphism since $d(1 \cdot 1) = d(1) = 2 \neq d(1)d(1) = 4$.

**Definition**: A ring homomorphism $f: R \to S$ is a **ring isomorphism** if there is a $g: S \to R$ a ring homomorphism such that $g \circ f = \operatorname{id}_R$ and $f \circ g = \operatorname{id}_S$.

**Proposition**: A ring homomorphism $f: R \to S$ is a ring isomorphism if and only if it is bijective.

*Proof*: $(\rightarrow)$ This follows from the analogous theorem for groups as $f$ is in part a group homomorphism.

$(\leftarrow)$ As $f$ is bijective and a group homomorphism, there is a group homomorphism $g: S \to R$ such that $g \circ f = \operatorname{id}_R$ and $f \circ g = \operatorname{id}_S$. It remains to show that $f$ is a ring homomorphism, that is, $g(ss') = g(s)g(s')$. As $f$ and $g$ are inverses, there are $r, r' \in R$ such that $f(r) = s, g(s) = r, g(s') = r'$, and $f(r') = s'$. Then

$$
g(ss') = g(f(r)f(r')) = (g \circ f)(rr') = r \circ r' = g(s)g(s')
$$

$\blacksquare$

**Definition**: The **kernel** of a ring homomorphism $f: R \to S$ is the set $\operatorname{Ker}(f) = \lbrace r \in R \mid f(r) = 0 \rbrace$.

**Lemma**: A ring homomorphism $f: R \to S$ is injective if and only if $\operatorname{Ker}(f) = \lbrace 0 \rbrace$.

*Proof*: This follows from the analagous fact from groups. $\blacksquare$



## Ideals

**Definition**: An **ideal** in a ring $R$ is a subset $I \subseteq R$ such that
1. $I$ is a subgroup of $(R, +)$.
2. For any $a \in I$ or $r \in R$, $ar, ra \in I$.

**Example**: Examples of ideals:
* $2 \mathbb Z, 3 \mathbb Z, n \mathbb Z \subseteq \mathbb Z$, for all $n \geq 0$
* For any ring $R$, $\lbrace 0 \rbrace$ and $R$ are ideals.

**Example**: Subrings that are not ideals:
* $\mathbb Z \subseteq \mathbb Q$

**Example**: Find a ring $R$ and subsets $I$ and $J$ such that $I \subseteq J \subseteq R$ and $I \subseteq J$ is an ideal, $J \subseteq R$ is an ideal, but $I \subseteq R$ is not an ideal.

TODO.

**Example**: Consider $\mathbb Z[x]$. Define $I = \lbrace a_nx^n + \dots + a_1 x \mid a_i \in \mathbb Z \rbrace \cup \lbrace 0 \rbrace$, that is, polynomials with constant term 0. Then $I$ is an ideal of $\mathbb Z[x]$.

**Definition**: For a subset $A \subseteq R$ of a ring $R$, let $\langle A \rangle$ be the smallest ideal containing $A$. It is called the **ideal generated by $A$**.

**Notation**: For $A \subseteq R$ with $R$ a ring, write

$$
AR = \lbrace a_1r_1 + \dots + a_nr_n \mid a_i \in A, r_i \in R \rbrace \\
RA = \lbrace r_1a_1 + \dots + r_na_n \mid a_i \in A, r_i \in R \rbrace
$$

**Remark**: If $R$ is commutative, then $AR = RA$.

**Proposition**: If $R$ is commutative, then $\langle A \rangle = AR$.

*Proof*: First, observe that $AR \subseteq \langle A \rangle$, as $ar \in \langle A \rangle$ for all $a \in A, r \in R$ since $\langle A \rangle$ is an ideal, and $\langle A \rangle$ is closed under addition. It remains to show that $AR$ is an ideal, since then because $\langle A \rangle$ is the smallest ideal, $\langle A \rangle \subseteq AR$. $AR$ is an ideal since $AR$ is an additive subgroup, and for $a_1 r_1 + \dots + a_n r_n \in AR$ and $r \in R$, we have $(a_1r_1 + \dots + a_nr_n)r = a_1(r_1)r + \dots + a_n(r_nr) \in AR$. $\blacksquare$

**Definition**: An ideal $I$ of a ring $R$ is **principal** if $I = \langle a \rangle$, that is, it is generated by a single element $a \in R$.

**Example**:
* $\lbrace 0 \rbrace$ is principal of any ring $R$.
* $n \mathbb Z = \langle n \rangle$ in $\mathbb Z$ is principal.
* $\langle x \rangle \subseteq \mathbb Z[x]$ is the principal ideal of polynomials with constant term 0.

**Example**: If $R$ ring with unity 1, then $R$ is a principal ideal of $R$ as $R = \langle 1 \rangle$, since for $r \in R$, we must have $r = r \cdot 1 \in \langle 1 \rangle$.

**Corollary**: If $1 \in I$, then $I = R$. 

**Proposition**: For any ring homomorphism $f: R \to S$, $\operatorname{Ker}(f)$ is an ideal.

*Proof*: Let $a \in \operatorname{Ker}(f)$ and $r \in R$. Then $f(ar) = f(a)f(r) = 0 \cdot f(r) = 0$. Moreover, $\operatorname{Ker}(f)$ is an additive subgroup. $\blacksquare$

**Example**: In $\mathbb Z[x]$, we have $\langle x \rangle, \langle 2 \rangle$, but we also have $\langle 2, x \rangle =$ polynomials with even coefficients or constant term = 0.

### Quotient Rings

**Recall**: For a group $G$ and a normal subgroup $H$, we form $G/H = \lbrace aH \mid a \in H \rbrace$. This is a group with a binary operation given by $(aH)(bH) = (ab)H$.

For a ring $R$ and a subring $A$ we can form $R/A$, which is an abelian group with $(r + A) + (s + A) = (r + s) + A$, where $R/A = \lbrace r + A \mid r \in R \rbrace$, since $(R, +)$ is abelian, so it is normal. Note that in general, it is **not** a ring.

**Construction**: Given an ideal $I$ in a ring $R$, define multiplication on $R/I$ as 

$$
(r + I)(s + I) = rs + I
$$

**Lemma**: This is a well-defined binary operation.

*Proof*: Suppose $r + I = r' + I$ and $s + I = s' + I$. Then $r' = r + a$ and $s' = s + b$. for some $a, b \in I$. Then 

$$
\begin{align*}
(r' + I)(s' + I) 
&= r's' + I \\
&= (r + a)(s + b) + I
&= rs + rb + as + ab + i \\
&= rs + I
\end{align*}
$$

$\blacksquare$

**Theorem**: For a ring $R$ and an ideal $I$, the set $R/I$ is again a ring with $(r + I) = (s + I) = (r + s) + I$ and $(r + I)(s + I) = rs + I$.

*Proof*: The first four ring axioms follows form the analagous theorem for groups. For associativity of multiplication, we have

$$
\begin{align*}
(r + I)((s + I)(t + I))
&= (r + I)(st + I)
\\ &= r(st) + I
\\ &= (rs)t + I
\\&= (rs + I)(t + I)
\\&= ((r+I)(s+I))(t + I).
\end{align*}
$$

Distributivity follows similarily. $\blacksquare$

**Corollary**: Let $R$ be a ring and $I$ an ideal. Then
1. If $R$ is commutative, then so is $R/I$.
2. If $R$ has unity 1, then $R/I$ has unity $1 + I$.

*Proof*: TODO (as above). $\blacksquare$

### First Isomorphism Theorem for Rings

**Theorem (First Isomorphism Theorem for Rings)**: Let $f: R \to S$ be a surjective ring homomorphism. Then there exists a nuique ring isomorphism $\overline f: R/\operatorname{Ker}(f) \to S$ such that $f\ circ q = f$ where $q: R \to R/\operatorname{Ker}(f)$ is the canonical quotient map $q(r) = r + \operatorname{Ker}(f)$.

*Proof*: This follows from the analagous theorem for groups, except we need to check that $\overline f$ preserves multiplication. (TODO) $\blacksquare$

### Proper and Maximal Ideals

**Definition**: A proper ideal $I \subseteq R$ is
1. **prime** if for any $a, b \in R$, if $ab \in I$, then $a \in I$ or $b \in I$.
2. **maximal** if for any ideal $J$ such that $I \subseteq J \subseteq R$, we have $J = I$ or $J = R$.

**Example**: In $\mathbb Z$: prime ideals: $2 \mathbb Z$, $p \mathbb Z$ for $p$ prime. $\lbrace 0 \rbrace$ is a prime. maximal ideals: $p\mathbb Z$ for $p$ prime. For example, $2 \mathbb Z$ is maximal since if $J \supset 2\mathbb Z$, there is $2n + 1 \in J$, then $(2n + 1) - 2n = 1 \in J$. So $J = \mathbb Z$.

In $\mathbb Z_6$, $\langle 2 \rangle, \langle 3 \rangle$ are prime and maximal. $\langle 0 \rangle$ is not prime, since $2 \cdot 3 = 0$.

In $\mathbb Z_{30}$, the maximal/prime ideals are $\langle 2 \rangle, \langle 3 \rangle, \langle 5 \rangle$.

$\mathbb Z_2$ has only one maximal ideal: $\lbrace 0 \rbrace$.

**Theorem**: Let $R$ be a commutative ring with unity $1 \neq 0$. An ideal $I$ of $R$ is prime if and only if $R/I$ is an integral domain.

*Proof*: $(\rightarrow)$ Suppose that $I$ is prime and let $(a + I)(b + I) = I$ in $R/I$. Then $ab + I = (a + I)(b + I) = I$. So $ab \in I$. Since $I$ is prime, $a \in I$, so $a + I = I$, or $b \in I$, so $b + I = I$.

$(\leftarrow)$ Suppose that $R/I$ is an integral domain.  Let $a, b \in R$ such that $ab \in I$. Then $ab + I = I$. Then $(a + I)(b + I) = ab + I = I$. As $R/I$ is an integral domain, either $a + I = I$, so $a \in I$, or $b + I = I$, so $b \in I$. $\blacksquare$

**Theorem**: Let $R$ be a commutative ring with unity $1 \neq 0$. An ideal $I$ of $R$ is maximal if and only if $R/I$ is a field.

*Proof*: $(\rightarrow)$ Suppose that $I$ is maximal. Let $r \in R$ such that $r \not\in I$, so $r + I \neq I$. We need to find a multiplicative inverse of $r + I$ in $R/I$. Define $J = \lbrace rr' + a \mid r' \in R, a \in I \rbrace$. We claim that $J$ is an ideal (TODO). We know that $J \supseteq I$ as $a \in I$ is of the form $a = r \cdot 0 + a$. $J = I$ is impossible since $r \in J$ but $r \not\in I$, so $J = R$ and $1 \in J$. So there are $r' \in R$ and $a \in I$ such that $rr' + a = 1$. Then $1 + I = (rr' + a) + I = (r + I)(r' + I) + a + I = (r + I)(r' + I)$. Thus $r' + I$ is the inverse of $r + I$.

$(\leftarrow)$ Suppose that $R/I$ is a field and let $J$ be an ideal such that $I \subseteq J \subseteq R$. If $J = I$ we are done, so suppose otherwise. Then there is $a \in J$ such that $a \not\in I$. Then there is $b \in R$ such that $(a + I)(b + I) = 1 + I$ since $R/I$ is a field. So $1 - ab \in I$. Then $1 = 1 - ab + ab$, and since $1 - ab \in I \subseteq J$ and $ab \subseteq J$ (since $a \in J$), so $1 \in J$. So $J$ is an ideal containing 1, so $J = R$.

$\blacksquare$

**Corollary**: Every maximal ideal is prime in commutative rings with unity $1 \neq 0$.

### Field of Fractions

**Notation**: Let $D$ be an integral domain. Define a relation $\sim$ on $D \times S$ where $S = \lbrace a \in D \mid a \neq 0 \rbrace$ by $(a, b) \sim (c, d)$ if and only if $ad = bc$.

**Proposition**: $\sim$ is an equivalence relation.

*Proof*: Reflexivity and symmetry hold due to the commutativity of the ring. For transitivity, suppose $(a, b) \sim (c, d)$ and $(c, d) \sim (e, f)$. Then $ad = bc$ and $cf = de$. Right-multiply the first equation by $f$ and left-mutiply the second by $b$ to obtain $af = be$. $\blacksquare$

**Proposition**: Let $F_D$ be the set $(D \times S)/\sim$ and write $a/b$ for $[(a, b)]_\sim$. Define $+$ and $\cdot$ as

$$
a/b + c/d = (ad + bc)/bd
$$

and

$$
a/b \cdot c/d = (ac)/(cd)
$$

Then $+$ and $\cdot$ are well-defined operations on $F_D$, and $F_D$ with these operations is a field.

*Proof*: (Well-defined) Suppose $a/b = a'/b'$ an $c/d = c'/d'$. Then $ab' = a'b$ and $cd' = c'd$. For $+$, we have

$$
(ad + bc)b'd' = adb'd' + bcb'd' = a'bdd' + c'dbb' = (a'd' + b'c')bd
$$

so $(ad + bc)/bd = (a'd' + b'c')/b'd'$.
For $\cdot$, $acb'd' = a'bc'd = bda'c'$. So $ac/bd = a'c'/b'd'$.

(Field) TODO.

**Definition**: The **field of fractions** of an integral domain $D$ is a field $F_D$ with an injective ring homomorphism $\eta: D \to F_D$ such that for any field $F$ and an injective ring homomorphism $f: D \to F$, there is a unique injective ring homomorphism $\bar f: F_D \to F$ such that $\bar f \circ \eta = f$.

**Proposition**: Let $f: D \to D'$ be an injective ring homomorphism where $D, D'$ are integral domains. Then $f(1_D) = 1_{D'}$.

*Proof*: $1 \cdot f(1) = f(1 \cdot 1) = f(1) \cdot f(1)$. Note that $f(1) \neq 0$ since $f$ is injective so $\operatorname{Ker}(f) = \lbrace 0 \rbrace$. So by Cancellation, $1 = f(1)$.

**Theorem**: $F_D := \lbrace a/b : a, b \in D \rbrace$ for some integral domain $D$ is the field of fractions of $D$.

*Proof*: Define $\eta: D \to F_D$ by $\eta(a) = \frac{a}{1}$. Then $\eta$ is injective since $\operatorname{Ker}(\eta) = \lbrace a \in D : a/1 = 0 \rbrace = \lbrace 0 \rbrace$.

$\eta$ is a ring homomorphism since for $a, b \in D$,

$$
\eta(a + b) = \frac{a + b}{1} = \frac{a}{1} + \frac{b}{1} = \eta(a) + \eta(b)$$

and

$$
\eta(ab) =\frac{ab}{1} = \frac{a}{1} \cdot \frac{b}{1} = \eta(a)\eta(b)
$$

Let $f: D \to F$ be an injective ring homomorphism. First we show the existence of an injective ring homomorphism $\overline f$

First we show that $\overline f$ is well-defined. Let $a/b = a'/b'$. Then $ab' = a'b$, so $f(ab') = f(a)f(b') = f(ba') = f(b)f(a')$. So $f(a)f(b)^{-1} = f(a')f(b')^{-1}$.

Next we show that $\overline f$ is a ring homomorphism.

$$
\begin{align*}
\overline f(a/b \cdot c/d)
&= \overline f\left(\frac{ac}{bd}\right) \\
&= f(ac)f(bd)^{-1} \\
&= f(a)f(c)f(b)^{-1}f(d)^{-1} \\
&= f(a)f(b)^{-1}f(c)f(d)^{-1} \\
&= \overline f(a/b) \overline f(c/d)
\end{align*}
$$

The proof is similar for $+$.

Then we show that $\overline f$ is injective. We have that $\overline f(a/b) = 0$ when $f(a)f(b)^{-1} = 0$. Since $f(b)^{-1}$ is a unit, $f(a) = 0$. Since $f$ is injective, $a = 0$, so $a/b = 0$, so $\operatorname{Ker(\overline f)} = \lbrace 0 \rbrace$, so $\overline f$ is injectve.

Finally we show $\overline f \circ \eta = f$.

$$
(\overline f \circ \eta)(a) = \overline f(\eta(a)) = \overline f(a/1) = f(a)f(1)^{-1} = f(a) \cdot 1 = f(a)
$$

Next we show the uniqueness of $\overline f$. Suppose that there is another injective ring homomorphism $\hat f: F_D \to F$ such that $\overline f \circ \eta = f = \hat f \circ \eta$.

For $a \in D$, we have $\overline f(a/1) = \overline f \circ \eta(a) = f(a) = \hat f \circ \eta(a) = \hat f(a/1)$.

## Euclidean Domains

**Definition**: An integral domain $D$ is a **Euclidean domain (ED)** if there exists a function $N: D \to \mathbb N$ such that 
1. $N(0) = 0$
2. For any $a, b \in D$ such that $b \neq 0$, there are $q, r \in D$ such that $a = bq + r$ with $r = 0$ or $N(r) < N(B)$.

Such a function $N$ is called a **norm**.

**Example**:
* $\mathbb Z$ is an ED with $N(a) = \vert a \vert$.
* $F[x]$ is an ED with $N(f(x)) = \deg f(x)$.

**Theorem**: The Gaussian integers

$$
\mathbb Z[i] = \lbrace a + bi \mid a, b \in \mathbb Z \rbrace
$$

defined with the operations

$$
(a + bi) + (c + di) = (a + c) + (b + d)i \\
(a + bi) \cdot (c + di) = (ac - bd) + (ad + bc)i
$$

is a Euclidean domain.

*Proof*: Let $x, y \in \mathbb Z[i]$. It can be shown that $x/y = s + ti$ for some rationals $s, t$.
We wish to decompose $s + ti$ into a quotient and a remainder.
So consider

$$
s + ti = (s + m - m) + (t + n - n)i = (s + ni) + (0 + (t - n)i)
$$

where $n \in \mathbb Z$ is chosen such that $\vert t - n \vert \leq \frac{1}{2}$, which is valid since $t \in \mathbb Q$. Then $x = qy + r$ with $q = s + ni$ and $r = y(t - n)i$. It remains to show that $N(r) \lt N(y)$ for some $N: \mathbb Z[i] \to \mathbb N$.
Define $N(a + bi) = a^2 + b^2$. Note that $N(xy) = N(x)N(y)$. So,

Then
$$
N(r) = N(y(t - n)i) = N((t - n)i) \cdot N(y) =  (t - n)^2 \cdot N(y) = \frac{1}{4}N(y) \lt N(y)
$$

$\blacksquare$

**Lemma**: Let $R$ be a commutative ring and $a \in R$. For an ideal $I$, if $a \in I$, then $\langle a \rangle \subseteq I$.

*Proof*: Let $x \in \langle a \rangle$. Then $x = ar$ for some $r \in R$. Since $a \in I$ and $I$ is an ideal, $x = ar \in I$. $\blacksquare$

**Corollary**: In a commutative ring $R$ with an ideal $I$, if $1 \in I$, then $I = R$.

*Proof*: From above, $\langle 1 \rangle = R \subseteq I$. $\blacksquare$

**Corollary**: In a commutative ring $R$ with an ideal $I$, if $u \in I$ for some unit $u$, then $I = R$.

*Proof*: Since $u$ is a unit, $ur = 1$ for some $r \in R$. Since $I$ is an ideal, $ur = 1 \in I$, so $I = R$, by above. $\blacksquare$

**Proposition**: A commutative ring with unity $1 \neq 0$ is a field if and only if it contains exactly 2 ideals.

*Proof*: ($\rightarrow$) Let $I \subseteq R$ be an ideal of a commutative ring $R$ with unity $1 \neq 0$. If $I \neq \lbrace 0 \rbrace$, then there is an $a \neq 0$ with $a \in I$. Since $R$ is a field, $a$ is a unit, so $I = R$.

($\leftarrow$) If $R$ has exactly two ideals, $\lbrace 0 \rbrace$ and $R$, then $\lbrace 0 \rbrace$ is a maximal ideal, so $R \cong R/\lbrace 0 \rbrace$ is a field. $\blacksquare$

## Principal Ideal Domains

**Definition**: A **principal ideal domain (PID)** is an integral domain where every ideal is principal.

**Example**: $\mathbb Z[x]$ is NOT a PID since $\langle 2, x \rangle$ is not principal.

**Theorem**: Every Euclidean domain is a principal ideal domain.

*Proof*: Let $D$ be a Euclidean domain with norm $N: D \to \mathbb N$. Let $I \subseteq D$ be an ideal. If $I = \lbrace 0 \rbrace$ then $I = \langle 0 \rangle$. So suppose otherwise. Choose $a \in I$ with minimal norm. Then, given $b \in I$, we can divide with remainder $b = aq + r$ with $N(r) \lt N(a)$ or $r \neq 0$. If $r \neq 0$ then $N(r) < N(a)$, contradicting the minimality of $N(a)$. If $r = 0$, then $b = aq \in \langle a \rangle$. $\blacksquare$
 
**Example**:
* $\mathbb Z$ is a principal ideal domain because $\mathbb Z$ is a Euclidean domain.
* $F[x]$ is a principal ideal domain
* $\mathbb Z[i]$ is a principal ideal domain

**Example**: $\mathbb Z[1 + \sqrt{-19}{2}]$ is a principal ideal domain but not a Euclidean domain.

**Definition**: Let $D$ be an integral domain.
1. An element $a$ **divides** $b$, written $a \mid b$ if there is a $c$ such that $b = ac$.
2. A non-zero element $a \in D$ is **prime** if for any $b, c \in D$, if $a \mid bc$ then $a \mid b$ or $a \mid c$.
3. Elements $a, b \in D$ are **associates** if there is a unit $u \in D$ such that $au = b$.
4. A non-zero non-unit element $a \in D$ is **irreducible** if for any $b, c \in D$, if $a = bc$ then either $b$ or $c$ is a unit.

**Example**: In $\mathbb Z$:
* $2 \mid 4, 3 \mid 12, 2 \not \mid 3$
* $1$ and $-1$ are associates, as are $2$ and $-2$; $2$ and $2$
* prime elements are the prime numbers
* irreducible elements are the prime numbers

**Example**: In $\mathbb R[x]$,
* $x \mid x^2$, $(x + 1) \mid (x^2 - 1)$
* $x + 1$ and $37x + 37$ are associates
* $x^2 + 2x - 3$ and $-x^2 - 2x + 3$ are associates

**Proposition**: Every prime element is irreducible.

*Proof*: Let $D$ be an integral domain and $p \in D$ a prime element. Suppose $p = bc$, so $p \mid bc$. Then $p \mid b$ or $p \mid c$. WLOG, suppose $p \mid c$. Then $c = ap$, so $p = bc = bap$. Thus $0 = p - bap = (1 - ba)p$. Since $p$ is prime, $p \neq 0$, so $1 - ba = 0$, and so $ba = 1$. Thus $b$ is a unit.

**Proposition**: In a principal ideal domain, an element $p$ is prime if and only if it is irreducible.

*Proof*: TODO.

**Example**: 2 is irreducible but not prime in $\mathbb Z[\sqrt -5] = \lbrace a + b\sqrt{-5} \mid a, b \in \mathbb Z\rbrace$, defined with the operations

$$
(a + b\sqrt{-5}) + (c + d\sqrt{-5}) = (a + c) + (b + d)\sqrt{-5} \\
$$

and

$$
(a + b\sqrt{-5})(c + d\sqrt{-5}) = (ac - 5bd) + (ad + bc)\sqrt{-5}
$$

One can check that $\mathbb Z[\sqrt{-5}]$ is a commutative ring.

*Proof*: Define a function $N: \mathbb Z[\sqrt{-5}] \to \mathbb N$ by $a + b\sqrt{-5} \mapsto a^2 + 5b^2$, that is, $N(x) = x\overline x$. Note that $N(x) = 0$ if and only if $x = 0$, and $N(xy) = N(x)N(y)$. First we show that $N(x) = 1$ if and only if $x$ is a unit in $\mathbb Z[{\sqrt -5}]$. Suppose $a^2 + 5b^2 = 1$. Then $b = 0$ and $a = 1$ or $a = -1$, which can be shown to be units. Now if $x$ is a unit, then there is a $y$ such that $xy = 1$. Then $N(xy) = 1 = N(x)N(y)$. So $N(x) = N(y) = 1$.

Finally, we show that if $N(x)$ is a prime number, then $x$ is irreducible. Suppose $N(x)$ is prime and $x = yz$. Then $N(x) = N(yz) = N(y)N(z)$. Since $N(x)$ is prime, either $N(y) = 1$ or $N(z) = 1$, so either $y$ or $z$ is a unit.

In $\mathbb Z[\sqrt{-5}]$, $6 = (1 + \sqrt{-5})(1 - \sqrt{-5})$. So $2 \mid 6$, but $2$ does not divide $(1 \pm \sqrt{-5})$. So it is not prime. We show $2$ is irreducible. We have $N(2) = 4$, so if $xy = 2$, then $4 = N(xy) = N(x)N(y)$. $N(x) = N(y) = 2$ is impossible since $a^2 + 5b^2 = 2$ has no integer solutions. So $N(x)$ or $N(y)$ is 1, so $x$ or $y$ is a unit. $\blacksquare$

**Theorem (Fundamental Theorem of Arithmetic)**: Every integer $n$ greater than $1$ can be written as the a product of primes

$$
n = p_1^{e_1}p_2^{e_2}\dots p_k^{e_k}
$$

unique up to the order of primes.

## Unique Factorization Domains and Noetherian Domains

**Definition**: A **unique factorization domain (UFD)** is an integral domain $D$ such that every non-zero non-unit element can be written as a unique (up to order and associates) product of irreducible elements.

**Definition**: A commutative ring $R$ is **Noetherian** if, given any ascending chain of ideals $I_0 \subseteq I_1 \subseteq I_2 \subseteq \dots$ in $R$, there is an $N \in \mathbb N$ such that $I_n = I_{n + 1}$ for all $n \geq N$.

**Example**:
* $(60) \subseteq (60) \subseteq (30) \subseteq (15) \subseteq (1) = \mathbb Z = \dots$
* $(60) = (60) = \dots$

**Definition**: A **Noetherian domain** is an integral domain that is Noetherian.

**Lemma** Let $R$ be a commutative ring and $I_0 \subseteq I_ \subseteq \dots$ an ascending chain of ideals. Let $I = \bigcup_{i \in \mathbb N}$. Then $I$ is an ideal.

*Proof*: $I$ is an abelian subgroup since $a - b \in I_i$ for $a, b \in I$, where $i$ is the ideal common to both $a$ and $b$ in the chain. Absorption and closure follows from the fact that each of the individual $I_i$'s are ideals. $\blacksquare$

**Remark**: The arbitrary union of ideals are not ideal in general. For example, $(2) \cup (3) \subseteq \mathbb Z$ is **not** an ideal.

**Theorem**: Every principal ideal domain is Noetherian.

*Proof*: The union of ascending ideals is generated by a single element $a$, so one of such ascending ideals must contain $a$ (of which it also generated by), since it is a superset of the union. So $(a) \subseteq (a) = (a) = \dots$. $\blacksquare$

**Example**: $\mathbb Z[x]$ is Noetherian but not a PID.

**Example**: $\mathbb Q[x_1, x_2, \dots]$, polynomials in infinitely many variables, is not Noetherian as $(x_1) \subseteq (x_1, x_2) \subseteq \dots$

**Lemma**: In a PID, every non-zero non-unit element has an irreducible factor.

*Proof*: Given a non-zero, non-unit element $a$, continually factor it into reducible factors. Eventually one of the factors will be irreducible, since if $a \mid b$ then $(b) \subseteq (a)$. So the sequence of factors forms an ascending chain of ideals, which stabilizes since every PID is Noetherian. $\blacksquare$

**Lemma**: In a PID, every non-zero non-unit element factors into irreducibles.

*Proof*: Use the above lemma on each reducible factor until just one reducible factor is left. Then, similar to above, continually factor it until it factors into irreducibles, which is guaranteed by the stabilizing property of ascending chains of ideals. $\blacksquare$

**Lemma**: Let $D$ be an integral domain and $p$ a prime element. If $p \mid a_1 \dots a_n$, then $p \mid a_i$ for some $i = 1, \dots, n$.

*Proof*: By induction using the definition of primality. $\blacksquare$

**Theorem**: Every PID is a UFD.

*Proof*: TODO.

## Polynomial Rings

**Recall**: Let $R$ be a ring. We can form $R[x] = \lbrace a_nx^n + a_{n - 1}x^{n - 1} + \dots + a_1x + a_0 \mid a_i \in R \rbrace$.

**Remark**: Let $D$ be an integral domain.
1. If $f(x), g(x) \in D[x]$ that are non-zero, then $\operatorname{deg}(f(x) \cdot g(x)) = \operatorname{deg} f(x) + \deg g(x)$
2. $D[x]$ is an integral domain.

**Example**: Think of a commutative ring with unity $1 \neq 0$ such that (1) fails.

**Theorem (Scholium)**: If $F$ is a field, then $F[x]$ is very much like $\mathbb Z$.

**Division Algorithm for F[x]**: Let $F$ be a field. For $f(x), g(x) \in F[x]$ such that $g(x)$ is non-zero, there are unique polynomials $q(x)$ and $r(x)$ such that

$$
f(x) = g(x)q(x) + r(x)
$$

where $r(x) = 0$ or $\deg r(x) \lt \deg g(x)$.

*Proof*: Let $f(x) = a_nx^n + \dots + a_1x + a_0$, $g(x) = b_m x^m + \dots + b_1x + b_0$, $a_n, b_n \neq 0$. If $\deg f(x) \lt \deg g(x)$, (or $f(x) = 0$), then $q(x) = 0$ and $r(x) = f(x)$.

Suppose that $\deg f(x) \geq \deg g(x)$. We proceed by induction with respect to $\deg f(x)$. Assume that we can divide polynomials of degree less than $n$ with remainder by $g(x)$. To divide $f(x)$ by $g(x)$ with remainder:

Define $f_1(x) = f(x) - a_n b_m^{-1}x^{n - m}g(x)$. Then $f_1(x)$ has degree less than $n$. By the inductive hypothesis, there are polynomials $q_1(x), r_1(x)$ such that $f_1(x) = g(x)q_1(x) + r_1(x)$ and $r_1(x) = 0$ or $\deg r_1(x) \lt g(x)$. Then

$$
\begin{align*}
f(x) &= a_nb_m^{-1} x^{n - m} g(x) + f_1(x) \\
&= g(x)(a_nb_m^{-1} x^{n - m} + q_1(x)) + r_1(x)
\end{align*}
$$

Put $q(x) = a_nb_m^{-1} x^{n - m} + q_1(x)$ and $r(x) = r_1(x)$. Then $f(x) = g(x)q(x) + r(x)$, and $r(x) = 0$ or $\deg r(x) \lt \deg g(x)$.

It remains to show that these $q(x)$ and $r(x)$ are unique.

Suppose $f(x) = g(x)q_1(x) + r_1(x)$ with $r_1(x) = 0$ or $\deg r_1(x) \lt \deg g(x)$ and $f(x) = g(x)q_2(x) + r_2(x)$ with $r(x) = 0$ or $\deg r_2(x) \lt \deg g(x)$. We have

$$
g(x) q_1(x) + r_1(x) = g(x) q_2(x) + r_2(x)
$$

Then

$$
g(x) q_1(x) - g(x)q_2(x) = r_2(x) - r_1(x)
$$

The RHS is a polynomial of degree less than $\deg g(x)$. So the LHS must be such a polynomial. Thus $q_1(x) - q_2(x) = 0$, so $q_1(x) = q_2(x)$. Then

$$
r_1(x) = f(x) - g(x)q_1(x) = f(x) - g(x)q_2(x) = r_2(x)
$$

**Corollary**: Let $F$ be a field. For $f(x) \in F[x]$, we have $f(a) = 0$ if and only if $f(x) = (x - a)g(x)$ for some $g(x) \in F[x]$.

*Proof*: $(\rightarrow)$ Suppose $f(a) = 0$. We divide $f(x)$ by $x - a$ with remainder: $f(x) = (x - a)g(x) + r(x)$ where $r(x)$ is a constant polynomial. Then $0 = f(a) = (a - a)g(a) + r(a) = r(a)$. Thus $r(x) = 0$.

$(\leftarrow)$ Suppose $f(x) = (x - a)g(x)$. Then $f(a) = (a - a)g(a) = 0$. $\blacksquare$

### Factorization of Polynomials

Recall: If $F$ is a field, then $F[x]$ is a PID because it is a Euclidean domain.

$p$ is prime if and only if $\langle p \rangle$ in any integral domain.

In a PID, $p$ is irreducible if and only if $p$ is prime if and only if $\langle p \rangle$ is prime if and only if $\langle p \rangle$ is maximal.

**Example**: Given $f(x) \in R[x]$, is it reducible?

If $f(x)$ is an irreducible polynomial in $\mathbb Z_[x]$ of degree $n$, then $\mathbb Z_p[x]/\langle f(x) \rangle$ is a field with $p^n$ elements.

**Remark**: The irreducibility of above depends on the above.

**Example**: $f(x) = x^2 + 1$ is
* irreducible in $\mathbb R[x]$ $\mathbb Q[x]$, $\mathbb Z[x]$
* is reducible in $\mathbb C[x]$, since $f(x) = (x + i)(x - i)$
* reducible in $\mathbb Z_2[x]$, with $(x + 1)^2$
* reducible in $\mathbb Z_5[x]$, with $(x + 3)(x + 2)$
* irreducible in $\mathbb Z_3[x]$ (shown **below**)

**Lemma**: Let $F$ be a field and $f(x) \in F[x]$ be a polynomial of degree at most 3. Then $f(x)$ is irreducible if and only if it doesn't have a root (there is no $a \in F$ such that $f(a) = 0$.)

**Recall**: $f(a) = 0$ if and only if $f(x) = (x - a) g(x)$ for some $g(x)$.

*Proof*: It is clear that polynomials of degree 1 are irreducible.

$(\rightarrow)$ By contrapositive, assume $f(x)$ has a root $a$, so $f(x) = (x - a)g(x)$. Then it is not irreducible.

$(\leftarrow)$ By contrapositive, if $f(x) = g(x)h(x)$ for $\deg g(x), \deg h(x) \geq 1$, then at least one of $g(x)$ or $h(x)$ must have degree 1, so there is a root.

**Example**: $f(x) = x^2 + 1$ is irreducible in $\mathbb Z_3[x]$ as there are no roots.

**Example**: $f(x) = x^3 + x^2 + 1$ has no roots so it is irreducible.

**Remark**: $f(x) = x^4 + 2x^2 + 1$ is reducible in $\mathbb Q[x]$ but it doesn't have a root.

**Example**: $f(x) = 2x + 2 = 2(x + 1)$ is reducible in $\mathbb Z[x]$ but not in $\mathbb Q[x]$ (since 2 is a unit).

#### Content and Primitives

**Definition**: Let $f(x) \in \mathbb Z[x]$ with $f(x) = \sum a_kx^k$.
1. The **content** of $f(x)$ is $\operatorname{gcd}(a_1, \dots, a_n)$.
2. The polynomial $f(x)$ is **primitive** if its content is 1.

**Gauss's Lemma**: The product of primitive polynomials is again primitive.

*Proof*: Let $f(x), g(x) \in \mathbb Z[x]$ be primitive and suppose their product is not primitive. Let $p$ be a prime divisor of the content of $f(x)g(x)$. Let $\overline f(x)$ and $\overline g(x)$ be the polynomials in $\mathbb Z_p[x]$ obtained by reducing the coefficients of $f$ and $g$ respectively by $p$. Then $\overline f(x)\overline g(x) = 0 \in \mathbb Z_p[x]$. As $\mathbb Z_p[x]$ is an integral domain, either $\overline f \equiv 0$ or $\overline g \equiv 0$. WLOG assume $\overline f \equiv 0$. So the content of $f$ is divisible by $p$, so $f$ is not primitive; a contradiction. $\blacksquare$

**Theorem**: Let $f(x) \in \mathbb Z[x]$. If $f(x)$ is irreducible in $\mathbb Z[x]$, then it is irreducible in $\mathbb Q[x]$.

*Proof*: We prove the contrapositive. Let $f(x) \in \mathbb Z[x]$. Suppose it is reducibile in $\mathbb Q[x]$ with non-unit factors $g(x)$ and $h(x)$. If $f(x)$ is not primitive, then $g(x), h(x) \in \mathbb Z[x]$ and we are done. So suppose otherwise. Then $g(x) = \sum \frac{a_m}{b_m} x^m$ and $h(x) = \sum\frac{c_n}{d_n} x^n$. Then $bg(x)$ and $dh(x)$ have integer coefficients, where $b$ and $d$ are the least-common multiples of $b_1, \dots, b_m$ and $d_1, \dots, d_m$, respectively. So $bg(x)$ and $dh(x)$ have contents $\tilde b$ and $\tilde d$. Then there are primitive polynomials $\tilde g$ and $\tilde h$ in $\mathbb Z[x]$ such that $bg = \tilde b \tilde g$ and $dh = \tilde d \tilde h$. So

$$
bdf(x) = \tilde b \tilde d \tilde g(x) \tilde h(x)
$$

By Gauss' Lemma, $\tilde g \tilde h$ is primitive, so $bd = \tilde b \tilde d$ since this is the content of $bdf(x)$. So $f(x) = \tilde g(x) \tilde h(x)$, by Cancellation. $\blacksquare$

**Corollary**: Let $f \in \mathbb Z[x]$ be primitive. Then $f \in \mathbb Z[x]$ is irreducible if and only if it is irreducible in $\mathbb Q[x]$.

**Eisenstein's Criterion**: Let $f(x) = \sum a_nx^n \in \mathbb Z[x]$. Suppose there is a prime $p$ such that
1. $p \nmid a_n$
2. $p \mid a_0, \dots, a_{n - 1}$
3. $p^2 \nmid a_0$

Then $f(x)$ is irreducible in $\mathbb Q[x]$. If moreover the content is 1, then it is irreducible in $\mathbb Z[x]$.

*Proof*: We prove by contradiction. Suppose $f$ is reducible in $\mathbb Q[x]$ with non-unit factors $g, h \in \mathbb Q[x]$. Let $\overline g, \overline h$ be the polynomials obtained by reducing $g, h$ by $\bmod p$ (a prime divisor $p$ of the content of $fg$). Then $\overline f = \overline g \overline h \in \mathbb Z_p[x]$ so $f(x) = \overline a_n x^n$. Thus $x \mid \overline g(x)$ and $x \mid \overline h(x)$. So $\overline g(0) = 0$ and $\overline h(0) = 0$. Then $a_0 = f(0) = g(0)h(0)$. As $\overline g(0) = 0$ and $\overline h(0) = 0$, $p \mid g(0)$ and $p \mid h(0)$. So $p^2 \mid g(0)h(0) = f(0) = a_0$, a contradiction. $\blacksquare$

**Example**: $x^4 + 10x + 5$ is irreducibile in $\mathbb Z[x]$ by Eisenstein's Criterion with $p = 5$.

**Example**: $f(x) = x^4 + 1$. No primes divide 1. But, note that $f(x)$ is irreducible if and only if $f(x + 1)$ is irreducible, since if $f(x + 1) = g(x)h(x)$ then $f(x) = g(x - 1)h(x - 1)$. We have

$$
f(x + 1) = (x + 1)^4 + 1 = x^4 +  4x^3 + 6x^2 + 4x + 2
$$

is irreducible by Eisenstein's Criterion with $p = 2$.

**Example**: $\Phi_p = x^{p - 1} + x^{p - 2} + \dots + x + 1 = \frac{x^p - 1}{x - 1}$ for $p$ prime. It suffices to show that $\Phi_p(x + 1)$ is irreducible.

$$
\Phi_p(x + 1) = \frac{(x + 1)^p - 1}{x} = \frac{1}{x} \sum_{i = 1}^p \binom{p}{i} x^i = \sum_{i = 1}^p \binom{p}{i} x^{i - 1}
$$

Each of $\binom{p}{i}$ is divisible by $p$ for $i = 1, \dots, p - 1$. The result follows by Eistenstein.

**Theorem**: If $D$ is a UFD, then so is $D[x]$.

*Proof*: (Existence) Let $f(x) \in D[x]$. Let $a$ be the content of $f(x)$ that can be factored in $D$ into irreducibles. Assume $f(x)$ is primitive. We proceed by induction on $\deg f(x) = n$.
If $n = 1$, then $f(x)$ is irreducible. Now suppose every primitive polynomial of degree $\lt n$ can be factored into irreducibles. Let $f(x)$ be a polynomial of degree $n$, which is primitive. If $f(x)$ is irreducible, we are done. So suppose it isn't and factor it into $g, h$ of degree lesser than $f$. Then both are primitive and by the inductive hypothesis they can be factored into irreducibles.

(Uniqueness) Suppose $f$ factors into $\prod a_mp_m(x)$ and $\prod b_nq_n(x)$ where $p, q$ are primitives and $a, b$ are irreducibles in $D$. Then $\prod a_m = \prod b_n$ as they are both the content of $f$ since $\prod p_m$ and $\prod q_n$ are primitive by Gauss' Lemma. Since $D$ is a UFD, $k = l$ and after ordering $a_1$ and $b_i$ are associates for $i = 1, \dots, m$ since $m = n$. It remains to show that the polynomial factors associate. As irreducibility in $D[x]$ and the field of fractions $F_D[x]$ is the same for primitive oplynomials, and $F_D[x]$ is a UFD, so we're done. $\blacksquare$    