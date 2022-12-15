A = list()
B = list()

n = int(input())

line = 0
while(line < n):
    x = int(input())
    A.append(x)
    line = line + 1
    
#print("\t Input:",A,sep=" ")
# print("\t sorted:",A,sep=" ",end="\n")
# print()


while(len(A) > 1):
    A.sort()
    xMin = min(A)
    A.remove(xMin)
    yMin = min(A)
    A.remove(yMin)
    
    b = xMin + yMin
    
    B.append(b)
    A.append(b)
    

count = 2*sum(B)

print(count)
    
    
    