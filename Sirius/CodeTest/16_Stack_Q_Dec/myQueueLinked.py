import sys
class Node():
    def __init__(self):
        self.item = None
        self.next = None
class Queue():
    def __init__(self):
        self.__head = Node()
        self.__len = 0
    def push(self,x:int):
        curr = self.__head
        for _ in range(self.__len):
            curr = curr.next
        curr.next = Node()
        curr.next.item = x
        self.__len += 1
    def pop(self):
        if self.empty(): return -1
        curr = self.__head.next
        rst = curr.item
        self.__head.next = curr.next
        self.__len -= 1
        return rst
    def size(self):
        return self.__len
    def empty(self):
        if self.__len: return 0 # 원소가 있으면
        return 1
    def front(self):
        if self.empty(): return -1
        return self.__head.next.item
    def back(self):
        if self.empty(): return -1
        curr = self.__head
        for _ in range(self.__len):
            curr = curr.next
        return curr.item