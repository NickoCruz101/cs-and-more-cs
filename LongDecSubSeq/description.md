# Longest Decreasing Subsequence

## Recurrenc

$$ l[i] =
\begin{cases}

1 \quad (i == 0)\\
l[i] = 1 + max(l[j]) \quad(0 < i < j, a_i < a_j)
\end{cases}
