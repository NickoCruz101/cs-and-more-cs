# Longest Increasing Subsequence

$$ l_i = \max
\begin{cases}
1 \quad \\
\max \{l_j + 1\} \quad (0 < j < i, a_j < a_i)
\end{cases}
$$

## Translation

We want the length of the longest increasing subsequence, of some given sequence. $l_i$ is the longest increasing subsequence that ends at the i-th element in the sequence.

### To find $l_i$

- we go to the i-th element $a_i$ in the sequence.
- if  $(a_j > a_i)$ where  $\forall_j (0 < j < i)$ then we assign $l_i = 1$
- if there exists $a_j \leq a_i  (0 < j < i)$, then we take the maximium $l_j$ and add 1 to it assigning it to $l_i$. (i.e) $l_i = l_j + 1$
- we may only use the max $l_j$ if the associated $a_j$ is less than the $a_i$

## The code

- we know the first element of any sequence will not have any increasing subsequence associated with it, since no elements come before it.
- We also know that the maximum element will not have any previous elements before it.
$$ l_0 = 1 $$

```python
# condition 1
    if(i == 0 or A[i] == max(A)):
        l[i] = 1
        return l[i]
```

- if the above conditional evaluates to false then we must get the maximum $l_j$ such that $a_j \leq a_i$
- There should be conditions in place to prevent the iteration through j-1 items.

```python
    # loop method (in efficient)
    best = 1
    for j in range(0,i-1):
        if(A[j] <= A[i]) and (best < L[j]):
            best = L[j]

    l[i] = best + 1 # longest inc subseq that ends at the i-th element
```
