'''3
29
38
12
57
74
40
85
61
예제 출력 1 
85
8'''
lst=[]
for i in range(9):
    lst.append(int(input()))
print(max(lst),lst.index(max(lst))+1)