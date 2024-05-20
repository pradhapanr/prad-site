---
layout: default
order: 2
toc: true
---

# Integrals

**Definition**: A **partition** of an interval $[a, b]$ is a subset $X = \lbrace x_0, x_1, \dots, x_n \rbrace$, $n \geq 1$ such that $a = x_0 \lt \dots \lt x_n = b$. 

Let $f: [a, b] \to \mathbb R$ be a bounded function. For each $k \in \lbrace 0, 1, \dots, n \rbrace$,

$$
    m_k = \inf_{x_{k - 1} \leq x \leq x_k} f(x) \\
    M_k = \sup_{x_{k - 1}, \leq x \leq x_k} f(x)
$$

**Lower sum**: $L_X(f) = \sum_{k = 1}^n m_k(x_k - x_{k - 1})$

**Upper sum**: $U_X(f) = \sum_{k = 1}^n M_k(x_k - x_{k - 1})$

If $X'$ is another partition such that $X \subseteq X'$, then $X'$ is called a **refinement** of $X$.

**Observation**: In the notations above,

$$
    L_X(f) \leq L_{X'}(f) \\
    U_{X'} \leq U_X(f)
$$

Also for any two partiitons, $X, Y$, $L_X(f) \leq U_Y(f)$.

**Definition:** Let $f: [a, b] \to \mathbb R$ be a bounded function. $f$ is **integrable** on $[a, b]$ if

$$
    \sup_X L_X(f) = \inf_X U_X(f)
$$

If so, this number is called the **definite integral** of $f$ over $[a, b]$ and we denote it by $\int_a^b f(x)$.
* $\overline {\int_a^b} f(x) dx := \inf_X U_x(f)$ is the **upper integral** of $f$
* $\underline {\int_a^b} f(x) dx := \sup_X L_x(f)$ is the **lower intergral** of $f$

**Example**: 

$$
f(x) = \begin{cases}
    1, x \in \mathbb Q \\
    0, x \not\in \mathbb Q
\end{cases}
$$
is not integrable on $[0, 1]$.

*Proof*: Let $X$ be a partition of $[0, 1]$. For each $k \in \lbrace 0, 1, \dots, n \rbrace$, $m_k = 0$ and $M_k = 1$. So $L_X(f) = 0$ and $U_X(f) = 1$, the length of the total interval. So $\sup_X L_X(f) = \sup_X 0 = 0$, and $\inf_X U_X(f) = \inf_X 1 = 1$. So the function is not integrable. $\blacksquare$

**Theorem**: A bounded function $f: [a, b] \to \mathbb R$ is integrable if and only if $\forall \epsilon \gt 0$, there exists a partition $X$ such that $U_X(f) - L_X(f) \lt \epsilon$.

*Proof*: ($\rightarrow$) Suppose $f$ is integrable. Let $\epsilon \gt 0$. Choose a partition $X'$ such that $U_{X'}(f) \lt \int_a^{\underline b} f(x) dx + \epsilon / 2$. Also, choose a partition $Y$ such that $L_Y(f) \gt \int_{\underline a}^b f(x) dx - \epsilon / 2$. Let $X = X' \cup Y$. Therefore, $U_X(f) - L_X(f) \leq U_{X'}(f) - L_Y(f) \lt \epsilon/2 + \epsilon/2 = \epsilon$.

($\leftarrow$) Let $\epsilon \gt 0$. Suppose there exists a partition $X$ such that $U_X(f) - L_X(f) \lt \epsilon$. Then,

$$
    I = \int_{\underline a}^b f(x) dx - \int_a^{\underline b} f(x) dx \leq U_X(f) - L(X)(f) \lt \epsilon
$$

for each pair $X, \epsilon$. Note that $I$ is fixed and non-negative, since $L_X(f) \leq U_Y(f)$ for any two partitions $X, Y$. Since $I \lt \epsilon$ for any $\epsilon$, $I = 0$. So $f$ is integrable. $\blacksquare$

**Theorem**: Let $f: [a. b] \to \mathbb R$ be bounded, and suppose $X_n, n = 1, 2, \dots$ are partitions such that $\lim_{n \to \infty} U_{X_n}(f) = \lim_{n \to \infty} L_{X_n}(f) = c$. Then $f$ is integrable and $\int_a^b f(x) dx = c$. 

*Proof*: For each $n \in \mathbb N$,

$$
L_{X_n}(f) \leq \int_{\underline a}^b f(x) dx \leq \int_a^{\underline b} f(x)dx \leq U_{X_n}(f)
$$

By Squeeze Theorem, $\int_{\underline a}^b f(x) dx = \int_a^{\underline b}$. So the statement follows. $\blacksquare$

**Notation**: Let $X$ be a partition. Then $\vert \vert X \vert \vert$ is the length of the longest interval in $X$.

**Theorem**: Let $f: [a, b] \to \mathbb R$ be a bounded function. If $f$ is monotone on $[a, b]$, then it is integrable on $(a, b)$.

*Proof*: Assume $f$ is increasing, since if it is decreasing, the statement will follow by applying the proof to $-f$. Let $\epsilon \gt 0$. If $X$ is a partition, then 

$$
\begin{align*}
U_X - L_X &= \sum_{k = 1}^n (M_k - m_k)(x_k - x_{k - 1}) \\
&= \sum_{k = 1}^n (f(x_k) - f(x_{k - 1}))(x_k - x_{k - 1}) \\
&\leq \sum_{k = 1}^n (f(x_k) - f(x_{k - 1})) \vert \vert X \vert \vert \\
&= \vert \vert X \vert \vert (f(b) - f(a))
\end{align*}
$$

