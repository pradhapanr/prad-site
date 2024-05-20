---
toc: true
layout: default
order: 9
---

# Isolated Singularities of an Analytic Function

**Definition**: A **deleted neighborhood of $z_0$** is a neighborhood around $z_0$ excluding $z_0$, that is,

$$
\lbrace z: 0 \lt \vert z - z_0 \vert \lt \epsilon \rbrace
$$

for some $\epsilon \gt 0$.

**Definition**: $f$ has an **isolated singularity** at $z_0$ if $f$ is analytic in a deleted neigborhood of $z_0$ but is not analytic at $z_0$.

**Definition**: Let $z_0$ be an isolated singularity in $f$.
* If there exists a function $g$ analytic at $z_0$ such that $f(z) = g(z)$ in a deleted neighborhood around $z_0$, then $z_0$ is a **removable singularity**.
* If for $z \neq z_0$, $f = A(z)/B(z)$ where $A$ and $B$ are analytic at $z_0$ and $A(z_0) \neq 0$ and $B(z_0) = 0$, we say $f$ has a **pole** at $z_0$.
* If $f$ has neither or pole nor a removable singularity at $z_0$, then it is an **essential singularity**.

**Theorem (Riemann's Principle of Removable Singularities)**: If $z_0$ is an isolated singularity of $f$, $\lim_{z \to z_0} (z - z_0) f(z) = 0$, then it is a removable singularity of $f$.

**Corollary**: If $f$ is bounded in a deleted neighborhood of an isolated singularity $z_0$, then it is a removable singularity.

**Theorem**: If $f$ is analytic in a deleted neighborhood of $z_0$ and there exists a positive integer $k$ such that

$$
\lim_{z \to z_0} (z - z_0)^{k - 1} f(z) \neq 0
$$

but

$$
\lim_{z \to z_0} (z - z_0)^k f(z) = 0
$$

then $f$ has a pole of order $k$ at $z_0$.

**Theorem (Casorati-Weierstrass)**: If $f$ has an essential singularity at $z_0$, then the image of $f$ in a deleted neighborhood around $z_0$ is dense in the complex plane.


## Laurent Expansions



