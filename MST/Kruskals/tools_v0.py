from Edge import Edge

def printEdges(edges,m):
    # Given (m) edges: range (0,m)
    for i in range(0,m):
        print(edges[i].p1, edges[i].p2, edges[i].weight)
        
def markVisited(visited,v):
    visited[v] = True
    
def aCycle(visited, u,v):
    if(visited[u] == True and visited[v] == True):
        return True
    
    return False

