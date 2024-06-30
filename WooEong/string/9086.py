import sys
input = sys.stdin.readline

number = int(input())

for i in range (number):
    listinput = input().strip()
    a = listinput[0]
    b = listinput[-1]
    print(a,b, sep="")


# sep='' : 공백없애기