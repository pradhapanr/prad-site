---
toc: true
order: 8
layout: default
---

# Simply Connected Domains

**Theorem (General Closed Curve)**: Suppose $f$ is analytic in a simply connected region $D$ and that $C$ is a smooth closed curve contained in $D$. Then

$$
\int_C f = 0
$$

*Proof*: TODO.

## Analytic Function $\log z$

**Definition**: $f$ is an **analytic branch of $\log z$** in a domain $D$ if
1. $f$ is analytic in $D$
2. $f$ is an inverse of the exponential function in $D$.

**Theorem**: Suppose $D$ is simply connected and $0 \not\in D$. Choose $z_0 \in D$ and fix a value of $\log z_0$. Then

$$
f(z) = \int_{z_0}^z \frac{d\zeta}{\zeta} + \log z_0
$$

is an analytic branch of $\log z$ in $D$.

