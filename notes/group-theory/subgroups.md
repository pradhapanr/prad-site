---
toc: true
order: 2
layout: default
---

# Subgroups

## Definition and Examples

**Definition**: Let $G$ be any group. Then a subset $H \subseteq G$ is a **subgroup** of $G$ if
1. $1_G \in H$
2. $H$ is closed under products and inverses

That is, $H$ is a group using the operation inherited from $G$. In this case, we write $H \leq G$.

If $H \leq G$ but $H \neq G$, then $H \lt G$ and is called a **proper subgroup** of $G$.

**Definition**: $H = \lbrace 1 \rbrace$ is called the **trivial subgroup**. We write $H = 1$. 

**Example**:
* $\mathbb Z \leq \mathbb Q \leq \mathbb R \leq \mathbb C$
* $n\mathbb Z \leq \mathbb Z, \forall n \in \mathbb Z$
* $\mathbb Z^+ \nleq (\mathbb Z, +)$
* $\mathbb Z^+ \nleq (\mathbb R^+, \cdot)$
* $\mathbb Q^+ \leq \mathbb R^+$
* The rotations of a square is a subgroup of all the symmetries of a square.

**Example**: We can replace the condition that $1_G \in H$ by $H \neq \emptyset$.

*Proof*: If $H \neq \emptyset$, then there is an $x \in H$. So by 2., $x^{-1} \in H$. So $1_G = xx^{-1} \in H$. $\blacksquare$

**Proposition**: If $G$ is any group and $H \subseteq G$ is finite such that $H \neq \emptyset$ and $H$ is closed under products, then $H \leq G$.

*Proof*: It suffices to show that $H$ is closed under inverses. Let $x \in H$. Then $x, x^2, x^3, \dots \in H$. Since $H$ is finite, for some $a \lt b \in \mathbb Z^+$, $x^a = x^b$. Then

$$
x^{b - a} = x^bx^{-a} = (x^b)(x^a)^{-1} = (x^b)(x^b)^{-1} = 1
$$

Let $n = b - a \in \mathbb Z^+$. So $1 = x^n = x^{n - 1}x \implies x^{-1} = x^{n - 1} \in H$, since $n - 1 \geq 0$. $\blacksquare$

**Counterexample**: The positive integers are a subset of the integers but do not form a group even though they are closed under addition, since the group is not finite.

**Definition**: The subset of an abelian group $G$ consisting of all elements of finite order in $G$ is called the **torsion subgroup** of $G$, denoted $T(G)$.

**Proposition (Exercise 6)**: $T(G) \leq G$.

*Proof*: $1 \in T(G)$ since $\vert 1 \vert = 1$ so $T(G) \neq \emptyset$. Let $a, b \in T(G)$. The subgroup criterion follows from the fact that the order of a product of elements with finite order is itself finite if the elements commute, since $(ab)^n = a^nb^n$. $\blacksquare$

## Centralizers, Normalizers, Stabilizers, and Kernels

### Centralizers, Normalizers, and Centers

**Definition**: The **centralizer** of $A \subseteq G$ in $G$, denoted $C_G(A) \leq G$, is the set of elements in $G$ that commute with every element in $A$.

**Example**:
* Subsets where the centralizer is the entire group: Any abelian group (e.g. $\mathbb Z$)
* Subsets where the centralizer is a proper subset of the entire group: $\lbrace 1, r, r^2, r^3 \rbrace = \lbrace 1, r, r^2, r^3 \rbrace$ in $D_8$

**Proposition**: $C_G(A) \leq G$.

*Proof*: If $x$ and $y$ commute with every element in $A$ then so does $(xy)^{-1}$. $\blacksquare$

**Definition**: The set of elements commuting with all the elements of $G$ is called the **center** of $G$, denoted $Z(G)$.

**Proposition**: $Z(G) \leq G$.

*Proof*: Since $Z(G) = C_G(G)$, the proposition follows from above. $\blacksquare$

