# def dynamicArray(n, queries):
#     # Write your code here
#     lastanswer = 0
#     arr = []
#     for i in range(n):
#         arr.append([])
#     answer = []
#     for i in range(len(queries)):

#         if queries[i][0] == 1:
#             ind = (queries[i][1] ^ lastanswer)%n
#             arr[ind].append(queries[i][2])
        
#         if queries[i][0] == 2:

#             ind = (queries[i][1] ^ lastanswer)%n
#             lastanswer = arr[ind][queries[i][2]%len(arr[ind])]
#             answer.append(lastanswer)
    
#     print(answer)

# n,q = map(int, input().rstrip().split())

# queries = []

# for _ in range(q):
#     queries.append(list(map(int, input().rstrip().split())))

# result = dynamicArray(n, queries)



# lst = []
# for i in range(3):
#     lst.append([])

# for i in range(3):
#     lst[0].append(i)
# print(lst)

# lst = [[1,2,3],[4,3,5],[]]
# print(len(lst))

lst=[23, 233, 444, 555]
lst.sort(reverse=True)
print(lst)


