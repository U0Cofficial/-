# import sys
# input = sys.stdin.readline

# price= int(input())

# array = []

# for i in range (price):
#     inputprice = int(input())
#     array.append(inputprice)
    
# loof=int(input())
# print(array.count(loof))

import sys
input = sys.stdin.readline

price= int(input().strip())

array = list(map(int,input().strip().split()))
    
loof = int(input())

print(array.count(loof))

# 배열.count(배열에서 반복되는 횟수를 구하고 싶은 수)
# split() 메서드를 사용하여 공백을 기준으로 나눈 후, 각 값을 정수로 변환
# sys.stdin.readline은 한 줄의 입력을 읽고, 그 끝에 개행 문자를 포함. 따라서 strip() 메서드를 사용하여 개행 문자를 제거하는 것이 좋음
