# // baekjoon
# // 예제 출력 1 
# // 1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
str=input()
list1=[-1 for _ in range(26)]
for ch in str:
    if(list1[ord(ch)-ord('a')]==-1):
        list1[ord(ch)-ord('a')]=str.index(ch)
for i in  list1:
    print(i,end=' ')