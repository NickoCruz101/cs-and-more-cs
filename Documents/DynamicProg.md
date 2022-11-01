# Dynamic Programming

## Unlimited Knapsack Problem

### Recurrence Relation

$$ S[i] = \text{ max }
\begin{cases}

0 \quad (i < p_j)\\
\text{ max}_{(p_j,v_j)} (S[i - p_j] + v_j) \quad \text{ if }(p_j \leq i)
\end{cases}
$$

#### Variables 
$$i: \text{ Budget }$$
$$p_j: \text{ } 