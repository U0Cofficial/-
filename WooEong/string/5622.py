import sys
input = sys.stdin.readline


a1 = ['A','B','C']
a2 = ['D', 'E', 'F']
a3 =  ['G', 'H', 'I']
a4 = ['J', 'K', 'L']
a5 = ['P', 'Q', 'R', 'S']
a6 = ['T', 'U', 'V']
a7 = ['W', 'X', 'Y', 'Z']


inputstring = input().strip()
countlist = []


for char in inputstring:
    if char in a1:
        countlist.append(3)
    if char in a2:
        countlist.append(4)
    if char in a3:
        countlist.append(5) 
    if char in a4:
        countlist.append(6)
    if char in a5:
        countlist.append(7)
    if char in a6:
        countlist.append(8)
    if char in a7:
        countlist.append(9) 


print(sum(countlist))

