# Longest Increasing Subsequence

$$ l_i = \max
\begin{cases}
1 \quad \\
\max \{l_j + 1\} \quad (0 < j < i, a_j < a_i)
\end{cases}
$$

## Translation

We want the length of the longest increasing subsequence, of some given sequence. $l_i$ is the longest increasing subsequence that ends at the i-th element in the sequence.

### To find $l_i$ (walk through)

- we go to the i-th element $a_i$ in the sequence.
- if  $(a_j > a_i)$ where  $\forall_j (0 < j < i)$ then we assign $l_i = 1$
- if there exists $a_j < a_i  (0 < j < i)$, then we take the maximium $l_j$ and add 1 to it assigning it to $l_i$. (i.e) $l_i = l_j + 1$
- we may only use the max $l_j$ if the associated $a_j$ is less than the $a_i$
- We then can return the max $l_i$
