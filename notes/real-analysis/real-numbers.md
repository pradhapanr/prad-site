---
layout: default
order: 4
toc: true
---
# Real Numbers

## Fields

**Definition**: A **field** is a triple $(\mathbb F, +, \cdot)$ where $\mathbb F$ is a nonempty set, $+: \mathbb F \times \mathbb F \to \mathbb F$, and $\cdot: \mathbb F \times \mathbb F \to \mathbb F$ are functions, called **addition** and **multiplication**, satisfying the following axioms:
* addition is closed ($\forall x, y \in \mathbb F, x + y \in \mathbb F$)
* addition is commutative
* addition is associative
* there exists an additive identity $0$ for any $x \in \mathbb F$
* there exists an additive inverse $-x$ for any $x \in \mathbb F$
* multiplication is closed
* multiplication is commutative
* multiplication is associative
* there exists a multiplictaive identity $1$
* there exists a multiplicative inverse $y = x^{-1}$ for any $x \in \mathbb F$
* distributivity $\forall x,y,z \in \mathbb F, x \cdot (y + z) = x \cdot y + x \cdot z$

**Theorem**: Let $(\mathbb F, +, \cdot)$ be a field. Then,
1. The additive and multiplicative identities are unique.
2. $\forall x \in \mathbb{F}, -x$ is unique.
3. $\forall x \in \mathbb{F} \setminus \lbrace 0 \rbrace, x^{-1}$ is unique.
4. $\forall x, y \in \mathbb{F} (x + z = y + z) \implies (x + y)$ (cancellation law)
5. $\forall x \in \mathbb{F}, x \cdot 0 = 0$
6. $\forall x \in \mathbb F, (-1) \cdot x = -x$
7. $\forall x,y \in \mathbb F, x \cdot y = 0 \implies (x = 0 \lor y = 0)$
8. $\forall x, y \in \mathbb F, \exists ! z \in \mathbb F, x = y + z$ (subtraction)
9. $\forall x \in \mathbb F, \forall y \in \mathbb F \setminus \lbrace 0 \rbrace, \exists ! x \in \mathbb F, x = y \cdot z$ (division)

*Proof*:
1. Let $0_1, 0_2$ be additive identities. Then $0_1 = 0_1 + 0_2 = 0_2 + 0_1 = 0_2$. Similarily, let $1_1, 1_2$ be multiplicative identities. Then $1_1 = 1_1 \cdot 1_2 = 1_2 \cdot 1_1 = 1_2$. $\blacksquare$
2. Let $x \in \mathbb F$ with $x + y_1 = 0$ and $x + y_2 = 0$. Then $y_1 = y_1 + x + y_2 = y_2 + (x + y_1) = y_2$. $\blacksquare$
3. Let $x \in \mathbb F$ with $x \cdot y_1 = 1$ and $x \cdot y_2 = 1$. Then $y_1 = y_1 \cdot x \cdot y_2 = y_2$. $\blacksquare$
4. Suppose $x + z = y + z$. Then $x = x + z + (-z) = y + z + (-z) = y$. $\blacksquare$
5. We have $x \cdot 0 = x \cdot (0 + 0) = x \cdot 0 + x \cdot 0$. And, $x \cdot 0 = x \cdot 0 + 0$, so $x \cdot 0 + x \cdot 0 = x \cdot 0 + 0$, thus by cancellation, $x \cdot 0 = 0$. $\blacksquare$
6. $(-1) \cdot x + x = (-1 + 1) \cdot x = 0 \cdot x = 0$. By (2), $(-1) \cdot x = -x$. $\blacksquare$
7. Suppose $x \neq 0$ and $y \neq 0$. Then, $x$ and $y$ have multiplicate inverses $x^{-1}$ and $y^{-1}$, so $1 = x^{-1} \cdot x \cdot y \cdot y^{-1} = 0$; a contradiction. $\blacksquare$
8. Given $x, y \in \mathbb F$, define $z = x + (-y)$. Then $y + z = y + x + (-y) = x$. If for some other $w \in \mathbb F, x = y + w$, then $x = y + z = y + w \implies z = w$, by (4). $\blacksquare$
9. Given $x, y \in \mathbb F$, define $z = y^{-1} \cdot x$. Then $y \cdot z = y \cdot y^{-1} \cdot x = x$. If for some other $w \in \mathbb F, x = y \cdot w$, then $w = 1 \cdot w = y^{-1} \cdot y \cdot w = y^{-1} \cdot x = z$. $\blacksquare$

