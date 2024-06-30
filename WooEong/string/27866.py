import sys
input = sys.stdin.readline

Number = input().strip()

Sequence = int(input().strip())


result = Number[Sequence -1]

print(result)


#문자열이 공백없이 주어질때는 split x