# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
n,m = list(map(int,input().split()))

a = defaultdict(list)
b = defaultdict(list)

for i in range(1,n+1):
    a[i]=[input()]
for i in range(1,m+1):
    b[i]=[input()]
# print(dict1)
# print(dict)

for i in b.keys():
    
    if b[i] in a.values():
        for j in a.keys():
            if b[i][0] == a[j][0]:
                print(j, end=' ')
        print()
    else:
        print("-1")
        

# for i in dict1.keys():
#     if dict1[i] in dict.values():
#         for k in dict1.keys():
#             for j in dict.keys():
#                 if dict1[k] == dict[j]:
#                     print(j, end=" ")
#             print("\n")
    
#     else:
#         print("-1")


# dict_ = {1:['1'], 2:['2'], 3:['3'], 4:['4']}
# dict1 = {4:['4'], 9:['6']}
# for i in dict1.keys():
#     if dict1[i][0] in dict_:
#         print("yes")
#     else:
#         print("no")


