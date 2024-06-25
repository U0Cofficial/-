h,m= map(int, input().split())
recipe = int(input())
re_m=m+recipe
if(re_m<60):
    print(h,re_m)
else:
    ad_h=re_m//60
    re_m%=60
    h+=ad_h
    if(h>=24): h-=24
    print(h,re_m)