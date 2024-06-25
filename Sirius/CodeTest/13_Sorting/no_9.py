# 길이 오름차순 
# 길이가 같으면 사전순
import sys
vocabs = sys.stdin.read().splitlines()
vocabs.pop(0)
vocabs.sort(key = lambda x: (len(x), *[x[i] for i in range(len(x))]))
for word in vocabs: print(word)