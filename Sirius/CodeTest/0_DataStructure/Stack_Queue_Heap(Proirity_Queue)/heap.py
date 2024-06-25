class Heap:
    def __init__(self,list):
        if not bool(list):
            self.__heap=[]
        else: self._heap=list
    
    def isEmpty(self):
        return not bool(self.__heap)
    
    def clear(self):
        self.__heap.clear()

    def size(self):
        return len(self.__heap)
    
    def buildHeap(self):
        for idx in range((len(self.__heap)-1-1)//2,-1,-1):
            self.percolateDown(idx)
        return

    def insert(self,x):
        self.__heap.append(x)
        self.percolateUp(len(self.__heap)-1)
    
    def percolateUp(self,idx):
        parent=(idx-1)//2
        if idx>0 and self.__heap[idx] > self.__heap[parent]:
            self.__heap[idx],self.__heap[parent]=self.__heap[parent],self.__heap[idx]
            self.percolateUp(parent)
    
    def deleteMax(self):
        if self.isEmpty():
            return None
        else:  
            max=self.__heap[0]
            self.__heap[0]=self.__heap.pop()
            self.percolateDown(0)
            return max
        
    def percolateDown(self,idx:int):
        child=2*idx+1
        right=child+1
        if child <= len(self.__heap)-1:
            if right <= len(self.__heap)-1 and self.__heap[right] > self.__heap[child]:
                child=right
            if self.__heap[child] > self.__heap[idx]:
                self.__heap[child],self.__heap[idx] = self.__heap[idx],self.__heap[child]
                self.percolateDown(child)
        
    
