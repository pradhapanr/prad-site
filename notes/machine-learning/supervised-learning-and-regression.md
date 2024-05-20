---
toc: true
layout: default
order: 12
---

# Dimensionality Reduction

## Preliminaries


**Covariance**: A measure of how much each of the dimensions varies from the mean with respect to each other.

$$
\operatorname{cov}(X) = \frac{1}{n - 1} \sum_{i = 1}^n (X_i - \overline X)(Y_i - \overline Y)
$$

**Variance**: A measure of the spread of the data in a dataset with mean $\bar X$

$$
\operatorname{var}(X) = \operatorname{cov(X, X)}
$$

**Basis**: A basis for a vector space $V$ is a set of linearly independent vectors which span $V$, that is, any vector in $V$ can be written as a linear combination of basis vectors.

## Principal Component Analysis

Consider a dataset $X_{m \times n}$ with $m$ observations and $n$ features. Each observation can be represented as a vector in $\mathbb R^n$ (assuming the features are numerical).

PCA involves finding a new basis that minimizes the number of dimensions (for the sake of compression) and maximizes the variance of $X$ (minimizing data loss). Consider the matrix $A$ representing such a change of basis (a linear transformation).

The objective is to minimize the squared reconstruction error:

$$
    \vert \vert \bf X - \bf XAA^T \vert \vert_2
$$

or (it can be shown) equivalently, maximize the variance of the transformation:

$$
\operatorname{tr}(\bf A^T \bf X^T \bf X \bf V)
$$

From here on out, we call the transformation of the dataset $X$ in the new basis $T$ the **latent variables**: $\bf Z = \bf X \bf T$.
 
### Sparse PCA

Imposing an $L_1$ cost on the latent variables $Z$ encourages finding a solution that results in each observation relying on fewer principal vectors.

### Non-Negative Matrix Factorization

When negatives weights don't make semantic sense, non-negative matrix factorizations can yield basis vectors without negative terms.

### Preprocessing: Centering

Sometimes centering the data is good, other times it is bad (makes it hard to do sparse PCA).

## Manifold Methods

**Definition**: A **manifold** is a topological space that is **locally Euclidean**.

