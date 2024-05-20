---
layout: default
order: 1
toc: true
---

**Definition**: A **(finite-dimensional) Hilbert space** is a $\mathbb C$-vector space with an inner product $\langle \cdot , \cdot \rangle: \mathcal H \times \mathcal H \to \mathbb C$, linear in the second component and anti-linear in thefirst component.

**Example**: $\mathbb C^n$ with $\left\langle \begin{bmatrix}a_1 \\ \dots \\ a_n\end{bmatrix}, \begin{bmatrix}b_1 \\ \dots \\ b_n\end{bmatrix} \right\rangle = \sum_{j = 1}^m \bar a_j b_j$ is a Hilbert space. 

**Notation (Dirac's "bra" and "ket" notation)**: $\ket \phi$ is a vector ("ket"), $\bra \phi$ ("ket") is the dual of vector $\ket \phi$.

**Theorem (Riesz representation theorem)**: For every continuous $\mathbb C$-linear functional $f: \mathcal H \to \mathbb C$, there exists a unique vector $\vec v$ such that $f(\vec u) = \langle \vec v, \vec u \rangle = \bra {\vec v} (\ket {\vec u})$.

*Remark*: $\ket \phi \sim e^{i \theta}\ket \phi$

**State space postulate**: The state space of a (closed) quantum system is a Hilbert space given by the collection of unit vectors in the Hilbert space:

$$
\lbrace \ket \phi \in \mathcal H \mid \vert \vert \ket \phi \vert \vert = 1\rbrace / \ket \phi \sim e^{i \theta} \ket \phi
$$

**Definition**: Any quantum system with 2 levels, that is, $\operatorname{dim}(\mathcal H) = 2$, is called a **qbit**.

A qbit can represent the following states:

$\lbrace \alpha \ket 0 + \beta \ket 1 \mid \vert \alpha \vert^2 + \vert \beta \vert^2 = 1 \rbrace$ (unit vectors that are linear combinations of $\ket 0$ and $\ket 1$), contrast with a classic bit that can represent only 2 states: $\lbrace 0, 1 \rbrace$.

**Block sphere**: $\alpha \ket 0 + \beta \ket 1 \sim \vert \alpha \vert \ket 0 + e^{i \theta} \vert \beta \vert \ket 1 = \cos \phi \ket 0 + e^{i \theta} \sin \phi \ket 1$ for $0 \leq \phi \leq \pi/2$ and $0 \leq \theta \leq 2\pi$ (since $\sin^2 \phi + \cos^2 \phi = 1$).

$\vert \alpha \vert^2$ is the probability of system being in $\ket{0}$ (probability amplitude)

So the state space can be parameterized in spherical coordinates as:

$$
\lbrace (x, y, z) \mid x = \cos \theta \sin \phi, y = \sin \theta \sin \phi, z = \cos \phi \rbrace
$$

using that $z = \sin \phi$ and $x + iy = e^{i \theta} \cos \phi$

The Bloch sphere is the set of all states of a qbit.

Note that because of the equivalence relation $e^{i \theta} \ket 1 \sim \ket 1$, the hemisphere $\geq 0$ represented by the paramterization is a sphere $\geq 0$, because the ring of the bottom of the hemisphere is represented by just 1 point, since when $z = 0$, $e^{i \theta} \ket 1 \sim \ket 1$.

**Definition**: A unitary matrix is an invertible matrix $U$ whose inverse $U^* = \bar U^T$ (the transpose of the conjugate). Equivalently, the length of $U \ket \phi$ is the length of $U \ket \phi$, for all $\phi \in \mathcal H$.

Quantum gates are unitary operators of Hilbert space of our system: $\mathbb C^2 \to \mathbb C^2$

**Evolution postulate**: Evolution of any quantum system is done by a unitary matrix: $\ket \phi_1 = U \ket \phi_0$.

**Example**: The quantum NOT gate $\begin{bmatrix}0 & 1 \\ 1 & 0 \end{bmatrix}$ maps $\ket 0 \mapsto \ket 1$ and vice-versa

**Example**: The quantum Hadamard gate $H = \frac{1}{\sqrt 2} \begin{bmatrix}1 & 1 \\ 1 & -1 \end{bmatrix}$

$$
\begin{bmatrix}\alpha \\ \beta\end{bmatrix}
\sim
\begin{bmatrix}\vert \alpha \vert \\ e^{i \phi} \vert \beta \vert \end{bmatrix}
=
\begin{bmatrix}\cos (\theta / 2) \\ e^{i \phi} \sin (\theta / 2) \end{bmatrix}
\mapsto
(\phi, \theta)
\mapsto
\begin{bmatrix} \cos \phi \sin \theta \\ \sin \phi \sin \theta \\ \cos \theta \end{bmatrix}
$$
where $0 \leq \phi \leq 2\pi$ and $\leq \theta \leq \pi$.

Rotating about the $z$-axis by angle $\gamma$ $(\phi, \theta) \mapsto (\phi + \gamma, \theta)$:
* $R_z(\gamma): \ket 0 \mapsto \ket 0, \ket 1 \mapsto e^{i\gamma}\ket 1 = \begin{bmatrix}1 & 0 \\ a & e^{i\gamma}\end{bmatrix} \sim \begin{bmatrix}e^{-i\gamma/2} & 0 \\ 0 & e^{i\gamma/2} \end{bmatrix} = e^{\frac{-i\gamma}{2} Z}$

## Pauli Gates

$X = \begin{bmatrix}0 & 1 \\ 1 & 0 \end{bmatrix}, Y = \begin{bmatrix}0 & -i \\ i & 0 \end{bmatrix}, Z = \begin{bmatrix}1 & 0 \\ 0 & -1 \end{bmatrix}$

$R_X(\theta) = e^{i \frac{\theta}{2} X}$

$R_y(\theta) = e^{-i \frac{\theta}{2} Y}$

$R_z(\theta) = e^{-i \frac{\theta}{2} Z}$

**Definition**: A set of functions that can generate all functions $f: \lbrace 0, 1 \rbrace^n \to \lbrace 0, 1 \rbrace^m$ using the elements of that set, we cal the set a **universal set of classical gates**.

**Definition**: A set of (unitary) gates on $n$ qubits is called a **universal set of quantum gates** if any unitary operator on $n$ qubits can be approximated by the gatesin that set.

**Theorem (Z-X decomposition)** Any unitary matrix $U$ can be represented as $U = e^{i \alpha} R_Z(\beta) R_X(\gamma) R_Z(\delta)$.

**Corollary**: $\lbrace e^{i\alpha}I, R_Z(\gamma), R_X(\theta) \rbrace$ is a universal set of $1$-qubit gates.

## Penny Flip Game

Suppose there are two players $P$ and $Q$ with a coin initially heads. The game proceeds as follows:

1. $P$ flips or doesn't flip
2. $Q$ flips or doesn't flip
3. $P$ flips or doesn't flip

If the coin is heads by the end, $Q$ wins. Otherwise, $P$ wins. Neither player has a winning strategy since neither player can know what the initial state of the coin is.

Using quantum gates though, $Q$ has a winning srategy.

Instead of the coin being $\lbrace H, T \rbrace$, we have $\lbrace \alpha \ket H + \beta \ket T \rbrace$. Then $Q$ on the first turn can apply the Hadamard gate so that $\ket H \mapsto \frac{1}{\sqrt 2} \ket H + \frac{1}{\sqrt 2} \ket T$, where the Hadamard gate is $\frac{1}{\sqrt 2}\begin{bmatrix}1 & 1 \\ 1 & -1 \end{bmatrix}$.

On $P$'s turn, with only access to clasical mechanics, can either apply the identity matrix (no flip), or $X = \begin{bmatrix}0 & 1 \\ 1 & 0\end{bmatrix}$ (flip). Neither gate changes the state from $\frac{1}{\sqrt 2} \ket H + \frac{1}{\sqrt 2} \ket T$.

On $Q$'s turn, it can apply the Hadamard gate again (Hadamrd is self-adjoint, inverse of itself).

$Q$ wins.

## Composite System Postulate

Consider two coins with state spaces $S_1, S_2 = \lbrace H, T \rbrace$. Treat them as one system with state space $S = \lbrace (H, H), (H, T), (T, H), (T, T) \rbrace = S_1 \times S_2$.

Consider two quantum systems modeled by Hilbert spaces $\mathcal H_1$ and $\mathcal H_2$, the composite system is modeled by $\mathcal H_1 \otimes \mathcal H_2$.

**Definition**: $\mathcal H_1 \otimes \mathcal H_2$ as a linear space consists of the linear combinations of the product $\vec \phi_1 \otimes \vec \phi_2$ where $\phi \in \mathcal H_i$. Here, $\phi_1 \otimes \phi_2$ has a bilinear structure $(c_1\phi_1 + c_2 \phi_1) \otimes \phi_2 = c_1 \phi_1 \otimes \phi_2 + c_2 \phi_1 \otimes \phi_2$. Similarily, on the second component.

$$
\braket{\phi_1 \otimes \psi_1 | \phi_2 \otimes \psi_2} := \braket{\phi_1 | \phi_2}_1 \braket{\psi_1|\psi_2}_2
$$

provided that $\braket{\cdot | \cdot}$ is linear on the second input and anti-linear on the first component.

$\mathcal H_1 \otimes \mathcal H_2$ is a Hilbert space with an orthonormal basis $\lbrace \phi_j \otimes \psi_k \rbrace_{j, k}$ when $\lbrace \phi_j \rbrace_j$ is an orthonormal basis for $\mathcal H-1$ and $\lbrace \psi_k \rbrace_k$ a basis for $\mathcal H_2$.

If the systems $\ket \phi$, $\ket \psi$ are seperate systems, the composite system is $\ket \phi \otimes \ket \psi$. The hamiltonian is $H_1 \otimes I + I \otimes H_2$, where $H_1, H_2$ are the Hamiltonians of systems 1 and 2.

A state in a composite system $\mathcal H_1 \otimes \mathcal H_2$ is called **separable** if we can write it as $\ket \phi \otimes \ket \psi$, otherwise it is called an entangled state $\frac{1}{\sqrt 2} \ket {00} + \frac{1}{\sqrt 2} \ket{11}$.