class stack:
    def __init__(self):
        self.__size = 0
        self.arr = []
    
    def push(self,item):
        self.arr.append(item)
        self.__size += 1
        
    def pop(self):
        try:
            del self.arr[-1]
            self.__size -= 1
        except IndexError:
            print(self.__size, "INDEX ERROR")
    
    def describe(self):
        for i in range(self.__size):
            print(self.arr[i])
    

            
        
        