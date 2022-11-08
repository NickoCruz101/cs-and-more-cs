# Weighted Edit Distance

In class we learned the dynamic programming algorithm to compute the edit distance. In this problem, your task is to write a program to compute the weighted edit distance. In particular, you have two sequences of integers 𝑎 and 𝑏. You want to use insertion, deletion, or edit to change 𝑎 to match 𝑏. However, the costs of the three operations are different. The cost of inserting an element 𝑥 is 𝑥. The cost of deleting an element 𝑥 is 𝑥. The cost of editing (changing) an element from 𝑥 to 𝑦 is |𝑥−𝑦|. Your task is to change 𝑎 to 𝑏 with the smallest cost.

## Input

The first line contains two integer $𝑛_1$ and $𝑛_2$ $(1≤𝑛1,𝑛2≤1000)$, which are the length of strings 𝑎 and 𝑏, respectively.

The second line contains 𝑛1 integers, which is the sequence of $a$ (each $𝑎𝑖, 0\leq a_i \leq 1000)$.

The third line contains $n_2$ integers, which is the sequence of $b$ (each $b_i, 0\leq b_i \leq 1000)$.

## Output

The output only contains one integer, which is the smallest cost to change 𝑎 to 𝑏.

## Examples

```python
# Input
    4 3
    1 5 3 4
    2 2 2
# Output
    7
```

```python
# Input
    5 5
    0 464 200 724 546
    430 815 774 211 567
# Output
    931
```
