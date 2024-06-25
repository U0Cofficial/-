class ListStack:
    def __init__(self):
        self.__stack=[]
    
    def push(self,x):
        self.__stack.append(x)
        return
    
    def pop(self):
        return self.__stack.pop()
    
    def top(self):
        if self.isEmpty():
            return None
        return self.__stack[-1]
    
    def isEmpty(self) -> bool:
        return not bool(self.__stack)
    
    def popAll(self):
        self.__stack.clear()
        return
    
    def printStack(self):
        print("stack from top:",end=' ')
        print(self.__stack.reverse())
        print(self.__stack[len(self.__stack)-1::-1])

    