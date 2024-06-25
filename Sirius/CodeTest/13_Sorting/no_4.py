import sys
n = int(sys.stdin.readline())
seq = [int(sys.stdin.readline()) for _ in range(n)]


def mergeSort(start:int,end:int,seq:list):
    if end > start:
        mid = (start + end) // 2
        mergeSort(start,mid,seq)
        mergeSort(mid+1,end,seq)
        merge(start,mid,end,seq) 

def merge(start:int,mid:int,end:int,seq:list):
    left = seq[start:mid+1]; right = seq[mid+1:end+1]
    i=0; j=0; temp = []
    while i < len(left) and j < len(right):
        if left[i] > right[j]: 
            temp.append(right[j]); j+=1
        else: 
            temp.append(left[i]); i+=1
        
    if i!=len(left): temp.extend(left[i:])
    else: temp.extend(right[j:])
    seq[start:end+1] = temp


mergeSort(0,len(seq)-1,seq)
sys.stdout.write('\n'.join(map(str,seq))+'\n')