import sys
input = sys.stdin.readline
n = input()
l = list(map(int, input().split()))
s = sorted(list(set(l)))
dc = {s[i]:i for i in range(len(s))}
for i in l:
    print(dc[i],end = ' ')