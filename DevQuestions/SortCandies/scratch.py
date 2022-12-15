from random import randrange,randint

class candy:
    def __init__(self, good=True):
        self.isGood = good

    def __str__(self):
        if self.isGood():
            return " is Good "
        else:
            return " is Bad "
    def isGood(self):
        return self.isGood
    

def foundBad(a_list):
    bad = "bad"
    if bad in a_list:
        return True
    
    else:
        return False




    
candy_list = []

good = []
bad = []


for i in range(1,10):
    r = randrange(1,100,i)
    if(r%2 == 0):
        candy_list.append("good")
    else:
        candy_list.append("bad")
        
cost = 0

print(candy_list)

sortingCandies = True
while(sortingCandies):
    
    n = len(candy_list)
    pileA = list(candy_list[:n])
    pileB = list(candy_list[n+1:])
    
    
    
    cost += 1


    
    

    
        

        
    