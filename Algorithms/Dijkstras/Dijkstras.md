# DIJKSTRAS

choose a starting vertex assign it with the weight $A[v_s] = 0$
Label all vertices adjacent to $v_s$ as the weights of their edges. If their is not a direct path between $v_s$ and $v_k$ then assign those vertices with a weight of infinity.

For each vertex we add the weights of the paths that have been traversed and assign it to that vertex. If there are two paths from the source position that reach a vertex then we take the smaller weight and assign it to that vertex.

Avoid updating path lengths of already visited vertices.
After each iteration, we pick the unvisited vertex with the least path length. 