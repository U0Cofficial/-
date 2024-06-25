import sys
from math import gcd

trees = list(map(int,sys.stdin.read().splitlines()))
trees.pop(0)
for idx in range(1,len(trees)):
    trees[idx - 1] = trees[idx] - trees[idx - 1]
trees.pop(-1)
dist = gcd(*trees); cnt = 0
for d in trees:
    cnt += (d//dist) - 1
print(cnt)

