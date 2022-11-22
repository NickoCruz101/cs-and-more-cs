from Edge import Edge
from tools_v0 import printEdges,aCycle,markVisited

edgesA = [
    Edge(0,1,2),
    Edge(1,2,3),
    Edge(2,4,5),
    Edge(1,4,10),
    Edge(1,3,1),
    Edge(3,4,4)
]
n = 4
visited = [False]*(n+1)

printEdges(edgesA,len(edgesA))
Q = sorted(edgesA)

cost = 0

for v in range(0,5):
    curr_edge = Q.pop(0)
    u = curr_edge.p1
    v = curr_edge.p2

    if(not aCycle(visited,u,v)):
        markVisited(visited,u)
        markVisited(visited,v)
        cost = cost + curr_edge.weight
        print(cost)
    
    
        
    
        
    
    



