# Longest Decreasing Subsequence

## Description

Defined function that one argument. A vector passed by reference, which holds the sequence of given values.

within the body I declared another vector L. Where the ith element in the vector is the length of the longest decreasing subsequence that ends at the ith element in the given sequence.

using nested for loops, for each
seq[i], and then assign the value of L[i] to a variable (best).
I iterate through the previous j-elements, up to the current i-th element. If seq[j] < seq[i] and best < L[i], then we update best to L[j]. if no elements are found that satisfy both condition the value assigned best remains as 0.

we then assign L[i] = best + 1.

Repeating this process each ith element.

after our L[i] has been populated with the appropriate lengths, we return the max value in L.

## Recurrence Relation

$$ l[i] =
\begin{cases}

1 \quad (i == 0)\\
l[i] = 1 + max(l[j]) \quad(0 < i < j, a_i < a_j)
\end{cases}
$$

## Time complexity

$$ \text{LDS = }O{(n^2)} $$
