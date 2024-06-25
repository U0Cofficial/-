import sys
input = sys.stdin.readline

max_val = 0
a = []
for i in range(9):
    a.append(list(map(int,input().split())))
     
    if max(a[i]) >= max_val:
        max_val = max(a[i])
        max_row = i + 1
        max_col = a[i].index(max_val) + 1

print(max_val)
print(max_row,max_col, sep= ' ')