**Definition**: The **normalizer** of $A \subseteq G$ in $G$ is defined as

$$
    N_G(A) = \lbrace g \in G \mid gAg^{-1} = A \rbrace
$$

**Remark**: $C_G(A) \subseteq N_G(A)$.

**Proposition**: $N_G(A) \subseteq G$.

*Proof*: Direct from the subgroup criterion. $\blacksquare$

**Example**: If $G$ is abelian than $Z(G) = G$, $C_G(A) = N_G(A) = G$.

### Stabilizers and Kernels of Group Actions

**Definition**: Let $G$ act on a set $S \neq \emptyset$ and let $s \in S$. Then

$$
G_s = \lbrace g \in G \mid gs = s \rbrace
$$

are the set of elements that **fix** $s$, that is, $g$ **fixes** $s$. Then $G_s$ is the **stablizer** of $s$ in $G$.

**Proposition**: $G_s \leq G$.

*Proof*: Note that $1 \in G_s$. Let $x, y \in G_s$. Then $xs = s$ and $ys = s$. So $(xy)s = x(ys) = xs = s$, so $xy \in G_s$, and the stabilizer is closed under products. We can also show it is closed under inverses. $\blacksquare$

**Proposition**: The kernel of an action is a subgroup.

**Proposition**: The stabilizer of an action is a subgroup.

## Cyclic Groups

**Definition**: A group $H$ is **cyclic** if there is an $x \in H$ such that $H = \lbrace x ^n \mid n \in \mathbb Z \rbrace$. In this case, we write $H = \langle x \rangle$, that is, $x$ **generates** $H$.

**Example**:
* $\mathbb Z = \langle  1 \rangle = \lbrace n1 \mid n \in \mathbb Z \rbrace = \langle -1 \rangle$
* $\mathbb Z/m\mathbb Z = \langle \overline 1 \rangle$
* Let $i \in Q_8 = \lbrace \pm 1, \pm i, \pm j, \pm k \rbrace$. Then $\langle i \rangle = \lbrace \pm 1, \pm i \rbrace \leq Q_8$ is a cyclic subgroup of $Q_8$.
* $\langle r \rangle = \lbrace 1, r, r^2, \dots, r^{n - 1} \rbrace \leq D_{2n}$ is a cyclic subgroup of the dihedral group.
* $\langle s \rangle = \lbrace 1, s \rbrace \leq D_{2n}$ is also a cyclic subgroup of $D_{2n}$

**Example**: $\mathbb Q$ is not cyclic.

*Proof*: Suppose $\mathbb Q = \langle a/b \rangle$. We can assume $(a, b) = 1$. Let $p$ be a prime such that $p \nmid b$. Then $1/p = na/b$ for some $n \in \mathbb Z$. But then $pna = b$, so $p \mid b$; a contradiction.

**Example**: $\mathbb R$ is not cyclic.

*Proof*: $\mathbb R$ is uncountable. $\blacksquare$

**Proposition**: The order of a cyclic group is the order of its generator.

**Proposition**: If $x^m = 1$ and $x^n = 1$, then $x^{(m,n)} = 1$.

*Proof*: By the Euclidean algorithm, $x^{(m, n)} = x^{mr + ns} = (x^m)^r(x^n)^s = 1$, for integers $r, n$. $\blacksquare$

**Theorem**: Any two cyclic groups of the same order are isomorphic. Any infinite cyclic group is isomorphic to the integers.

*Proof*: For the first, map like-powers to like-powers. For the second, map an integer $k$ to the $k$-th power of the generator. $\blacksquare$

**Proposition 5**: Let $G$ be a group, $x \in G$, and $a \in \mathbb Z - \lbrace 0 \rbrace$.

1. If $\vert x \vert = \infty$, then $\vert x^a \vert = \infty$.
2. If $\vert x \vert = n$, then $\vert x^a \vert = \frac{n}{(n, a)}$

