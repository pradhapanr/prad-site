(2) We want $\forall M \in \mathbb R, \exists N \in \mathbb N, \forall n \geq N, a_n \gt M$.

Given: $\forall M \in \mathbb R, \exists N \in \mathbb N, \forall n \geq N, \frac{a_{n + 1}}{a_n} \gt M$

For instance, choose $N_0 \in \mathbb N$ such that $\forall n \geq N_0, \frac{a_{n + 1}}{a_n} \gt 2$. Then $a_{n + 1} \gt 2a_n$. By assumption, $a_{N_0} \gt 0$. We have 

$$
\begin{align*}
    a_{N_0 + 1} \gt 2a_{N_0} \implies a_{N_0 + 2} \gt 2 a_{N_0 + 1} \implies a_{N_0 + k} \gt 2^k a_{N_0}
\end{align*}
$$

So $\forall n \geq N_0$, $a_n \gt 2^{n - N_0} a_{N_0} = \frac{a_{N_0}}{2^{N_0}} 2^n$. Given arbitrary $M \in \mathbb R$, let $N_1 \geq N_0$ be such that $\frac{a_{N_0}}{2^{N_0}} \cdot 2^n \gt M, \forall n \geq N_0$. Then $a_n \gt \frac{a_{N_0}}{2^{N_0}} 2^n \gt M$. $\blacksquare$



(3) Suppose $L \neq \lim_{n \to \infty} a_n$, that is, $\exists \epsilon_0 \gt 0, \forall N \in \mathbb N, \exists n \geq N$ such that $\vert a_n - L \vert \geq \epsilon_0$. Choose $\epsilon \gt 0$ as above. For every $k \in \mathbb N$, choose $n_k \geq k$ such that $\vert a_{n_k} - L \vert \geq \epsilon$. Then $(a_{n_k})_k \subseteq (a_n)_n$ is bounded. By B-W, can choose $(a_{n_{k_l}}) \subseteq (a_{n_k})$ which is convergent. But $\lim_{l \to \infty} a_{n_{k_l}} \neq L$.