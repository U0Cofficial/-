from DataStructure.LinkedList.linkedListBasic import LinkedListBasic
class LinkedStack:
    def __init__(self):
        self.__stack=LinkedListBasic()

    def push(self,x):
        self.__stack.insert(x,0)
        return

    def pop(self):
        return self.__stack.pop(0)
    
    def top(self):
        if self.isEmpty():
            return None
        return self.__stack.get(0)
    
    def isEmpty(self) -> bool:
        return self.__stack.isEmpty()
    
    def popAll(self):
        self.__stack.clear()

    def printList(self):
        print("from top of the list: ", end=' ')
        for i in range(self.__stack.size()):
            print(self.__stack.get(i),end=' ')