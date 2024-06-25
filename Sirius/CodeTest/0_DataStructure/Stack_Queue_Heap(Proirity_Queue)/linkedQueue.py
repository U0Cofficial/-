# from DataStructure.LinkedList.linkedListBasic import LinkedListBasic
from linkedListBasic import *
class LinkedQueue:
    def __init__(self):
        self.__queue=LinkedListBasic()
    
    def enqueue(self,x):
        self.__queue.append(x)
    
    def dequeue(self):
        self.__queue.pop(0)

    def front(self):
        if self.isEmpty():
            return None
        return self.__queue.get(0)
    
    def isEmpty(self)->bool:
        return self.__queue.isEmpty()
        
    def dequeueAll(self):
        self.__queue.clear()

    def printQueue(self):
        print("Queue from front: ",end= ' ')
        for idx in range(self.__queue.size()):
            print(self.__queue.get(idx))

if __name__ == "__main__":
    q1=LinkedQueue()
    q1.enqueue("Mon")
    q1.enqueue("Tue")
    q1.enqueue("1234")
    q1.enqueue("Wed")
    q1.dequeue()
    q1.enqueue("aaa")
    q1.printQueue()

