from itertools import permutations, combinations

n, r = input().split()
arr = list(map(int,input().split()))
comi = combinations(arr, 3)
# perm = permutations(arr, 3)

count = 0
for i in list(comi):
    if int(i[1]/i[0]) == int(i[2]/ i[1]) == int(r):
        count += 1
print(count)
# print(list(comi))
# print(list(perm))