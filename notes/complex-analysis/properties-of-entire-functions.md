---
toc: true
order: 5
layout: default
---

# Properties of Entire Functions

## The Cauchy Integral Formula and Taylor Expansion for Entire Functions

**Theorem (Cauchy Integral Formula)**: Suppose $f$ is entire, $a \in \mathbb C$, and $C$ is the curve $Re^{i\theta}, 0 \leq \theta \leq 2\pi$ with $R \gt \vert a \vert$. Then

$$
f(a) = \frac{1}{2\pi i}\int_C \frac{f(z)}{z - a} dz
$$

*Proof*: TODO.

**Lemma**: Suppose $a$ is contained in the circle $C_\rho$. Then

$$
\int_{C_\rho} \frac{dz}{z - a} = 2 \pi i
$$

*Proof*: Let $C_\rho$ have center $\alpha$ and radius $\rho$. Then

$$
\begin{align*}
\frac{1}{z - a}
&= \frac{1}{(z - \alpha) - (a - \alpha)} \\
&= \frac{1}{(z - \alpha)(1 - \frac{a - \alpha}{z - \alpha})} \\
&= \frac{1}{(z - \alpha)} \cdot \frac{1}{(1 - \omega)}
\end{align*}
$$

with $\omega = \frac{a - \alpha}{z - \alpha}$. Note that since $\vert \omega \vert \lt 1$ throughout $C_\rho$,

$$
\frac{1}{1 - \omega} = \sum_{k = 0}^\infty \omega^k
$$

so

$$
\begin{align*}
\frac{1}{z - a} &= \frac{1}{z - \alpha}\left(\sum_{k = 0}^\infty\left(\frac{a - \alpha}{z - \alpha}\right)^k\right) \\
&= \frac{1}{z - \alpha} + \sum_{k = 1}^\infty \left(\frac{(a - \alpha)^k}{(z - \alpha)^{k + 1}}\right)
\end{align*}
$$

By the fact that 
$$
\int_{C_\rho} \frac{dz}{z - \alpha} = \int_0^{2\pi} \frac{i\rho e^{i\theta}}{\rho e^{i\theta}} d\theta = 2\pi i
$$

and

$$
\int_{C_\rho} \frac{dz}{(z - \alpha)^k} = 0
$$

for $k = 2, 3, \dots$ by the Closed Curve Theorem since the integrand is the derivative of the analytic function $\frac{-1}{(z - \alpha)^{k - 1}}$,

$$
\begin{align*}
\int_{C_\rho} \frac{1}{z - a}
&= \int_{C_\rho} \frac{1}{z - \alpha} + \sum_{k = 1}^\infty \left(\frac{(a - \alpha)^k}{(z - \alpha)^{k + 1}}\right) \\
&= 2\pi i + 0 \\
&= 2\pi i
\end{align*}
$$

$\blacksquare$

**Theorem (Taylor Expansion of an Entire Function)**: If $f$ is entire, it has a power series representation. In fact, $f^{(k)}(0)$ exists for $k = 1, 2, 3, \dots$ and

$$
f(z) = \sum_{k = 0}^\infty \frac{f^{(k)}(0)}{k!} z^k
$$

*Proof*: Let $C$ be a circle of radius $R$ centered at the origin such that $z$ is contained within $C$. Then by the Cauchy Integral Formula,

$$
f(z) = \frac{1}{2\pi i} \int_{C} \frac{f(z)}{\omega - z} d\omega
$$

and using the power series expansion

$$
\begin{align*}
\frac{1}{\omega - z} &= \frac{1}{\omega(1 - \frac{z}{\omega})} \\
&= \frac{1}{\omega} + \frac{z}{\omega^2} + \dots
\end{align*}
$$

gives (by the uniform convergence of the power series throughout $C$, since $\left\vert \frac{z}{\omega} \right\vert \lt 1$),

$$
f(z) = \frac{1}{2 \pi i}\int_C \frac{f(z)}{\omega} d\omega + \left(\frac{1}{2\pi i}\int_C \frac{f(z)}{\omega^2} d\omega\right) z + \left(\frac{1}{2\pi i} \int_C \frac{f(z)}{\omega^3}d \omega\right)z^2 + \dots
$$

Note that since we chose $C$ to be large enough to contain $z$, it appears as though the coefficients depend on $z$. But, since $f$ is infinitely differentiable at 0 and

$$
C_k = \frac{f^{(k)}(0)}{k!}
$$

the coefficients are independent of $z$. $\blacksquare$

**Corollary**: An entire function is infinitely differentiable.

*Proof*: This follows from the fact that every entire function has a power series expansion (from above), and an everywhere convergent power series is infinitely differentiable. $\blacksquare$

