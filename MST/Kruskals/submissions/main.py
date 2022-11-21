
class Edge:
    
    def __init__(self, u, v, weight):
        self.weight = weight
        self.p1 = u
        self.p2 = v
        
    def __str__(self):
       return self.p1, self.p2, self.weight
   
    def __lt__(self, otherEdge):
       return self.weight < otherEdge.weight
    
    def __gt__(self, otherEdge):
        return self.weight > otherEdge.weight
    

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

E = list()

if __name__ == '__main__':
    first_line = list(map(int,input().strip().split()))
    n = first_line[0]
    m = first_line[1]
    
    for i in range(0,m):
        line = list(map(int,input().strip().split()))
        e = Edge(line[0],line[1],line[2])
        E.append(e)
        
    
    visited = [False]*(n+1)
    sortedE = sorted(E)
    
    cost = 0

for v in range(0,len(sortedE)):
    curr_edge = sortedE.pop(0)
    u = curr_edge.p1
    v = curr_edge.p2

    if(not aCycle(visited,u,v)):
        markVisited(visited,u)
        markVisited(visited,v)
        cost = cost + curr_edge.weight
        
print(cost)

    
    
    
        