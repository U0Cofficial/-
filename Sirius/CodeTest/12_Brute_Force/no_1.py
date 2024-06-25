import sys
input = sys.stdin.readline

n,m = map(int,input().split())
nums = []
nums = list(map(int,input().split())) 
nums.sort()

nearest = sum(nums[:3])
if nearest == m:
    print(nearest)
    exit(0)

for i in range(len(nums)-2):
    for j in range(i+1,len(nums)-1):
        for k in range(j+1,len(nums)):
            if (nums[i] + nums[j] + nums[k]) == m:
                print((nums[i] + nums[j] + nums[k]))
                exit(0)
            if (nums[i] + nums[j] + nums[k]) > m:
                break
            if (nums[i] + nums[j] + nums[k]) >= nearest and  (nums[i] + nums[j] + nums[k]) <= m:
                nearest = ((nums[i] + nums[j] + nums[k]))
            

print(nearest)