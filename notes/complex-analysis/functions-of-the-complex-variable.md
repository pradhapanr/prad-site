---
order: 2
layout: default
toc: true
---

# Functions of the Complex Variable

## Analytic Polynomials

**Definition**: A polynomial $P(x, y)$ is an **analytic polynomial** if there exist complex constants $a_k$ such that

$$
P(x, y) = a_0 + a_1(x + iy) + a_2(x + iy)^2 + \dots + a_N(x + iy)^N
$$

Then $P$ is **polynomial in $z$** and write it as

$$
P(z) = a_0 + a_1z + \dots + a_Nz^N
$$

**Example**: $x^2 + iv(x, y)$ is not analytic for any choice of the real polynomial $v(x, y)$, since a polynomial in $z$ can have a real part of degree 2 in $x$ if and only if it is of the form $az^2 + bc + c$ with $a \neq 0$, in which case the real part must contain a $y^2$ term as well.

**Definition**: Let $f(x, y) = u(x, y) + iv(x, y)$ where $u$ and $v$ are real-valued functions. The partial derivatives $f_x$ and $f_y$ are defined by $u_x + iv_x$ and $u_y + iv_y$ respectively, provided the latter exist.

**Proposition**: A polynomial $P(x, y)$ is analytic if and only if $P_y = iP_x$.

*Proof*: $(\rightarrow)$ Suppose $P = \sum_{k = 1}^N a_k (x + iy)^k$ is analytic. Then $P_y = i\sum_{k = 1}^N a_kk(x + iy)^{k - 1}$ and $P_x = \sum_{k = 1}^N a_kk(x + iy)^{k - 1}$. So $P_y = iPx$.

$(\leftarrow)$ TODO. (*Sketch*: Compute $P_y$ and $P_x$ and compare coefficients to show that $C_k = i^k\binom{n}{k}C_0$, so that $P(x, y) = \sum_{k = 0}^n C_kx^{n - k}y^k = C_0\sum_{k = 0}^n \binom{n}{k}x^{n - k}(yi)^k = C_0(x + iy)^n$). $\blacksquare$

**Remark**: Since $f_x = u_x + iv_x$ and $f_y = u_y + iv_y$, $f_y = if_x$ is equivalently

$$
\begin{align*}
u_x &= v_y \\
-v_x &= u_y
\end{align*}
$$

these are the **Cauchy-Riemann** equations.

**Example**: By the Cauchy-Riemann equations, a non-constant analytic polynomial cannot be real-valued, since if it were both $f_x$ and $f_y$ would be real, so $f_y = if_x$ could not hold.

**Definition**: A complex-valued function, defined in a neighborhood of $z$, is said to be **differentiable** if

$$
\lim_{h \to 0} \frac{f(x + h) - f(x)}{h}
$$

exists. The value of the limit is denoted $f'(z)$.

**Proposition**: The sum, difference, product, and quotient of functions differentiable at $z$ is differentiable at $z$ (assuming the denominator at $z$ is non-zero).

**Proposition**: The power rule holds for complex polynomials as well.

## Power Series

**Definition**: A **power series** is an infinite series in the form $\sum_{k = 1}^N C_kz^k$.

**Definition**: The **limit supremum** of a real-valued sequence $(a_n)$ is defined as

$$
\limsup_{n \to \infty} a_n = \lim_{n \to \infty} \left( \sup_{k \geq n} a_k \right)
$$

**Remark**: Note that $\limsup$ always exists or equals $\infty$ since $\sup_{n \geq k} a_k$ is a non-increasing function of $n$.

**Proposition**: Let $\limsup_{n \to \infty} a_k = L$
1. For all $N$ and for all $\epsilon$, there exists a $k \gt N$ such that $a_k \geq L - \epsilon$ (there are infinitely many $a_k$ that are $\epsilon$-close to the limit)
2. For all $\epsilon$, there exists some $N$ such that for all $k \gt N$, $a_k \leq L + \epsilon$ (the sequence gets arbitrary close to the limit)
3. $\limsup ca_n = cL$ for any non-negative constant $c$.

**Theorem**: Suppose $\limsup \vert C_k \vert^{1/k} = L$. Let $S = \sum C_k z^k$. Then
1. If $L = 0$, $S$ converges for all $z$.
2. If $L = \infty$, $S$ converges for $z = 0$ only.
3. If $0 \lt L \lt \infty$, set $R = 1/L$. $S$ converges when $\vert z \vert \lt R$ and diverges when $\vert z \vert \gt R$. $R$ is called the **radius of convergence**.

