import sys
input = sys.stdin.readline

inputstring = input().strip()

if(inputstring==inputstring[::-1]):
    print(1)
else:
    print(0)