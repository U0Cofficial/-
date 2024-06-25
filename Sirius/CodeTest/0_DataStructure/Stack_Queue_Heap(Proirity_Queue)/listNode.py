
# class ListNode:
# 	def __init__(self, newItem, nextNode:'ListNode'):
# 		self.item = newItem
# 		self.next = nextNode

# 코드 5-1

class ListNode:
    def __init__(self,newItem,newNode:'ListNode'):
        self.item=newItem
        self.next=newNode