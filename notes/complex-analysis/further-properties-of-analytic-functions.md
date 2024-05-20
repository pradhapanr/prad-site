---
layout: default
order: 7
toc: true
---

# Further Properties of Analytic Functions

## Open Mapping Theorem; Schwarz' Lemma

**Theorem (Open Mapping Theorem)**: The image of an open set under a non-constant analytic mapping is an open set.

*Proof*: Let $f$ be a non-constant function analytic at $\alpha$. We show that there is an open disc around $f(\alpha)$ contained in the image of some disc around $\alpha$. Since $f$ is non-constant, by the Uniqueness Theorem, there is some circle $C$ around $\alpha$ such that $f(z) \neq 0$ for $z \in C$. Let $2 \epsilon = \min_{z \in C} \vert f(z) - f(\alpha) \vert$. Choose $\omega \in D(f(\alpha); \epsilon)$. Then $\vert \omega - f(z) \vert \geq \epsilon$ and $\vert \omega - f(\alpha)\vert \lt \epsilon$. Note that $z$ is on the boundary of the region enclosed by $C$, but $\vert \omega - f(z) \vert$ does not obtain its minimum on this boundary. Thus by the Minimum-Modulus theorem, it must obtain its minimum in the interior with $\vert \omega - f(z) \vert = 0$. So $\omega = f(z)$ for some $z$ on the interior of $C$. $\blacksquare$

**Lemma (Schwarz' Lemma)**: Suppose that $f$ is analytic in the unit disc and $f \ll 1$ there. Then
1. $\vert f(z) \vert \leq \vert z \vert$
2. $\vert f'(0) \vert \leq 1$

with equality in either of the above if and only if $f(z) = ze^{i\theta}$.

*Proof*: Consider the linear approximation of $f$ at 0:

$$
g(z) = \begin{cases}
    \frac{f(z) - f(0)}{z} = \frac{f(z)}{z},& 0 \lt \vert z \vert \lt 1 \\
    f'(0), & z = 0
\end{cases}
$$

Since $g \ll 1/r$ on the circle of radius $r$, as $\vert r \vert \to 1$, $\vert g(z) \vert \leq 1$, proving (1) and (2). Also, if $\vert g(z_0) \vert = 1$ for some $z_0$ inside the unit disk, then by the Maximus-Modulus theorem, $g(z)$ is constant of modulus 1, so $f(z) = e^{i\theta}z$. $\blacksquare$

### Finding Upper Bounds With Schwarz' Lemma

The bilinear transformation

$$
B_\alpha(z) = \frac{\alpha - z}{1 - \overline \alpha z}
$$

is a bijection from the unit disk onto itself. It can be shown that $\vert B_\alpha(z) \vert = 1$ on its boundary $\vert z \vert = 1$. The function is therefore useful for finding upper bound estimates of a function $f$ at $\alpha$, by first transforming $f$ into $g$ so that $g \ll 1$ and $g(\alpha) = 0$, so that $g(z) \ll B_\alpha(z)$ by Schwarz' Lemma.

**Example**: Suppose $f$ is analytic in $D(0; 2)$ with $\vert f \vert \leq 10$ and such that $f(1) = 0$. We find the best possible upper bound for $\vert f(1/2) \vert$. First let

$$
g(z) = \frac{1}{10}f(2z)
$$

so that $g(z) \ll 1$ and $g(1/2) = 0$. Then $\vert g(z) \vert \leq \vert B_{1/2}(z) \vert$, where $B_{1/2} = \frac{(1/2) - z}{1 - z/2}$ is a bilinear transformation. So $\vert g(1/4) \vert \leq 2/7$ so $f(1/2) \leq 20/7$.

**Proposition**: If $f$ is an entire function such that

$$
\vert f(z) \vert \leq \frac{1}{\vert \operatorname{Im} z \vert}
$$

then $f(z) \equiv 0$.

*Proof*: TODO.



