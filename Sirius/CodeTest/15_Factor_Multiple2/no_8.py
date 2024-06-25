import sys
primes = [False]*2 + [True] * 999999
for i in range(len(primes)):
    if primes[i]:
        k = 2
        while(i*k < 1000001):
            primes[i*k] = False
            k+=1
inputs = list(map(int,sys.stdin.read().splitlines()))
inputs.pop(0)
for i in inputs:
    cnt = 0
    for candi in range(2,i//2 + 1):
        if primes[candi]:
            if primes[i-candi]: cnt+=1
    print(cnt)