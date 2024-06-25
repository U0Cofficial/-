import sys
from math import sqrt
def is_prime(i:int)->bool:
    for f in range(11,int(sqrt(i))+1,2):
        if i%f == 0: return False
    return True

input = sys.stdin.readline
m, n = map(int, input().split())


for c in range(m,n+1):
    if c == 1: continue
    if c%2 == 0 or c%3 == 0 or c%5 == 0 or c%7 == 0:
        if c ==2 or c == 3 or c == 5 or c == 7: sys.stdout.write(str(c)+'\n')
        continue
    if is_prime(c): sys.stdout.write(str(c)+'\n')
