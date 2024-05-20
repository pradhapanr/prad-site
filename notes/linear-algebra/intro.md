<!-- ---
layout: default
toc: true
order: 1
--- -->

## Orthogonal Matrices

**Definition**: A set of vectors is called **orthonormal** if they are mutually orthogonal and all of length 1.

**Definition**: An **orthogonal matrix** is a square matrix whose columns form an orthonormal set.

**Proposition**: $Q$ is an orthogonal matrix if and only if $Q^TQ = I$.

*Proof*: Since the columns form an orthonormal basis, the dot product of any two non-equal vectors is 0, where the dot product of each vector with itself (along the diagonal of $Q^TQ$ is 1). $\blacksquare$

**Remark**: The above proposition holds even for non-square matrices.

The following properties follow from the above:

* $Q^T = Q^{-1}$
* $Q^T$ is orthogonal
* The rows of $Q$ form an orthonormal set.

**Proposition**: In $\mathbb R^2$, every orthogonal matrix is either a reflection or a rotation.

## Gram-Schmidt Decomposition

**Gram-Schmidt Decomposition**: Given $\lbrace x_1, x_2 \dots, x_n \rbrace$ as a basis for a subspace, to get an othogonal basis, let

$$
\begin{aligned}
v_1 &= x_1 \\
v_2 &= x_2 - \operatorname{proj}_{v_1} x_2 \\
v_3 &= x_3 - \operatorname{proj}_{v_1} x_3 - \operatorname{proj}_{v_2} x_3
\end{aligned}
$$

In general, the idea is to subtract from each vector $x_1$ the components parallel to the basis vectors already defined.

## QR Factorization

Given an $m \times n$ matrix $A$ with linearly independent columns, then we can factorize $A$ as

$$
A = QR
$$

where $Q$ is a matrix formed by the orthonormal basis of the columns of $A$ and $R$ is upper triangular.

Note that since the columns of $Q^T$ are orthogonal, $Q^{-1} = Q^T$, so $R = Q^TA$.

## Orthogonal Diagonalization

<!-- **Definition**: A square matrix $A$ is **orthogonally diagonalizable** if there exists an orthogonal matrix $Q$ such that

$$
Q^TAQ = D
$$

where $D$ is a diagonal matrix. -->

**Remark**: The columns of $Q$ are the normalized eigenvectors of $A$.

**Remark**: The diagonal elements of $D$ are the eigenvalues of $A$.


**Example**: *Find the orthogonal diagonalization of*

$$
A = \begin{bmatrix}
2 & 1 & 1 \\ 1 & 2 & 1 \\ 1 & 1 & 2
\end{bmatrix}
$$

*which has eigenvalues $\lambda_1 = 4$ and $\lambda_2 = 1$ (multiplicity 2).*

First we find the eigenvectors corresponding to the eigenvalues by solving $(A - \lambda I)v = v$, which gives $v_1 = [1 \enspace 1 \enspace 1 ]^T$. The eigenvectors corresponding to $\lambda_1$ form an eigenspace with span $\lbrace [-1 \enspace 1 \enspace 0]^T, [-1 \enspace 0 \enspace 1]^T \rbrace$. For the columns of $Q$, we need unit vectors that are mutually orthogonal, so perform Gram-Schmidt to obtain the equivalent span $\lbrace [-1 \enspace 0 \enspace 1]^T, [-1/2 \enspace 1 \enspace -1/2]^T \rbrace$.



**Theorem**: Orthogonally diagonalizable matrices are symmetric.

**Theorem**: The eigenvectors corresponding to distinct eigenvalues are orthogonal.

**Theorem (Spectral)**: A real matrix is symmetric if and only if it is orthogonally diagonalizable.

**Theorem**: A real symmetric matrix has real eigenvalues and orthogonal eigenvectors (for eigenvectors with distinct eigenvalues).

**Theorem (Spectral Decomopsition)**: If $A$ is a real symmetric matrix with eigenvalues $\lambda_i$ and eigenvectors $q_i$ each with unit length, then

$$
A = \sum_i \lambda_i q_i q_i^T
$$

**Example**: *Find a matrix with eigenvalues $2$ and $1$ with corresponding eigenvectors $[1 \enspace -2]^T$ and $[2 \enspace 1]^T$.*

First normalize the eigenvectors then use Spectral Decomposition to form $A$.

## Quadratic Forms

**Definition**: A **quadratic form** is a function $f: \mathbb R^n \to \mathbb R$ of the form $f(u) = u^TAu$, where $A$ is symmetric.

### Sketching Quadratic Forms

Let $Q^TDQ = A$ be the orthogonal diagonalization of $A$. The eigenvectors of $Q$ are the principal axis of the quadratic curve, and the eigenvalues determine the curve shape.

**Principle Axes Theorem** Given a quadratic form $u^TAu$, if $Q^TAQ = D$ is the orthogonal diagonlization, then the change of variables $v = Q^Tu$ gives $u^TAu = v^TDv$.

**Theorem**: Let $A$ be a symmetric real matrix and $f$ its quadratic form.

* if $A$ is positive definite (all eigenvalues are positive), then the quadratic form is positive everywhere except the origin
* if $A$ is positive semi-definite (all eigenvalues are non-negative), then the quadratic form is non-negative everywhere
* if $A$ is indefinite (eigenvalues are opsitive and negative)$, $f$ is positive or negative or 0.