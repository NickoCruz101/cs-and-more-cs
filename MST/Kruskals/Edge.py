
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
    
    
        
         