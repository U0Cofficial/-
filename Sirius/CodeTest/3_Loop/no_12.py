import sys
# input=sys.stdin.readlines
# str1=input()
# for i in str1:
#     a,b=map(int,i.split())
#     print(a+b)
while(True):
    str=sys.stdin.readline()
    try:
        a,b=map(int,str.split())
        print(a+b)
    except:
        break