*Proof*:
1. Suppose $L = 0$. Then $\limsup \vert C_k \vert^{1/k} \vert z \vert = 0$ for all $z$. So, $\vert C_k z^k \vert \leq \frac{1}{2^k}$ for all $k$ greater than some $N$. So, $\sum \vert C_k z^k \vert$ converges by the Comparison Test, so $S$ converges by the Absolute Convergence Test.
2. Suppose $L = \infty$. Then $\vert C_k \vert^{1/k} \geq \frac{1}{\vert z \vert}$ for all $z \neq 0$. So $\vert C_k z^k \vert \geq 1$, so the terms of the series do not approach 0, so $S$ diverges. If $z = 0$, then every term of the series is 0 so $S$ converges.
3. First suppose $\vert z \vert \lt R$. Choose $\delta$ such that $\vert z \vert = R(1 - 2\delta)$. Then $\limsup \vert C \vert^{1/k} \vert z \vert = 1 - 2\delta$, so $\vert C \vert\vert z \vert^k < (1 - \delta)^k$. So $S$ is absolutely convergent, so $\sum C_k z^k$ is convergent. Now suppose $\vert z \vert \gt R$. Then $\limsup \vert C_k \vert^{1/k} \vert z \vert \gt 1$, so $\vert C_kz^k \vert \gt 1$, so the terms of $S$ do not converge to 0, so $S$ diverges. $\blacksquare$

**Remark**: The theorem says nothing about when $\vert z \vert = R$; indeed, when this is the case the series can converge or diverge.

**Proposition**: The sum of two power series is convergent when each of the two power series are themselves convergent.

## Differentiability and Uniqueness of Power Series

**Proposition**: Let $\sum C_n z^n$ be convergent in a disc $D(0; R), R \gt 0$. Then the series $\sum n C_n z^{n - 1}$ obtained by differentiating the first series term by term is also convergent in a disc $D(0; R)$.

*Proof*: $\limsup \vert nC_n \vert^\frac{1}{n - 1} = \limsup (\vert nC_n \vert^\frac{1}{n})^\frac{n}{n - 1} = \limsup \vert C_n \vert^\frac{1}{n}$ $\blacksquare$

**Theorem**: Suppose $f(z) = \sum C_n z^n$ converges for $\vert z \vert \lt R$. Then $f'(z)$ exists and equals $\sum nC_n z^{n - 1}$ exists when $\vert z \vert \lt R$.

*Proof*: TODO.

**Corollary**: Power series are infinitely differentiable within their domain of convergence.

*Proof*: TODO. (*Sketch*: Using induction: use the above theorem to show that $f(z)$ is differentiable once, and since the radius of convergence is the same by the above proposition, it can be differentiated again.)

**Corollary**: If $f(z) = \sum C_nz^n$ has a non-zero radius of convergence,

$$
C_n = \frac{f^{(n)}(0)}{n!}
$$

*Proof*: $f^{(n)}(z) = n!C_nz^0 + n!C_{n + 1}z + \dots$, so $f^{(n)}(0) = n!C_nz^0$, from which the corollary follows. $\blacksquare$

**Theorem (Uniqueness Theorem for Power Series)**: Suppose $\sum C_n z^n$ is zero at all points of a non-zero sequence $(z_k)$ convergent to 0. Then the series is identically 0.

*Proof*: Let $f(z) = \sum C_nz^n$. Then by continuity of $f$ at the origin,

$$
C_0 = f(0) = \lim_{z \to 0} f(z) = \lim_{k \to \infty}(z_k) = 0
$$

and similarily for $g(z) = f(z)/z$, $C_1 = 0$, et cetera. So all the coefficients are 0, so the power series is identically 0. $\blacksquare$

**Corollary**: If a power series equals 0 at all points of a set with an accumulation point at the origin, then the power series is identically 0.

*Proof*: Since there is an accumulation point at the origin, we can define a sequence $(z_n)$ convergent to 0, from which the above theorem follows. $\blacksquare$

**Corollary**: If $\sum a_n z^n$ and $\sum b_n z^n$ agree on a set of points with an accumulation point at the origin, then $a_n = b_n$ for all $n$.

*Proof*: Consider the series $\sum (a_n - b_n) z_n$, from which the above corollary can be applied to show that $a_n - b_n = 0$ for all $n$. $\blacksquare$