So, if $f(a) \neq f(b)$, then let $X$ be a partition such that $\vert \vert X \vert \vert \lt \frac{\epsilon}{f(b)-f(a)}$. Then $U_X - L_X \lt \frac{\epsilon}{f(b) - f(a)}(f(b)-f(a)) = \epsilon$.

If $f(a) = f(b)$ then $f$ is constant, so $U_X - L_X = 0 \lt \epsilon$ for every partition $X$. $\blacksquare$

**Theorem**: Let $f: [a, b] \to \mathbb R$ be a bounded function. If $f$ is continuous on $[a, b]$ then $f$ is integrable.

*Proof*: Let $\epsilon \gt 0$. Recall that since $f$ is continuous on $[a, b]$, it is uniformly continuous on $[a, b]$. So, $\exists \delta \gt 0$ such that $\vert f(x) - f(y) \vert \lt \frac{\epsilon}{b - a}$ for all $x, y \in [a, b]$ with $\vert x - y \vert \lt \delta$. Let $X$ be a partition of $[a, b]$ such that $\vert \vert X \vert \vert \lt \delta$. By EVT, $f$ attains its maximum and minimum values on each $[x_{k - 1}, x_k]: m_k = f(x'_k), M_k = f(x_k'')$. For this partition,

$$
\begin{align*}
U_X - L_X &= \sum_{k = 1}^n (M_k - m_k)(x_k - x_{k - 1}) \\
&= \sum_{k = 1}^n (f(x_k'') - f(x_k'))(x_k - x_{k - 1}) \\
&\lt \frac{\epsilon}{b - a}\sum_{k = 1}^n (x_k - x_{k - 1}) \\
&= \frac{\epsilon}{b - a}(b - a) \\
&= \epsilon
\end{align*}
$$

So, $f$ is integrable. $\blacksquare$

**Theorem**: Let $f: [a, b] \to \mathbb R$ be bounded. If $f$ is continuous on $[a, b]$ except at one point, then $f$ is integrable on $[a, b]$.

*Proof*: Suppose $c \in (a, b)$ and that $\vert f(x) \vert \leq a$. Let $\epsilon \gt 0$. Let $\delta = \frac{\epsilon}{8a}$. Let $X$ and $Y$ be partitions for $[a, c - \delta], [c + \delta, b]$, respectively. Since $f$ is continuous over these intervals, $\exists X, Y$ such that $U_X - L_X \lt \epsilon/4$ and $U_Y - L_Y \lt \epsilon/4$. Let $Z = X \cup Y$ and $J = [c - \delta, c + \delta]$. Then,

$$
\begin{align*}
U_Z - L_Z &= (U_X - L_X) + (U_Y - L_Y) + (\sup_J f - \inf_J f) 2\delta \\
&\lt \epsilon/4 + \epsilon/4 + (2a)(2) \frac{\epsilon}{8a} \\
&= \epsilon
\end{align*}
$$

**Theorem**: Let $f: [a, b] \to \mathbb R$ be bounded. If $f$ is continuous on $[a, b]$, except at a finite number of points, then $f$ is integrable on $[a, b]$.

**Definition**: Let $f: [a, b] \to \mathbb R$ be a bounded function. A **Riemann sum** for $X$ is $\sigma = \sum_{k = 1}^n f(\zeta_k)(x_k - x_{k - 1})$ for some choice of points $\zeta_k \in [x_{k - 1}, x_k]$.

**Theorem**: $\inf_{\lbrace \zeta_k \rbrace} \sigma = L_X$ and $\sup_{\lbrace \zeta_k \rbrace} \sigma = U_X$.

**Theorem**: A bounded function on $f$ on $[a, b]$ is integrable with integral $I$ if and only if $\forall \epsilon \gt 0$, there exists a partition $X$ for every Riemann sum $\sigma$ such that $\vert \sigma - I \vert \lt \epsilon$.

**Definition**: Let $f: [a, b] \to \mathbb R$. A function $F$ on $[a, b]$ is a **primitive** function of $f$ if it is continuous on $[a, b]$, differetiable on $(a, b)$, and $F'(x) = f(x)$ on $(a, b)$.

**Theorem (Fundamental Theorem of Calculus, FTC)**: Let $f$ be integrable on $[a, b]$. If $F$ is a primitive function of $f$ on $(a, b)$, then $\int_a^b f(x) dx = F(b) - F(a)$.

**Definition**: Let $f$ be integrable on $[a, b]$. The function $I(x) = \int_a^x f(t) dt$ is the **integral function** of $f$.

**Theorem**: An integrable function has a primitive function if and only if its integral function is its primitive function.

**Theorem (Fundamental Theorem of Calculus 2, FTC2)**: Let $f$ be continuous on $[a, b]$. Then the integral function $F$ of $f$ is differentiable on $[a, b]$ and $F'(x) = f(x)$

**Theorem**: Let $f: [a, b] \to \mathbb R$ and $g: [a, b] \to \mathbb R$ be integrable functions. Then the function $h: [a, b] \to \mathbb R$ defined by $H(x) = \max\lbrace f(x), g(x) \rbrace, a \leq x \leq b$, is integrable on $[a, b]$.

*Proof*: The following functions are integrable: $f + g, f - g, \frac{1}{2}(f+g), \vert f - g \vert, \frac{1}{2} \vert f - g \vert$. And, $\max \lbrace f(x), g(x) \rbrace = \frac{1}{2}(f(x) + g(x)) + \frac{1}{2}\vert f(x) - g(x) \vert$, so it is integrable. $\blacksquare$
