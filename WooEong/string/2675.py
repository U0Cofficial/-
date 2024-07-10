import sys
input = sys.stdin.readline

n = int(input().strip())
results = []
for _ in range(n):
    intinput, stringinput = input().strip().split()
    intinput = int(intinput)
    result=''.join([char * intinput for char in stringinput ])
    results.append(result)
    # for i in range(n):
    #     result=''.join([char * intinput for char in stringinput ])
    #     print(result)
for result in results:
    print(result)
