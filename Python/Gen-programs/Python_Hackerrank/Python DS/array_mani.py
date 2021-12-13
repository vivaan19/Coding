# def arrayManipulation(n, queries):
#     arr = []
#     for _ in range(n):
#         arr.append(0)
#     add = 0
#     old_b = 0
#     for i in range(len(queries)):
#         a=queries[i][0]
#         b=queries[i][1]
#         k=queries[i][2]
#         add = add + k
#         if old_b >= a:
#             for j in range(a, old_b):
#                 arr.insert(j, add)
#             for j in range(old_b, b+1):
#                 arr.insert(j, k)
#         else:
#             for j in range(a, b+1):
#                 arr.insert(j, add)
        
#         # old_a = a
#         old_b = b
    
#     # print(arr)

#     return max(arr)

def arrayManipulation(n, queries):
    arr = [0]*n
    add = 0
    old_b=0
    for i in range(len(queries)):
        a=queries[i][0]
        b=queries[i][1]
        k=queries[i][2]
        if old_b > a:
            for j in range(a, old_b):
                arr.insert(j,k+add)
            print(arr)
        else:
            for j in range(a,b+1):
                arr.insert(j,k)
            print(arr)
        add = k
        old_b = b
    return max(arr)


n,q = map(int, input().strip().split())
queries = []
for _ in range(q):
    queries.append(list(map(int, input().rstrip().split())))

result = arrayManipulation(n, queries)
print(result)

# arr = []
# for _ in range(10):
#     arr.append(0)

# for j in range(2, 5):
#     arr.insert(j,3)
# print(arr)