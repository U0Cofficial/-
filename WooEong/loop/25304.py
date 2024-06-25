import sys
input = sys.stdin.readline

price = int(input())
time = int(input())
cnt = 0
for i in range(time):
    a,b = map(int,input().split())
    cnt += a*b
    
if price==cnt:
    print("Yes")
else:
    print("No")

