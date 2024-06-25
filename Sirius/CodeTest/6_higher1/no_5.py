str1=input()
str2=str1.upper()
dc={ch:0 for ch in str2}
for item in str2:
    dc[item]+=1
max=0
max_ch=''
for ch,cnt in dc.items():
    if cnt > max:
        max=cnt
        max_ch=ch
    elif cnt == max:
        max_ch='?'
print(max_ch)