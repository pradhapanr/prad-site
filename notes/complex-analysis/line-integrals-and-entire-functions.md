---
layout: default
toc: true
order: 4
---

# Line Integrals and Entire Functions

## Properties of the Line Integral

**Definition**: Let $f(t) = u(t) + iv(t)$ be any continuous complex-valued function of the real variable $t, a \leq t \leq b$. Then

$$
\int_a^b f(t) dt = \int_a^b u(t) dt + i\int_a^b v(t) dt
$$

**Definition**: Let $z(t) = x(t) + iy(t), a \leq t \leq b$. The curve determined by $z(t)$ is called **piecewise differentiable** and we set

$$
\dot z(t) = x'(t) + iy'(t)
$$

if $x, y$ are continuous on $[a, b]$ and continuously differentiable on each subinterval of a partition of $[a, b]$.

$z(t)$ is **smooth** if $\dot z(t) \neq 0$ except at a finite number of points.

**Definition**: Let $C$ be a smooth curve given by $z(t), a \leq t \leq b$, and suppose $f$ is continuous at all the points $z(t)$. Then the **integral of $f$ along $C$** is

$$
\int_C f(z) dz = \int_a^b f(z(t))\dot z(t) dt
$$

**Definition**: $C_1: z(t), a \leq t \leq b$ and $C_2: \omega(t), c \leq t \leq d$ are **smoothly equivalent** if there exists a bijective $\mathbb C$ mapping $\lambda: [c, d] \to [a, b]$ such that $\lambda(c) = a, \lambda(d) = b, \lambda'(t) \gt 0$ for all $t$ and $\omega(t) = z(\lambda(t))$.

**Proposition**: If $C_1$ and $C_2$ are smoothly equivalent, then $\int_{C_1} f = \int_{C_2} f$.

*Proof*: TODO. (*Sketch*: Expand both integrands and compare terms through a change-of-variable.)

**Definition**: Let $C: z(t), a \leq t \leq b$. Then $-C$ is defined by $z(b + a - t), a \leq t \leq b$.

**Proposition**: $\int_{-C} f = \int_C f$.

*Proof*: TODO.

**Example**: Suppose $f(z) = x^2 + iy^2$ and consider $C: z(t) = t + it, 0 \leq t \leq 1$. Then $\dot z(t) = 1 + i$ and

$$
\begin{align*}
\int_C f(z) dz &= \int_C f(z(t)) \dot z(t) dt \\
&= \int_0^1 (t^2 + it^2)(1 + i) dt \\
&= \int_0^1 t^2 +it^2 + it^2 - t^2 \\
&= 2i \int_0^1 t^2 dt \\
&= 2i/3
\end{align*}
$$

**Example**: Let $f(z) = \frac{1}{z} = \frac{x}{x^2  +y^2} - i\frac{y}{x^2 + y^2}$ and $C: z(t) = R\cos t + iR \sin t, 0 \leq t \leq 2\pi, R \neq 0$. Then $\dot z(t) = -R \sin t + iR\cos t$.

$$
\begin{align*}
\int_C f(z) dz
&= \int_0^{2\pi} f(z(t)) \dot z(t) dt \\
&= \int_0^{2\pi} \left(\frac{\cos t}{R} - i\frac{\sin t}{R}\right)(-R \sin t + iR \cos t) \\
&= \int_0^{2\pi} -\sin t\cos t + \sin t \cos t + i\cos^2 t + i \sin^2 t dt \\
&= 2\pi i
\end{align*}
$$

**Example**: Suppose $f(z) \equiv 1$ and let $C$ be any smooth curve. Then $\int_C f(z) dz = \int_a^b \dot z(t) dt = z(b) - z(a)$.

**Proposition**: Let $C$ be a smooth curve, $f, g$ continuous functions on $C$, and $\alpha \in \mathbb C$. Then
1. $\int_C (f(z) + g(z)) dz = \int_C f(z) dz + \int_C g(z) dz$
2. $\int_C \alpha f(z) dz = \alpha \int_C f(z) dz$

