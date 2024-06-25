h,m = map(int,input().split())
re_m= m-45
if (re_m >=0):
    print(h,re_m)
else:
    re_m+=60
    h-=1
    if(h<0):
        print(23,re_m)
    else:
        print(h,re_m)