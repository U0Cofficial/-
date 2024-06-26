import sys
input= sys.stdin.readline

byte = int(input())
loof= int(byte//4)

result=""

for i in range(loof):
    result += str("long ")
    

print(result+"int")



# a/b -> 실수형 나누기
# a//b -> 정수형 나누기