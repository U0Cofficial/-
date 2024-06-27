import sys
input = sys.stdin.readline

inputarray=[]

for i in range (9):
    inputlist=int(input().strip())
    if inputlist<100:
        inputarray.append(inputlist)

result = max(inputarray)

print(result)
print(inputarray.index(result)+1)

# a의 b 배열 내의 순서: b.index(a)
# index : 0~