# Weighted Edit Distance

### username: NickoCruz

### id: 180411173

## Inputs

Read in the input and assign them to variables $n_1$ and $n_2$.

call populate(arg1,arg2) function, which populates vectors with the sequence input.
arg1 is the vector being populated with values.
arg2 is the length of given sequence.

Produce a vector one element greater than the size given. This is to account for the empty sequence.

After populating vectors, initialize matrix

## Matrix

Matrix declaration

```cpp
    vector< <vector <int> > dp(rows + 1, vector<int>(cols + 1,0));
```
created a vector that holds vectors. and initialize it with (rows + 1) vectors, where each vector holds (cols + 1 ) elements, in this case we initialized the matrix to only hold 0's. 

populate the 0th row with the appropriate costs of sequence A.

populate the 0th collumn with the appropriate costs of sequence B.

The appropriate costs for these two sequences when producing the sequences from an empty string can be defined as follows:

$$ cost_{i,j} = 
\begin{cases}
cost_{i,j-1} + A[j] \quad (i == 0)\\
cost_{i-1,j} + B[i] \quad (j == 0)

\end{cases}
$$

Once our set up is complete we can call the solve() function which is implemented using recurrence defined by the following recurrence relation

$$S[i,j] = 
\begin{cases}

S[i-1,j-1] \quad (A[j] == B[i])\\
\min{
    \begin{cases}
    S[i,j-1] + B[i]\\
    S[i-1,j] + A[j]\\
    S[i-1,j-1] + |A[j] - B[i]|
    \end{cases}
} \quad (A[j] \neq B[i])


\end{cases}
$$


$$S[i,j] = S[i-1,j-1] \text{ when } \quad (A[j] == B[i])$$ 

when Both sequences share an element, no operations are necessary so we will just carry over the previous cost (diagnol to curr position) to the current.

The second condition takes the minimum of each operation, 
insert $S[i,j-1] + B[i]$
remove $S[i-1,j] + A[j]$
replace $S[i-1,j-1] + |A[j] - B[i]|$

the 2nd term is the cost associated with each operation.

Our mimimum cost will be located at the very last elment in the matrix.

## Time complexity
Our time complexity is: 
$$ \Theta{(n_1n_2)} $$

where $n_1, n_2$ are the lengths of the given sequnces.