*Proof*: (1) Let $f(z) = u_f(x, y) + iv_f(x, y)$ and $g(z) = u_g(x, y) + iv_g(x, y)$. Then

$$
\begin{align*}
\int_C f(z) + g(z) dz
&= \int_a^b (f(z(t)) + g(z(t))) \dot z(t) dt \\
&= \int_a^b [u_f(x(t), y(t)) + v_f(x(t), y(t))]
\end{align*}
$$ 

$\blacksquare$


(2) TODO. $\blacksquare$

**Notation**: Let $\alpha, \beta \in \mathbb C$. Then $\alpha \ll \beta \iff \vert \alpha \vert \leq \vert \beta \vert$.

**Lemma**: Suppose $G(t)$ is a continuous complex-valued function of $t$. Then

$$
\int_a^b G(t)dt \ll \int_a^b \vert G(t) \vert dt
$$

*Proof*: Let $\int_a^b G(t)dt = re^{i\theta}$, where $r, \theta \in \mathbb R$. Then $r = \int_a^b e^{-i\theta} G(t) dt$. Also, taking the modulus of the first equation, $\vert \int_a^b G(t) dt \vert = r$, since $\vert e^{i\theta} \vert$ = 1. So

$$
\begin{align*}
\left\vert \int_a^b G(t) dt \right\vert
&= \int_a^b e^{-i\theta} G(t) dt \\
&= \Re\left(\int_a^b e^{-i\theta} G(t) dt \right) \\
&= \int_a^b \Re(e^{-i\theta} G(t)) dt \\
&\leq \int_a^b \vert e^{-\theta} G(t) \vert dt \\
&= \int_a^b \vert G(t) \vert dt
\end{align*}
$$

since $\Re(z) \leq \vert \Re(z) \vert \leq \vert z \vert$. $\blacksquare$

**Theorem (M-L)**: Suppose that $C$ is a smooth curve of length $L$, that $f$ is continuous on $C$, and $f \ll M$ throughout $C$. Then

$$
\int_C f(z) dz \ll ML
$$

*Proof*: 
$$
\begin{align*}
\int_C f(z) dz
&= \int_a^b f(z(t)) \dot z(t)dt \\
&\ll \int_a^b \vert f(z(t)) \dot z(t) \vert dt \\
&\ll M \int_a^b \vert \dot z(t) \vert dt \\
&= ML.
\end{align*}
$$

$\blacksquare$

**Proposition**: Suppose $(f_n)$ is a sequence of continuous functions and $f_n \to f$ uniformly on the smooth curve $C$. Then

$$
\int_C f(z) dz = \lim_{n \to \infty} \int_C f_n(z) dz
$$

*Proof (Sketch)*: Since $\vert f(z) - f_n(z) \vert \lt \epsilon$, we have 

$$
\int_C f(z) dz - \int_C f_n(z) dz = \int f(n) - f_n(z) dz \ll \epsilon \vert C \vert
$$

by the $ML$ formula. $\blacksquare$

**Proposition**: Suppose $f$ is the derivative of an analytic function $F$, that is $f(z) = F'(z)$, where $F$ is analytic on the smooth curve $C$. Then

$$
\int_C f(z) dz = F(z(b)) - F(z(a))
$$

*Proof (Sketch)*: Define $\gamma(t) = F(z(t))$ for $a \leq t \leq b$. Then it can be shown that $\dot \gamma(t) = f(z(t)) \dot z(t) dt$, from which it follows that

$$
\int_C f(z) dz = \int_a^b f(z(t)) \dot z(t) dt = \int_a^b \dot \gamma(t) dt = \gamma(b) - \gamma(a) = F(z(b)) - F(z(a))\dots
$$

$\blacksquare$

## The Closed Curve Theorem for Entire Functions

**Definition**: A curve $C$ is **closed** if its initial and terminal points coincide. $C$ is a **simple closed curve** if no other points coincide.

