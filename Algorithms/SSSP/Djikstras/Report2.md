# Report 5, username: NickoCruz

## A. SSSP id: 182214447

Used Dijkstras Shortest path Algorithm, using built in priority_queue. Runtime $O(E \log V)$.

Represented Graph with an adjacency list. Used a pair object to store the vertex weight pair $(v,w)$, built-in list data structure to hold pairs. Upon declaring the priority queue for the compare key argument I used 'greater' which causes the smallest element to be on top.

Initialize all distances as infinite. Insert source into priority queue and update the distance to 0.

For the pairs the vertex labes is stored in the second position of pair, to keep the sorted distance.

We loop until the Priority Queue is empty. Since the priority queue is has the vertex pair with the minimum distance on top we call the top() function and pop() the element out of queue to be removed.

inide the while loop we enter a for loop that determines if there is a shorter path from to v through u. If there is we update distance of v with the distance of u + the current weight. we then push_back this new pair of ($T[v],v$) into the priority queue. Repeating this process until queue is empty.

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
