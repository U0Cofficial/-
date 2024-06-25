cro_alpha=["c=",'c-','dz=','d-','lj','nj','s=','z=']

def cro_counter(s:str) ->int:
    cnt=0
    for a in cro_alpha:
        if a in s:
            cnt+=s.count(a)
            s=s.replace(a,'.')
    s=s.replace('.','')
    cnt+=len(s)
    return cnt
            
        
    

cro_str=input()
print(cro_counter(cro_str))