**Definition**: The **characteristic** of a field $\mathbb F$ is defined as the smallest number of times needed to sum the multiplicative identity of $\mathbb F$ to obtain 0. That is,

$$
\begin{align*}
    \operatorname{char}(\mathbb F) = \begin{cases}
        p & p = \operatorname{min}\lbrace k \in \mathbb N : 1_1 + \dots + 1_k = 0\rbrace \\
        0 & \text{if $p$ doesn't exist} 
    \end{cases}
\end{align*}
$$

**Example**:
1. $\mathbb Q = \lbrace p/q : p \in \mathbb Z, q \in \mathbb N_+ \rbrace$ is the smallest field of characteristic $0$.
2. $\mathbb R, \mathbb C$ are other fields of characteristic 0.
3. Let $p \in \mathbb N$ be prime. Define $\mathbb{Z}_p = \lbrace \overline 0, \overline 1, \dots, \overline{p - 1} \rbrace$ with addition and multiplication included from $\mathbb Z \pmod p$. Then, $\mathbb Z_p$ is a field and $\operatorname{char} (\mathbb Z_p) = p$.

### Ordered Fields

**Definition**: An **ordered field** is a field equipped with a linear order relation compatible with the field addition and multiplication. That is, $(\mathbb F, +, \cdot)$ is an ordered field when there is a relation $<$ on $\mathbb F$ satisfying the following (OF) axioms:
1.  $\forall x, y \in \mathbb F$, one of $x \lt y$,  $x = y$, $y \lt x$ is true (trichotomy)
2. $\forall x, y, z \in \mathbb F, x < y \land y < z \implies x < z$ (transitivity)
3. $\forall x, y, z \in \mathbb F, x \lt y \implies x + z \lt y + z$
4. $\forall x, y, z \in \mathbb F, x \lt y \land 0 < z \implies x \cdot z \lt y \cdot z$

*Notation*: We write $x \leq y$ when $x \lt y \lor x = y$.

**Example**: $\mathbb Q, \mathbb R$ with $\lt$. But, $\mathbb C$ and $\mathbb Z_p$ are NOT ordered fields! ($\mathbb Z_p$ does not satisfy (OF3)). Show that no relation $\lt$ can exist for $\mathbb C$ that complies with the order axioms.

*Proof*: Suppose for the sake of contradiction that an ordering exists. Then, either $0 \lt i$ or $0 \gt i$, since $i \neq 0$. Suppose $0 \lt i$. Then by (OF4), $0i \lt i^2 \implies 0 \lt -1 \implies 0 \lt (-1)^2 = 1$. Then, by (OF3), $0 \lt -1 \implies 0 + 1 \lt -1 + 1 \implies 1 \lt 0$. We have $0 \lt 1$ and $1 \lt 0$, contradicting (OF1).

So suppose $i < 0$. Then by (OF3), $0 < -i$, so by (OF4) $0 < (-i)^2 = -1$. Then, by (OF3), $0 + 1 = 1 < -1 + 1 = 0$, We have $0 < 1$ and $1 < 0$, contradicting (OF1). $\blacksquare$

**Definition**: Let $(\mathbb F, \lt)$ be an ordered field. We say $a \in \mathbb F$ is **positive** if $0 \lt a$ and **negative** if $a \lt 0$ (and **non-negative** if $0 \leq a$).

**Theorem**: Let $(\mathbb F, \lt)$ be an ordered field with $x, y, z, w \in \mathbb F$. Then,
1. $(x \lt y \land z \lt w) \implies x + z \lt y + w$
2. $x \lt y \implies -y \lt -x$
3. $x \lt y \land z \lt 0 \implies xz > yz$
4. $0 \lt 1$
5. $x \gt 0 \implies \frac{1}{x} \gt 0$
6. $0 \lt x \lt y \implies \frac{1}{x} \gt \frac{1}{y}$

*Proof*:
1. Suppose $x \lt y \land z \lt w$. Then, by (OF3), $x + z \lt y + z = z + y \lt w + y = y + w$. $\blacksquare$
2. Suppose $x \lt y$. Then $-y = -y + 0 = -y + (x + (-x)) = x + (-y + (-x)) \lt y + (-y + (-x)) = -x$. $\blacksquare$
3. Suppose $x \lt y \land z \lt 0$. By (2), $-z > -0 = 0$. So $(-z)x \lt (-z)y$ and again by (2), $-(-z)x = xz \gt -(-z)y = yz$. $\blacksquare$
4. By definition $0 \neq 1$. Suppose for the sake contradiction that $1 \lt 0$. Then, by (3), $1 \cdot 1 = 1 \gt 1 \cdot 0 = 0$. This contradicts that $1 \lt 0$. So $1 \gt 0$. $\blacksquare$
5. Suppose $x > 0$. Then $\frac{1}{x} \neq 0$, otherwise $1 = x \cdot \frac{1}{x} = 0$. By (OF1), either $\frac{1}{x} < 0$ or $\frac{1}{x} > 0$. Suppose $\frac{1}{x} \lt 0$. Then by (3), $0 \cdot \frac{1}{x} = 0 \gt x \cdot \frac{1}{x} = 1$, contradicting (4). So, $\frac{1}{x} > 0$. $\blacksquare$
6. Suppose $0 \lt x \lt y$. Then, $\frac{1}{x} \neq \frac{1}{y}$, otherwise $1 = x \cdot \frac{1}{x} = x \cdot \frac{1}{y} \lt y \cdot \frac{1}{y} = 1$. So by (OF1), either $\frac{1}{x} \lt \frac{1}{y}$ or $\frac{1}{x} \gt \frac{1}{y}$. Suppose $\frac{1}{x} \lt \frac{1}{y}$. Then, $1 = \frac{1}{x} \cdot x < \frac{1}{y} \cdot x < \frac{1}{y} \cdot y = 1$, a contradiction. So, $\frac{1}{x} > \frac{1}{y}$. $\blacksquare$.

**Theorem**: Let $(\mathbb F, \lt)$ be an ordered field. Then, there exists an injection $\psi: \mathbb N \hookrightarrow \mathbb F$ such that the elements of $\psi(\mathbb N_+)$ are positive and $\operatorname{char}(\mathbb F) = 0$.

*Proof*: Define $\psi: \mathbb N \to \mathbb F$: recurisvely as 

$$
\begin{align*}
    \psi(0_{\mathbb N}) &= 0_{\mathbb F} \\
    \psi((n + 1)_{\mathbb N}) &= \psi(n_{\mathbb N}) + 1_{\mathbb F}
\end{align*}
$$

for all $n \in \mathbb N$. Then, $\forall n \in \mathbb N, \psi(n) = 0 + \psi(n) < 1 + \psi(n) = \psi(n + 1) = 0 + \psi(n + 1) \lt 1 + \psi(n + 1) = \psi(n + 2) \dots$. By induction, it can be shown that $\forall k \in \mathbb N_+, \psi(n) < \psi(n + k)$, thus $\psi$ is injective. So, there is no $n \in \mathbb N_+$ with $\psi(n) = 0$, so $\operatorname{char}(\mathbb F) = 0$, by definition. $\blacksquare$

---

**Definition**: We say a field $\mathbb F$ **contains** another field $\mathbb K$, that is, $\mathbb K$ is a **subfield** of $\mathbb F$, or $\mathbb K \subseteq \mathbb F$, if there exists an injection $\phi: \mathbb K \hookrightarrow \mathbb F$ such that 

$$
\begin{align*}
    \phi(0_{\mathbb K}) &= 0_{\mathbb F} \\
    \phi(1_{\mathbb K}) &= 1_{\mathbb F} \\
    \phi(x + y) &= \phi(x) + \phi(y) \\
    \phi(xy) &= \phi(x)\phi(y)
\end{align*}
$$

for all $x, y \in \mathbb K$.

---

**Corollary**: Every ordered field $\mathbb F$ contains the field of rational numbers $\mathbb Q$.

*Proof*: TODO.

**Corollary**: Let $(\mathbb F, \lt)$ be an ordered field, $x, y \in \mathbb F$. If $\forall \epsilon \gt 0, x \leq y + \epsilon$, then $x \leq y$.

*Proof*: Suppose $\forall \epsilon \gt 0, x \leq y + \epsilon$. For the sake of contradiction, assume $y \lt x$. Then, $x - y \gt 0$, so $\epsilon = \frac{1}{2}(x - y) \gt 0$. So, 

$$
\begin{align*}
    y + \epsilon &= y + \frac{1}{2}(x - y) \\
    &= \frac{1}{2} \cdot 2 \cdot y + \frac{1}{2}(x - y) \\
    &= \frac{1}{2} (2y + x - y) \\
    &= \frac{1}{2} (y + x) \\
    &< \frac{1}{2} (x + x) \\
    &= x
\end{align*}
$$
; a contradiction. $\blacksquare$

**Definition**: Let $(\mathbb F, \lt)$ be an ordered field. The **absolute value function** on $\mathbb F$ is 

$$
\begin{align*}
    \lvert x \rvert = \begin{cases}
        x & 0 \leq x \\
        -x & x < 0
    \end{cases}
\end{align*}
$$

**Theorem**: Let $(\mathbb F, \lt)$ be an ordered field, $x, y \in \mathbb F$, $a \in \mathbb F$, $a \geq 0$. Then,
1. $\lvert x \rvert \geq 0$
2. $\lvert x \rvert \leq a \iff -a \leq x \leq a$
3. $\lvert xy \rvert = \lvert x \rvert \lvert y \rvert$
4. $\lvert x + y \rvert \leq \lvert x \rvert + \lvert y \rvert$ (triangle inequality)

*Proof*:
1. By definition, and since $x \lt 0 \implies -x = (-1)x \gt 0$. $\blacksquare$
2. Suppose $\vert x \vert \leq a$. If $x \geq 0$, then $x = \vert x \vert \leq a$. Also, $a \geq 0 \implies -a \leq 0$, so $-a \leq 0 \leq x$. If $x \lt 0$, then $x = -\vert x \vert = (-1) \vert x \vert \geq (-1) a = -a$. Also, $a \geq 0 \implies x \lt 0 \leq a$. $\blacksquare$
3. Suppose $x, y \gt 0$. Then $\vert x \vert = x$ and $\vert y \vert = y$, so $\vert xy \vert = xy = \vert x \vert \vert y \vert$. Now suppose WLOG, $x \gt 0, y \lt 0$. Then $\vert x \vert = x$ and $\vert y \vert = -y$, so $\vert xy \vert = -xy = x \cdot (-y) = \vert x \vert \vert y \vert$. Finally, suppose $x, y \lt 0$. Then $\vert x \vert = -x$ and $\vert y \vert = -y$, so $\vert xy \vert = xy = (-x)(-y) = \vert x \vert \vert y \vert$. $\blacksquare$
4. By (2), $-\vert x \vert \leq x \leq \vert x \vert \land - \vert y \vert \leq y \leq \vert y \vert$, so $-(\vert x \vert + \vert y \vert) = -\vert x \vert - \vert y \vert \leq x + y \leq \vert x \vert + \vert y \vert$, hence $\vert x + y \vert \leq \vert x \vert + \vert y \vert$, by (2). $\blacksquare$

**Definition (Interval)**: Let $(X, \lt)$ be a non-empty set with a linear order relation $<$. A subset $I \subseteq X$ is called an **interval** in $X$ when 

$$
\begin{align*}
    \forall x,y,z \in X, (x \in I \land y \in I \land x < z \land z < y) \implies z \in I 
\end{align*}
$$

## Completeness Axiom

**Definition**: Let $(X, \lt)$ be a nonempty set with linear ordering $\lt$. Let $S \subseteq X$.
1. $a \in X$ is a **lower bound** for $S$ when $\forall s \in S, a \leq s$.
2. If $S$ has a lower bound, we say $S$ is **bounded below**.
3. $a \in X$ is an **upper bound** for $S$ when $\forall s \in S, s \leq s$.
4. If $S$ has an upper bound, we say $S$ is **bounded above**.
5. $a \in X$ is called the **minimal element** of $S$ (or **minimum** of S), when $a \in S \land (\forall s \in S, a \leq s)$.
6. $a \in X$ is called the **maximal element** of $S$ (or **maximum** of $S$) when $a \in S \land (\forall s \in S, s \leq a)$.

**Definition**: Let $(X, \lt)$ be a non-empty set with a linear order $\lt$, let $S \subseteq X, S \neq \emptyset$ be bounded.
1. $\alpha \in X$ is called the **infimum** (or **greatest lower bound**) of $S$ when $(\forall s \in S, \alpha \leq s) \land (\forall \beta \in X, \alpha \lt \beta \implies (\exists s \in S, s \lt \beta))$
2. $\alpha \in X$ is called the **supremum** (or **least upper bound**) of $S$ when $(\forall s \in S, s \leq \alpha) \land (\beta \in X, \beta \lt \alpha \implies (\exists s \in S, \beta < s))$

**Example**:
1. $\lbrace \frac{1}{n} : n \in \mathbb N_+ \rbrace$ is bounded below by $0$, bounded above by $1$, and $\sup S = 1 = \max S$.
2. $[0, \sqrt 2] \cap \mathbb Q$ with $X = \mathbb Q$, $\inf = 0$, bounded above by $\sqrt 2$ but no supremum.
3. $[0, \sqrt 2)$ with $X = \mathbb R$, $\inf = 0$, $\sup = \sqrt 2$

Note: if $\max S$ exists, then $\operatorname{sup} S = \max S$!

**Definition**: We say that a non-empty linearly ordered set $(X, \lt)$ satisfies the **Completeness Axiom**, when every non-empty bounded above subset of $X$ has a least upper bound.

Intuitively, the Completeness Axiom says that there are no "gaps" or "missing points".s

**Definition**: The field $\mathbb R$ of real numbers is defined as the smallest (with respect to inclusion) ordered field satisfying the completness axiom.

## Archimedian Property of $\mathbb R$

**Theorem**: The set $\mathbb N$ is not bounded above in $\mathbb R$.

*Proof*: Suppose otherwise and let $\alpha = \sup \mathbb N$ Then, $\alpha - 1$ is not an upper bound for $\mathbb N$, so $\exists n_0 \in \mathbb N, \alpha - 1 < n_0$. But then $\alpha < n_0 + 1$. $\blacksquare$.

**Theorem**: The following conditions are equivalent.
1. $\mathbb N$ is not bounded above.
2. $\forall x \in \mathbb R, \exists n \in \mathbb N, x \lt n$.
3. $\forall x, y \in \mathbb R, x \gt 0 \implies \exists n \in \mathbb N, nx \gt y$.
4. $\forall x \in \mathbb R, x \gt 0 \implies \exists n \in \mathbb N, 0 \lt \frac{1}{n} \lt x$.

*Proof*: 

($1 \to 2$) by definition.

($2 \to 3$) Let $x \in \mathbb R_+, y \in \mathbb R$. By (2), $\exists n_0 \in \mathbb N, \frac{y}{x} \lt n_0$. Then, as $x \gt 0$, $\frac{y}{x} \cdot x = y \lt n_0 x$.

($3 \to 4$). Let $x \in \mathbb R$. By (3), $\exists n_0 \in \mathbb N_+, n_0x \gt 1$. Then, $n_0 \gt 0 \implies \frac{1}{n_0} \gt 0 \implies n_0 \cdot x \cdot \frac{1}{n_0} \gt 1 \cdot \frac{1}{n_0}$, that is, $x \gt \frac{1}{n_0}$.

($4 \to 1$). Suppose $\alpha \in \mathbb R$ such that $\alpha \geq n, \forall n \in \mathbb N$. Then, $\alpha \geq 1 \gt 0$, and $\forall n \in \mathbb N, \frac{1}{\alpha} \leq \frac{1}{n}$, contradicting (4). $\blacksquare$

**Theorem**: For every $s \in \mathbb R, s \gt 0 \implies \exists x \in \mathbb R, x^2 = s$.

*Proof*: Given $s \in \mathbb R_+$, let $S = \lbrace x \in \mathbb R : x \geq 0 \land x^2 \lt s  \rbrace$. Then, $S \neq \emptyset$ as $0 \in \mathbb S$ and $S$ is bounded above (indeed, $s \gt 0 \implies s + 1 \gt 1 \implies (s + 1)^2 \gt s + 1 \implies s + 1 \not\in S$). Let $\alpha = \sup S$. We claim that $\alpha^2 = s$.
1. Suppose $\alpha^2 \lt s$. Then, $s - \alpha^2 > 0$, so $\exists n_1 \in \mathbb N, s - \alpha^2 \gt \frac{1}{n_1}$, that is, $\alpha^2 + \frac{1}{n_1} \lt s$. It remains to find $n_2 \in \mathbb N$ such that $(\alpha + \frac{1}{n_2})^2 \leq \alpha^2 + \frac{1}{n_1}$, because then $\alpha + \frac{1}{n_2} \in S$, contradicting the definition of $\alpha$. TODO.
2. Suppose then that $s \leq \alpha^2$. Then, $\exists n_1 \in \mathbb N_+$ such that $\alpha^2 -s \gt \frac{1}{n_1}$, that is, $\alpha^2 - \frac{1}{n} \gt s$. Again, it suffices to find an $n_2 \in \mathbb N_2$ such that $(\alpha - \frac{1}{n_2})^2 \geq \alpha^2 - \frac{1}{n_1}$. TODO. $\blacksquare$.

**Corollary**: For every prime number $p$, there exists $x_p \in \mathbb R$ such that $x_p^2 = p$. Hence, $\mathbb Q \subseteq \mathbb R$.

## Density of $\mathbb Q$ in $\mathbb R$.

**Theorem**: If $x, y \in \mathbb R, x \lt y$, then there is $q \in \mathbb Q$ such that $x \lt q \lt y$. That is, $\mathbb Q$ is everywhere dense in $\mathbb R$.

*Proof*: By the Archimedean Principle, $y \gt x \implies y - x \gt 0 \implies \exists n \in \mathbb N$ such that $\frac{1}{n} \lt \frac{y - x}{2}$. Pick $k_0 \geq 1$, such that $k_0 \gt n_0x$, and $\forall k \geq 1, k \gt n_0x \implies k_0 \leq k$. That is, $k_0$ is the smallest such number. We claim that $x \lt \frac{k_0}{n_0} \lt y$.

$x \lt \frac{k_0}{n_0}$ follows from the definition of $k_0$. We show $\frac{k_0}{n_0} \lt y$. By definition of $k_0$, $k_0 - 1 \leq n_0x$, so $\frac{k_0 - 1}{n_0} \leq x$, that is, $\frac{k_0}{n_0} \leq x + \frac{1}{n_0} \lt x + \frac{y + x}{2} = \frac{y + x}{2} \lt \frac{2y}{2} = y$. $\blacksquare$.

**Theorem**: If $x, y \in \mathbb R, x \lt y$, then there is $s \in \mathbb R \setminus \mathbb Q$ such that $x \lt s \lt y$. That is, the irrationals are everywhere dense in $\mathbb R$. 

*Proof*: Given $y \gt x, x, y \in \mathbb R$. Then, $\frac{x}{\sqrt 2} \lt \frac{y}{\sqrt 2}$. By the previous theorem, we can choose $q \in \mathbb Q$ such that $\frac{x}{\sqrt 2} \lt q \lt \frac{y}{\sqrt 2}$, so $x \lt q \sqrt 2 \lt y$. It remains to show that $q \sqrt 2$ is irrational. TODO. $\blacksquare$

**Theorem (Nested Interval Principle)**: Let $I_1 \supseteq I_2 \supseteq \dots$ be a nested sequence of closed intervals in $\mathbb R$. Then, $\bigcap_{k \geq 1}I_k \neq \emptyset$.

*Proof*: Write $\forall n \geq 1, I_n = [a_n, b_n]$. Define $A = \lbrace a_n : n \geq 1 \rbrace$, $B = \lbrace b_n : n \geq 1 \rbrace$. Then, $A \neq \emptyset \neq B$ and $A$ is bounded above, and $B$ is bounded below. Set $\alpha = \sup A, \beta = \inf B$, We claim that $\alpha \leq \beta$. Pick any $p \in \alpha, \beta$. We have 

$$
\begin{align*}
    \alpha \leq p &\implies \forall k \geq 1, a_k \leq \alpha \leq p \\
    p \leq \beta &\implies \forall k \geq 1, p \leq \beta \leq b_k
\end{align*}
$$

For a proof of contradiction, suppose $\beta \lt \alpha$. By he definition of $\beta, \alpha$ is not a lower bound (i.e., we can choose a $b_k \in B, b_k \lt \alpha$. By the definition of $\alpha, \exists l \geq 1$ such that $b_k \lt a_l$. If $k \leq l$, then $I_k \supseteq I_l$, so $a_k \leq a_l \leq b_l \leq b_k$, contradicting $b_k \lt b_l$. If $l \leq k$, then $I_l \supseteq I_k$, etc. $\blacksquare$.