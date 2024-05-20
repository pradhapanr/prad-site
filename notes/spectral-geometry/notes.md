The **spectrum** of a matrix is its set of eigenvalues. The spectrum of a matrix contains a lot of information about the matrix.

**Example**: Let $A, B$ be matrices with equivalent spectra. Then $A$ and $B$ are similar, that is, there is an invertible matrix $S$ such that $A = S^{-1}BS$.

---
**Definition**: The **Laplace operator**, or the **Laplacian** of a function $f$ is

$$
\Delta f = -\left( \frac{\partial^2 f}{\partial x^2} + \frac{\partial^2 f}{\partial y^2}\right) = - \operatorname{div} \circ \operatorname{grad} f
$$

Recall that

$$
\operatorname{grad} f = \left(\frac{\partial f}{\partial x}, \frac{\partial f}{\partial y} \right)
$$

and

$$
\operatorname{div}(u, v) = \frac{\partial u}{\partial x} + \frac{\partial v}{\partial y}
$$
---

Let $D$ be a domain in $\mathbb R^2$ with a piecewise smooth boundary.

The spectrum of a function is the solutions of $\lambda$ and $f \neq 0$ for

$$
\begin{cases}
\Delta f = \lambda f \\
f\mid_{\partial D} = 0
\end{cases}
$$

where the second constraint is that $f$ = 0$ on its boundary.

In general for $\lambda$ there are countably infinitely many $\lambda$ with $0 \lt \lambda_1 \leq \lambda_2 \leq \dots$.

**Example**: Consider $D = [a, b] \subseteq \mathbb R$. Then $\partial D = \lbrace a, b \rbrace$ and $\Delta = -\frac{d^2}{dx^2}$. Then

$$
\begin{cases}
-f'' = \lambda f \\
f(a) = f(b) = 0
\end{cases}
$$

This is a second-order differential equation, with solutions

$$
f(x) = e^{i\sqrt \lambda x}, e^{-i \sqrt \lambda x}
$$

Note that before considering the boundary conditions, there are uncountably many solutions for $\lambda$ ($\lambda \geq 0$). 

Instead of $e^{i\sqrt \lambda x}, e^{-i \sqrt \lambda x}$, we can use the basis $\sin \sqrt \lambda x$, $\cos \sqrt \lambda x$, since these are linear combinations of $e^{i\theta}$ and $e^{-i \theta}$ by Euler's identity. For simplicity, let $a = 0$ and $b \gt 0$.

Then we want the solutions to $\sin \sqrt \lambda a = 0$ and $\sin \sqrt \lambda b = 0$. So $\sqrt \lambda b = n \pi$, so $\lambda_n = \frac{n^2 \pi^2}{b^2}$, for $n \in \mathbb Z$. So

$$
\operatorname{spec}([0, b]) = \left\lbrace \frac{n^2 \pi^2}{b^2} \mid n \in \mathbb N \right\rbrace
$$

Note that $\lambda_1, \dots$ grows.

**Theorem (Weyl's)**: Let $N(\lambda) = \lbrace \lambda_n \leq \lambda \rbrace$. Then $N(\lambda) \to \frac{\operatorname{Area}(D)}{2 \pi} \lambda$ with $\lambda \to \infty$. 