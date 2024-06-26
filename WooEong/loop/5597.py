import sys
input = sys.stdin.readline

inputset = set()

for i in range (28):
    inputint=int(input().strip())
    inputset.add(inputint)
    

allset = set(range(1, 31))


missing = allset - inputset

for number in sorted(missing):
    print(number)



# 집합: 중복 허용 x