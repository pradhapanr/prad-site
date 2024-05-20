---
r 
layout: default
order: 1
toc: true
---

# Differentiability

**Definition (Differentiability 1)**: Let $f$ be a real-valued function of one variable. Let $a \in \mathbb R$ and $f$ defined in $(a - \delta, a + \delta)$ for $\delta \gt 0$. Then $f$ is **differentiable** at $a$ if

$$
    \lim_{x \to a} \frac{f(x) - f(a)}{x - a}
$$

exists. And this is the **derivative** of $f$ at $a$, $f'(a)$. The quotient in this limit is also called the **difference quotient**.

**Theorem**: Suppose a function $f$ is defined near $a \in \mathbb R$. If $f$ is differentiable at $a$, then it is continuous at $a$.

*Proof*: If $f$ is differentiable at $a$, then

$$
    \lim_{x \to a} (f(x) - f(a)) 
    = \lim_{x \to a}\left( \frac{f(x) - f(a)}{x - a} (x - a)\right)
    = f'(a) \cdot 0
    = 0
$$
$\blacksquare$.

**Example**: $f(x) = \vert x \vert$ is continuous but not differentiable at $0$.

*Proof*: The left limit of the difference quotient as $x \to 0$ is $-1$, but the right limit of the different quotient as $x \to 0$ is $1$. So the limit does not exist and $f$ is not differentiable at $0$. But, $\lim_{x \to 0} (f(x) - f(0)) = 0$, so it is continuous at $0$. $\blacksquare$

**Example**: Let 

$$
    f(x) = \begin{cases}
        x^2, & x \in \mathbb Q \\
        -x^2, & x \not\in \mathbb Q
    \end{cases}
$$

Show that $f$ is differentiable at $x = 0$, and discontinuous when $x \neq 0$.

*Proof*:

(1) Let $(x_n)$ be an arbitrary sequence convergent to $0$. Let $\epsilon \gt 0$. Choose $N$ such that for all $n \geq N$, $\vert x_n \vert \lt \epsilon$. Let $n \geq N$. Then

$$
    \left\vert \frac{f(x_n) - 0}{x_n - 0} \right\vert = \frac{x_n^2}{x_n} = x_n \lt \epsilon.
$$

So $\lim_{n \to \infty}\frac{f(x_n) - 0}{x_n - 0} = 0$ for any artbirary sequence $(x_n)$ convergent to $0$, so $\lim_{x \to 0}\frac{f(x) - 0}{x - 0} = 0$. $\blacksquare$

(2) Let $x \neq 0$. Suppose $x \in \mathbb Q$. Choose a sequence $(x_n)$ convergent to $x$ such that $x_n \not\in \mathbb Q$. Let $\epsilon \lt x^2$. Since $f(x_n) \lt 0$ and $f(x) \gt 0$, then

$$
    \vert f(x_n) - f(x) \vert = x_n^2 + x^2 \gt x^2 \gt \epsilon
$$

so $\lim_{n \to \infty} x_n = x$ but $\lim_{n \to \infty} f(x_n) \neq f(x)$. So $f(x)$ is discontinuous at $x$. Similar logic follows when $x \not\in \mathbb Q$. $\blacksquare$

**Example**: A function which is not the derivative of any other function.

There is no function $f(x)$ such that $f'(x) = 
    \begin{cases}
        -1, & x \lt 0 \\
        0, & x = 0 \\
        1, & x \gt 0
    \end{cases}$

*Proof*: Suppose for the sake of contradiction that such a function $f$ existed. Then $f$ is differentiable and thus continuous. By definition of $f'$, $\lim_{x \to a} \frac{f(x) - f(a)}{x - a} = 1$ for all $a > 0$. Note that since $f$ is continuous and the difference and quotient of continuous functions is itself continuous (when the denominator is non-zero), $\frac{f(x) - f(a)}{x - a} = 1$ for all $a > 0$ and $x \neq a$. Thus, $\lim_{x \to 0^+} \frac{f(x) - f(0)}{x - 0} = 1$. Similarily, $\lim_{x \to 0^-} \frac{f(x) - f(0)}{x - 0} = -1$. These left and right limits at $0$ are not equal, so $\lim_{x \to 0} \frac{f(x) - f(0)}{x - 0}$ does not exist. This contradicts that $f'(0) = 0$. So $f$ can not exist. $\blacksquare$

**Definition (Differentiability 2)**: Let $x_0 \in \mathbb R$. Suppose $f$ is defined on $(x_0 - \delta, x_0 + \delta)$ for some $\delta \gt 0$. Then $f$ is **differentiable at $x_0$** if there is a $L \in \mathbb R$ and a function $\epsilon$ such that

$$
    f(x) = f(x_0) + L(x - x_0) + \epsilon(x)(x - x_0)
$$

and $\epsilon(x) \to 0$ as $x \to x_0$. That is, $f$ has a good linear approximation near $x_0$. ($L$ is $f'(x_0)$). $\epsilon$ is a sort of "error" function.

**Theorem**: Suppose $x_0 \in \mathbb R$, $f$ is defined on a $\delta$-neighborhood of $x_0$. Then

1. $\lim_{x \to x_0}\frac{f(x) - f(x_0)}{x - x_0}$ exists iff there is a number $L$ and function $\epsilon(x)$ such that $f(x) = f(x_0) + L(x - x_0) + \epsilon(x)(x - x_0)$ such that $\epsilon(x) \to 0$ as $x \to x_0$.
2. If $\lim_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0} = L$ exists, then $L = f'(x)$.

*Proof*: (1) ($\rightarrow$)  Suppose the limit exists choose this as $L$. Define $\epsilon(x) = \frac{f(x) - f(x_0)}{x - x_0} - L$ near $x_0$. Then $\lim_{x \to x_0} \epsilon(x) = L - L = 0$. So,

$$
\begin{align*}
    \epsilon(x)(x - x_0) &= f(x) - f(x_0) - L(x - x_0) \\
    \implies f(x) &= f(x_0) + L(x - x_0) + \epsilon(x)(x - x_0)
\end{align*}
$$

($\leftarrow$) Suppose there exist such a number $L$ and function $\epsilon(x)$. Then

$$
\begin{align*}
    &f(x) = f(x_0) + L(x - x_0) + \epsilon(x) (x - x_0) \\
    &\implies \frac{f(x) - f(x_0)}{x - x_0} = L + \epsilon(x)
\end{align*}
$$

and taking the limit of both sides, since $\epsilon(x) \to 0$, the limit is $L$. This also proves (2).  $\blacksquare$

(2) See (1).



**Theorem (Mean Value Theorem)**: Let $a \lt b$. Suppose $f$ is continuous on $[a, b]$, differentiable in $(a, b)$. Then, $\exists c \in (a, b)$ such that $f'(c) = \frac{f(b) - f(a)}{b - a}$.

*Proof*: TODO. Using Rolle's Theorem.

**Theorem**: Let $a \lt b$. Suppose $f$ is continuous and injective on $[a, b]$. Then, $f^{-1}$ is continuous on $f([a, b])$. 

**Theorem**: Suppose $f$ is continuous on $[a, b]$, differentiable on $(a, b)$, and for $x \in (a, b), f'(x) \neq 0$. Then $f^{-1}$ is differentiable at $y_0 = f(x_0)$. and $(f^{-1}(y_0))' = \frac{1}{f'(x_0)}$. Also $x_0 = f^{-1}(y_0)$.

*Proof*: TODO.