import sys
input = sys.stdin.readline

a, b = input().strip().split()

a = a[::-1]  
b = b[::-1]  

print(max(a,b))

#reserve 는 문자열에서 사용할 수 없고 리스트에서 사용 가능
