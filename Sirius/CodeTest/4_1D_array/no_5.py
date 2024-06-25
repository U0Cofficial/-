'''// 5 4
// 1 2 3
// 3 4 4
// 1 4 1
// 2 2 2

// 1 2 1 1 0'''
lst=[]
idx,loop_time=map(int,input().split())
lst=[0 for _ in range(idx)]
while(loop_time>0):
    start_idx,end_idx,ball_num = map(int,input().split())
    lst[start_idx-1:end_idx] =[ball_num for _ in range(end_idx-start_idx+1)]
    loop_time-=1
for i in range(idx):
    print(lst[i],end=' ')