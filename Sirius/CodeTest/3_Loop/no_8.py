import sys
n_time=int(sys.stdin.readline().rstrip())
start_num=1
star_num=1
while(start_num<=n_time):
    while(star_num<=start_num):
        print("*",end='')
        star_num+=1
    print()
    start_num+=1
    star_num=1