---
toc: true
order: 6
layout: default
---

# Properties of Analytic Functions

## The Power Series Representation For Functions Analytic in a Disc

Everything proved about entire functions in the previous chapter holds true within a disc for functions analytic in that disc.

## Analytic in an Arbitrary Open Set

There is no generalization for the above results for arbitrary open domains.

## Uniqueness, Mean-Value, Maximum-Modulus Theorems; Critical Points and Saddle Points

**Theorem**: If $f$ is analytic at $z$, then $f$ is infinitely diffferentiable at $z$.

*Proof*: Since $f$ is analytic at $z$, it is analytic in an open set containing $z$. So there is some disc containing $z$ where $f$ is analytic, that is, it can be expressed as a power series. And power series' are infinitely differentiable. $\blacksquare$

**Theorem (Uniqueness)**: Suppose that $f$ is analytic in a region $D$ and that $f(z_n) = 0$ where $(z_n)$ is a sequence of distinct points and $z_n \to z_0 \in D$. Then $f \equiv 0$ in $D$.

*Proof*: Let $A$ be the set of 

**Corollary**: If two functions $f$ and $g$, analytic in a region $D$, agree at a set of points with an accumulation point in $D$, then $f \equiv g$ through $D$.

*Proof*: Apply the above theorem to $f - g$. $\blacksquare$

**Example**: A non-trivial analytic function may have infinitely many zeroes. For example, $\sin z$ is entire an has infinitely many zeroes,