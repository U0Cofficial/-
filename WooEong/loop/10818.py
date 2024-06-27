import sys
input = sys.stdin.readline

array = []
N = int(input().strip())

inputarray = list(map(int,input().strip().split()))

inputarray = sorted(inputarray)

min= min(inputarray)

max= max(inputarray)


print(min,max)

