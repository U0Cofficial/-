import sys
input = sys.stdin.readline

ele = input().strip()

alphabet = 'abcdefghijklmnopqrstuvwxyz'

result = []

for letter in (alphabet):
    if letter in ele:
        result.append(ele.index(letter))
    else:
        result.append(-1)


print(' '.join(map(str,result)))

#range는 정수 범위를 생성하기 위한 함수