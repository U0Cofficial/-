# 2
# 3 ABC
# 5 /HTP
# 예제 출력 1 
# AAABBBCCC
# /////HHHHHTTTTTPPPPP
test_case=int(input())
for _ in range(test_case):
    a,b=input().split()
    for s in b:
        print(s*int(a),end='')
    print()
    