**Corollary**: If $f$ is entire and if $a$ is any complex number, then

$$
f(z) = f(a) + f'(a)(z - a) + \frac{f''(a)}{2!}(z - a)^2 + \dots
$$

for all $z$.

*Proof*: Let $g(\zeta) = f(\zeta + a)$. Then

$$
g(\zeta) = \sum_{k = 0}^\infty \frac{g^{(k)}(0)}{k!} \zeta^k = \sum_{k = 0}^\infty \frac{f^{(k)}(a)}{k!} \zeta^k = f(\zeta + a)
$$

from which the statement follows with $\zeta = z - a$. $\blacksquare$

**Proposition**: If $f$ is entire and if

$$
g(z) = \begin{cases}
\frac{f(z) - f(a)}{z - a}, &z \neq a \\
f'(a), & z = a
\end{cases}
$$

then $g$ is entire.

*Proof*: If $z = a$ then $g$ is entire since the derivative of an entire function is itself entire. So suppose otherwise. Then

$$
\begin{align*}
\frac{f(z) - f(a)}{z - a} 
&= \frac{f(a) + f'(a)(z - a) + \frac{f''(a)}{2!}(z - a)^2 + \dots  - f(a)}{z - a} \\
&= f'(a) + \frac{f''(a)}{2!}(z - a) + \dots
\end{align*}
$$

so it is an everywhere convergent power series, so $g$ is entire. $\blacksquare$

**Corollary**: Suppose $f$ is entire with zeroes at $a_1, a_2, \dots, a_N$. Then if $g$ is defined by

$$
g(z) = \frac{f(z)}{(z - a_1)\dots(z - a_N)}
$$

for $z \neq a_k$, $\lim_{z \to a_k}$ exists for $k = 1, 2, \dots, N$ and if $g(a_k)$ is defined by these limits, then $g$ is entire.

*Proof*: Define $f_0(z)$ as $f(z)$ and $f_k(z)$ as

$$
f_k(z) = \frac{f_{k - 1}(z) - f_{k - 1}(a)}{z - a_k} = \frac{f_{k - 1}(z)}{z - a_k}.
$$

Then by the above proposition, $f_k$ is entire if $f_{k - 1}$ is entire. Since $f_0 = f$, the proof follows by induction. $\blacksquare$

## Liouville Theorems and the Fundamental Theorem of Algebra; The Gauss-Lucas Theorem

**Theorem (Liouville's Theorem)**: A bounded entire function is constant.

*Proof*: Let $a, b \in \mathbb C$ and $C$ a circle centered at the origin containing both $a$ and $b$. Then by the Cauchy Integral Formula,

$$
\begin{align*}
f(b) - f(a) &= \frac{1}{2\pi i}\int_C \frac{f(z)}{z - b} - \frac{f(z)}{z - a} dz \\
&= \frac{1}{2\pi i}\int_C \frac{f(z)(b - a)}{(z - b)(z - a)} dz \\
&\ll \frac{M \vert b - a \vert}{(R - \vert b \vert)(R - \vert a \vert)}
\end{align*}
$$

which approaches 0 as $R \to \infty$. $\blacksquare$

**Theorem (Extended Liouville Theorem)**: If $f$ is entire and if, for some integer $k \geq 0$, there exist positive constants $A$ and $B$ such that

$$
\vert f(z) \vert \leq A + B\vert z \vert^K
$$

then $f$ is a polynomial of degree at most $k$.

*Proof*: Define

$$
g(z) = \begin{cases}
    \frac{f(z) - f(0)}{z}, & z \neq 0 \\
    f'(0), & z = 0
\end{cases}
$$

then $g$ is entire, so it is a polynomial. By the hypothesis on $f$, $\vert g(z) \vert \leq C + D\vert z \vert^{k - 1}$, so $g$ is a polynomial of degree at most $k - 1$, so $f$ is a polynomial of degree at most $k$. $\blacksquare$

**Theorem (Fundamental Theorem of Algebra)**: Every non-constant polynomial with complex coefficients has a zero in $\mathbb C$.

*Proof*: Let $P(z)$ be a non-constant polynomial with $P(z) \neq 0$. Then $f(z) = \frac{1}{P(z)}$ is entire, and since $P(z)$ is non-constant, $\lim_{z \to \infty}P(z) = \infty$. So $f(z)$ is bounded. But then $f$ is constant, so $P(z)$ is constant; a contradiction. $\blacksquare$

**Definition**: The **convex hull** if a set $S$ of complex numbers is the smallest convex set containing $S$.

**Theorem (Gauss-Lucas)**: The zeroes of the derivative of any polynomial lie within the convex hull of the zeroes of the polynomial.

*Proof*: TODO.

