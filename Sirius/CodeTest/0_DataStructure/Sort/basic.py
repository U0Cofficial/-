def selectSort_recursive(lst,n:int):
    if n>1:
        max=lst[0]
        max_idx=0
        for idx in range(1,n):
            if lst[idx]>=max:
                max_idx=idx
                max=lst[idx]
        lst[n-1],lst[max_idx]=lst[max_idx],lst[n-1]
        selectSort_recursive(lst,n-1)

def bubbleSort_recursive(lst,n:int):
    if n>1:
        for idx in range(n-1):
            if lst[idx]>=lst[idx+1]:
                lst[idx],lst[idx+1]=lst[idx+1],lst[idx]
        bubbleSort_recursive(lst,n-1)

def bubbleSort(lst):
    for length in range(len(lst),1,-1):
        for idx in range(length-1):
            if lst[idx]>=lst[idx+1]:
                lst[idx],lst[idx+1]=lst[idx+1],lst[idx]

def insertionSort(lst):
    for i in range(1,len(lst)):
        loc=i-1
        item=lst[i]
        while loc>=0 and lst[loc]>item:
            lst[loc+1]=lst[loc]
            loc-=1
        lst[loc+1]=item

lst1=[7,5,5,3,35,21,9,23]
# selectSort_recursive(lst1,len(lst1))
# bubbleSort_recursive(lst1,len(lst1))
# bubbleSort(lst1)
# insertionSort(lst1)
print(lst1)