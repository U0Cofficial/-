import sys
class Stack():
    def __init__(self):
        self.__list = []
        self.__len = 0
    def insert(self,x):
        self.__list.append(x)
        self.__len += 1
    def pop(self):
        if self.isEmpty(): return -1
        self.__len -= 1
        return self.__list.pop(-1)
    def size(self):
        return self.__len
    def isEmpty(self):
        if self.__len: return 0
        return 1
    def top(self):
        if self.isEmpty(): return -1
        return self.__list[-1]
    def clear(self):
        self.__len = 0
        self.__list.clear()