**Lemma**: If $f$ is a linear function and $\Gamma$ is the boundary of a rectangle, then $\int_\Gamma f(z) dz = 0$.

*Proof*: Let $f(z) = \alpha + \beta z$ and let $\Gamma$ be given by $\Gamma: z(t), a \leq b$. Since $f(z)$ is everywhere the derivative of $F(z) = \alpha/z + \beta z^2/2$, by the above proposition,

$$
\int_\Gamma f(z) dz = F(z(b)) - F(z(a)) = 0
$$

$\blacksquare$

**Theorem (Rectangle)**: Suppose $f$ is entire and $\Gamma$ is the boundary of a rectangle $R$. Then

$$
I = \int_\Gamma f(z) dz = 0
$$

*Proof (Sketch)*: Subdivide $\Gamma$ into 4 equal rectangles $\Gamma_1^{(1)}, \Gamma_2^{(1)}, \Gamma_3^{(1)}, \Gamma_4^{(1)}$ and note that $\int_{\Gamma_k^{(1)}} f(z) dz \gg I/4$ for some $k = 1,2,3,4$. Repeatedly subdivide each subrectangle and note that $\int_{\Gamma_k^{(n)}} f(z) dz \gg \frac{I}{4^n}$. So it remains to show that $4^n \int_{\Gamma_k^{(n)}} f(z) dz \ll \epsilon$ for some arbitrary epsilon.

Since $f$ is entire, it is analytic at every $z_0$, so $f(z) = f(z_0) + f'(z_0)(z - z_0) + \epsilon_z(z - z_0)$, where $\epsilon_z$ is a function of $z$ ($\epsilon_z \to 0$ as $z \to z_0$). Repeatedly subdivide $\Gamma$ such that the distance between any two points on $\Gamma^{(n)}_k$ are close enough so that $\epsilon_z \ll \epsilon$. Then 

$$
\begin{align*}
\int_{\Gamma_k^{(n)}} f(z) dz
&= \int_{\Gamma_k^{(n)}} f(z_0) + f'(z_0)(z - z_0) + \epsilon_z(z - z_0) dz \\
&= \int_{\Gamma_k^{(n)}} \epsilon_z(z - z_0) dz \\
&\ll \epsilon L
\end{align*}
$$

for some $L$ proportional to the length of $\Gamma^{(n)}_k$ by the $ML$ formula. Note in the second integral that the first two terms vanish because $f(z_0) + f'(z_0)(z- z_0)$ is a linear function on a closed boundary, so its integral is 0 by the Proposition above. $\blacksquare$

**Theorem (Integral Theorem)**: If $f$ is entire, then $f$ is everywhere the derivative of an analytic function. That is, $f(z) = F'(z)$ for some entire function $F$.

*Proof*: Define $F(z) = \int_0^z f(\zeta) d\zeta$, where $\int_0^z$ denotes the integral along the path from 0 to $\Re(z)$ and $\Re(z)$ to $z$. Then $F(z + h) = F(z) + \int_z^{z + h} f(\zeta) d\zeta$. So

$$
\begin{align*}
\frac{F(z + h) - F(z)}{h}
\end{align*}
$$

TODO.

**Theorem (Closed Curve)**: If $f$ is entire and if $C$ is a (smooth) closed curve,

$$
\int_C f(z) dz = 0
$$

*Proof*: Since $f$ is entire, then by the Integral Theorem, $f(z) = F'(z)$ for some entire function $F$. So,

$$
\int_C f(z) dz = \int_C F'(z) dz = F(z(b)) - F(z(a))
$$

and since $C$ is closed, $z(b) = z(a)$, so $F(z(b)) = F(z(a))$ and $\int_C f(z) dz = 0$. $\blacksquare$

**Remark**: Note that in the above proof we only required that $f(z)$ is the derivative of an analytic function on $C$, not necessarily entire. Thus, the line integral of $\frac{1}{z^2}$ along a smooth closed curve not passing through the origin would be 0.