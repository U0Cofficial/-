import sys
input=sys.stdin.readline        # sys.stdio.readline() 은 입력에 promtp string 출력이 포함되어있지도 않고, \n제거 과정이 없기에 input()보다 입력속도가 빠르다
t_num=int(input())
for i in range(t_num):
    a,b=map(int,input().split())
    print(a+b)