# Dynamic Programming

## Unlimited Knapsack Problem

### Recurrence Relation (without memoization)

$$ S[i] = \text{ max }
\begin{cases}

0 \quad (i < p_j)\\
\text{ max}_{(p_j,v_j)} (S[i - p_j] + v_j) \quad \text{ if }(p_j \leq i)
\end{cases}
$$
#### Variables 
$$i: \text{ Budget }$$
$$p_j: \text{price of $j$th item}$$
$$v_j: \text{value of $j$th item}$$

#### Relation Explanation

Given a Budget we pass in the budget 


### Recurrence Relation (with memoization)

$$ S[i] = \text{ max }
\begin{cases}

S[i - p_j] &\quad \text{ if }(S[i - p_j] \neq -1)\\
\text{ max}_{(p_j,v_j)} (S[i - p_j] + v_j) \quad & \text{ if }(p_j \leq i)
\end{cases}
$$
