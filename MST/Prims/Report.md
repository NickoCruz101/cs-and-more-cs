# Prims

## Process

Let S be the set of settled vertices. These are the vertices already included in our MST.
Initialize all nodes tentative distance to Infinity.
Assign the key value 0 to the vertex we will start from, source vertex (s).
Every vertex adjacent to the source will be updated(relaxed) with the weight from the source to neighbor
if the weight from $(s,v)$ is less than the current Nodes tentative distance then update it, else don't.

### Set of Settled vertices

This set contains vertices that have already been visited.
