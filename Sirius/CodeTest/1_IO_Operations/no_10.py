var1=int(input())
var2=int(input())
cnt=0
proc_list=[((var2//10**i)%10)*var1*(10**i) for i in range(3)]
for i,element in enumerate(proc_list):
    print(int(element/(10**i)))

print(sum(proc_list))