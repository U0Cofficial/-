class Queue():
    def __init__(self):
        self.__list = []
        self.__len = 0
    def push(self,x):
        self.__list.append(x)
        self.__len += 1
    def pop(self):
        if self.empty(): return -1
        temp = self.__list[0]
        self.__list = self.__list[1:]
        self.__len -= 1 
        return temp
    def size(self):
        return self.__len
    def empty(self):
        if self.__len: return 0
        return 1
    def front(self):
        if self.empty(): return -1
        return self.__list[0]
    def back(self):
        if self.empty(): return -1
        return self.__list[-1]