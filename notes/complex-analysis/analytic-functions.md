---
toc: true
order: 3
layout: default
---

# Analytic Functions

## Analyticity and the Cauchy-Riemann Equations

**Proposition**: If $f = u + iv$ is differentiable at $z$, $f_x$ and $f_y$ exist there and satisfy the Cuachy-Riemann equation $f_y = if_x$, or equivalently, $u_x = v_y$ and $u_y = $-v_x$.

*Proof*: If $h \to 0$ through the real values, then 

$$
\frac{f(z + h) - f(z)}{h} = \frac{f(x + h, y) - f(x, y)}{h} \to f_x
$$

but if $h \to 0$ along the imaginary axis $h = i \eta$,
$$
\frac{f(z + h) - f(z)}{h} = \frac{f(x, y + \eta)}{i\eta} \to \frac{f_y}{i}
$$

so the limit exists only when $f_y = if_x$. The equivalent equations can be derived from $u_y + iv_y = i(u_x + iv_x)$. $\blacksquare$

**Proposition**: Suppose $f_x$ and $f_y$ eixst in a neighborhood of $z$. Then if $f_x$ and $f_y$ are continuous at $z$ and $f_y = if_x$ there, $f$ is differentiable at $z$.

*Proof*: TODO.

**Definiion**: $f$ is **analytic** at $z$ if $f$ is differentiable in a neighborhood of $z$. Similarily, $f$ is **analytic on a set $S$** if $f$ is differentiable at all points of some open set containing $S$.

**Definition**: Functions that are everywhere differentiable are called **entire** functions.

**Proposition**: Suppoes that $G$ is the inverse of $f$ at $z_0$ and that $g$ is continuous there. If $f$ is differentiable at $g(z_0)$ and if $f'(g(z_0)) \neq 0$, then $g$ is differentiable at $z_0$ and

$$
g'(z_0) = \frac{1}{f'(g(z_0))}
$$

*Proof*:

$$
\frac{g(z) - g(z_0)}{z - z_0} = \frac{1}{\frac{f(g(z)) - f(g(z_0))}{g(z) - g(z_0)}}
$$

for all $z \neq z_0$ in a neighborhood of $z_0$. Since $g$ is continuous, $g(z) \to g(z_0)$ as $z \to z_0$, so taking the above limit as $z \to z_0$ yields the desired result. $\blacksquare$

**Proposition**: If $f = u + iv$ is analytic in a region $D$ and $u$ is constant, then $f$ is constant.

*Proof*: Since $u$ is constant, $u_x = u_y = 0$, and by the Cauchy-Riemann equations, $v_x = v_y = 0$. So $u, v$ are constant in $D$, and by Theorem 1.10 (if $u(x, y)$ has partial derivatives $u_x$ and $u_y$ that vanish at every point in a region $D$, then $u$ is constant in $D$), $f$ is constant.

**Proposition**: If $f$ is analytic in a region and $\vert f \vert$ is constant there, then $f$ is constant.

*Proof*: TOOD. (*Sketch*: If $\vert f \vert = 0$ the proof is immediate, so suppose otherwise. Then $u^2 + v^2 = C \neq 0$. Taking the partials wrt $x$ and $y$ and using the Cauchy-Riemann equations yield $u_x = u_y = v_x = v_y = 0$).

## The Functions $e^z$, $\sin z$, $\cos z$

**Definition**: Define $f(z) = e^z = e^x \cos y + i e^x \sin y$ as the analytic continuition of the real exponential function.

**Remark**: The complex trigonometric functions can then be defined as

$$
\begin{align*}
\sin z &= \frac{1}{2i}(e^{iz} - e^{-iz}) \\
\cos z &= \frac{1}{2}(e^{iz} + e^{-iz})
\end{align*}
$$

by solving the system $e^{iy} = \cos y + i \sin y$ and $e^{-iy} = \cos y - i \sin y$.