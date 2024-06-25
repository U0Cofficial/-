# import sys
# from collections import deque
# input = sys.stdin.readline
# q = deque(); tempq = deque()
# n, k = map(int, input().split())

# for i in range(1,n+1): q.append(i)

# if k == 1:
#     print('<',end = '')
#     for i in range(1,n): print(f"{i}, ",end ='')
#     print(f"{n}>")
#     exit(0)

# turn = 1
# sys.stdout.write('<')
# while len(q) > 0:
#     if len(q) == 1 and len(tempq) == 0: sys.stdout.write(str(q.popleft())+'>'); break
#     if turn == k:
#         sys.stdout.write(str(q.popleft())+', ')
#         if len(q) == 0: q,tempq= tempq,q
#         turn = 1; continue
#     tempq.append(q.popleft())
#     if len(q) == 0: q,tempq = tempq,q
#     turn+=1
import torch

print(torch.__version__)
device = 'cuda' if torch.cuda.is_available() else 'cpu'
print(device)