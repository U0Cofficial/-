from listNode import ListNode

class LinkedListBasic:
    def __init__(self):
        self.__head = ListNode('dummy',None)
        self.__numItems=0
    
    def isEmpty(self) -> bool:
        return self.__numItems == 0
    
    def size(self) -> int:
        return self.__numItems
    
    def clear(self):
        self.__head=ListNode('dummy',None)
        self.__numItems=0
        return

    def get(self,i:int):
        if self.isEmpty():
            return None
        if i>=0 and i<=self.__numItems-1:
            return self.__getNode(i).item
        else: return None

    def remove(self,x):
        prev, curr = self.__findNode(x)
        if curr!=None:
            prev.next=curr.next
            self.__numItems-=1
            return x
        else: return None

    def __findNode(self,x) -> (ListNode,ListNode):
        prev=self.__head
        curr=prev.next
        while(curr!=None):
            if(curr.item == x):
                return (prev,curr)
            else:
                prev=curr; curr=curr.next
        return (None , None)

    def __getNode(self,i:int) -> ListNode:
        curr=self.__head
        for _ in range(i+1):
            curr=curr.next
        return curr    
            
    def insert(self,item,i:int):
        if i>=0 and i<=self.__numItems:
            prev=self.__getNode(i-1)
            newNode=ListNode(item,prev.next)
            prev.next=newNode
            self.__numItems+=1
        else: print(f"List index {i} is out of range")
    
    def append(self,item):
        curr=self.__getNode(self.__numItems-1)
        newNode=ListNode(item,curr.next)
        curr.next=newNode
        self.__numItems+=1
    
    def pop(self,i:int):
        if i>=0 and i<=self.__numItems -1:
            prev=self.__getNode(i-1)
            curr=prev.next
            prev.next=curr.next
            resItem=curr.item
            self.__numItems-=1
            return resItem
        else: print(f"list idx{i},out of range")
    
    def index(self,x) -> int:
        curr=self.__head
        for i in range(self.__numItems):
            curr=curr.next
            if  curr.item==x:
                return i
        print(f"List doesn't has item {x}")
        return -2
    
    def count(self,x) -> int:
        curr=self.__head.next
        cnt=0
        for _ in range(self.__numItems):
            if curr.item==x:
                cnt+=1
            curr=curr.next
        return cnt
    
    def extend(self,a):
        for idx in range(a.size()):
            self.append(a.get(idx))
        # self.__numItems+=a.size()

    def copy(self):
        a=LinkedListBasic()
        for idx in range(self.size()):
            a.append(self.get(idx))
        return a
    
    def reverse(self):
        r=LinkedListBasic()
        for idx in range(self.__numItems):
            r.insert(self.get(idx),0)
        self.clear()
        for idx in range(r.size()):
            self.append(r.get(idx))
        
    def sort(self):
        s_list=list()
        for idx in range(self.size()):
            s_list.append(self.get(idx))
        s_list.sort()
        self.clear()
        for s_item in s_list:
            self.append(s_item)

    def printList(self):
        curr=self.__head.next
        while(curr!=None):
            print(curr.item,end=' ')
            curr=curr.next
        print()

    