*Proof* $(1)$ If $\vert x^a \vert = n \lt \infty$, then $x^{an} = 1$ so $\vert x \vert \leq an \lt \infty$. $\blacksquare$

**Proposition**: Let $H = \langle x \rangle$.
1. If $\vert x \vert = \infty$, then $H = \langle x^a \rangle$ iff $a = \pm 1$.
2. If $\vert x \vert = n \lt \infty$, then $H = \langle x^a \rangle$ iff $(a, n) = 1$. In general, the number of generators of $H$ is $\varphi(n)$ (where $\varphi$ is Euler's $\varphi$-function).

*Proof*: (2) Since $\langle x^a \rangle = H$ iff $\vert x^a \vert = \vert x \vert$, and from the above proposition, this is only true when $\frac{n}{(n, a)} = n$, that is, $(n, a) = 1$. $\blacksquare$

**Theorem**: Let $H = \langle x \rangle$ be a cyclic group.
1. Every subgroup of $H$ is cyclic.
2. If $\vert H \vert = \infty$, then for any distinct nonnegative integers $a$ and $b$, $\langle x^a \rangle \neq \langle x^b \rangle$.
3. If $\vert H \vert = n$, there is a unique subgroup of $H$ of order $a$ for each positive integer $a$ dividing $n$, that is, $\langle x^{n/a} \rangle$.
   1. For every integer $m$, $\langle x^m \rangle = \langle x^{(n, m)} \rangle$, so the subgroups of $H$ correspond bijectively with the positive divisors of $n$.

## Subgroups Generated by Subsets of a Group

**Proposition 8**: The intersection of any non-empty collection of subgroups of $G$ is itself a subgroup of $G$.

*Proof*: Application of the subgroup criterion. $\blacksquare$

**Definition**: Let $A \subseteq G$. The **subgroup of $G$ generated by $A$** is

$$
\langle A \rangle = \bigcap_{A \subseteq H, H \leq G} H
$$

that is, the intersection of all subgroups of $G$ containing $A$.

**Proposition 9**: $\overline A = \langle A \rangle$ where

$$
\overline A := \lbrace a_1^{\epsilon_1} \dots a_n^{\epsilon_n} \mid n \in \mathbb Z, n \geq 0, a_i \in A, \epsilon_i = \pm 1 \rbrace
$$

and $\overline A = \lbrace 1 \rbrace$ if $A = \emptyset$.

*Proof*: First note that $\overline A$ is a subgroup since it is non-empty and $ab^{-1} \in \overline A$ for $a, b \in \overline A$. $\overline A \subseteq \langle A \rangle$ by closure of subgroups and $\langle A \rangle \subseteq \overline A$ since any $a \in A$ may be written $a^1$. $\blacksquare$

**Definition (Exercise 19)**: A nontrivial abelian group $A$ is **divisible** if for every element $a \in A$ and non-zero integer $k$ there is an element $x \in A$ such that $x^k = a$. (or $kx = a$, written additively).

**Example (Exercise 19)**: The additive group of rational numbers $\mathbb Q$ is divisible.

*Proof*: Let $a \in A$ and $k \in \mathbb Z - \lbrace 0 \rbrace$. Then $x = a/k \in \mathbb Q$ with $kx = a$. $\blacksquare$

**Proposition (Exercise 19)**: No finite abelian group is divisible.

*Proof*: Let $G$ be a finite, divisible group. Since it is non-trivial, choose $g \in G - \lbrace 1 \rbrace$. Let $k = \vert G \vert$. By divisbility, there is some $x$ such that $x^k = g$. But since $G$ is finite, then $x^k = 1$; a contradiction. $\blacksquare$

## Lattice of Subgroups of a Group

**Definition**: The **lattice of subgroups of a group** is a graph where the nodes are the subgroups, and directed edges denote that one group is a subgroup of another.

**Remark**: Isomorphic groups have identical lattice forms, but not the converse.

**Remark**: $V_4$ and $Z_4$ are not isomorphic because they have different lattice structures.

