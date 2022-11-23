# Report 5, username: NickoCruz

## A. SSSP

Implementing Bellman's Ford algorithm (Bottom-up) with a time complexity of $O(VE)$

Given $n$ vertices

$Let T = \{ \text{ tentative distances }\}$.
We assign the tentative distances to all vertices as $\infty$, except for our starting vertex $s$, $T[s] = 0$.

We will loop through the edges $n-1$ times and relax each edge
$(u,v)$. If $T[v] > T[u] + w_{uv}$ then update $T[v] = T[u] + w_{uv}$. Where $w_{uv} is the weight of edge $(u,v)$

## B. Minimum Spanning Tree

### Submission id: 182193870

Implemented the Kruskal Algorithm

Created a tuple to hold the vertices (u,v). When populating the Graph with edges we construct the edges such that the first element is the weight of the edge and the 2nd element is the pair of the vertices which the weighted edge is incident on.

Created a Graph object to hold Vertices and Edges from the given input. From the graph object we call kruskal()

Create another object DisJointSet. We assign the rank of each vertex to 0, where all vertices are in different sets. The rank of a vertex is the number of vertices adjacent to the vertex such that the adjacent vertices are smaller. Every element is a parent of itself

Using path compression we find vertex. Function is implemented with recursion.

Merge function, is Union by rank
takes in two int arguments u,v. we call find(u) and find(v) where we return the parent[u] and parent[v] to the respected values. We make the the tree of smaller height a sub tree of the other.

In the body of our Kruskal algorithm
after sorting the Edges, we check if the selected edge is creating a cycle or not. A cylce is defined by if u and v are in the same set then a cycle has been created. If our selected edge does not create a cycle then we update our total cost and merge u and v.

## Runtime

$$O(E \log{E})$$
