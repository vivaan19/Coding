import numpy as np

# a = input().strip().split(" ")
# for i in range(len(a)):
#     a[i] = int(a[i])
# nparr = np.array(a)
# print(np.reshape(nparr,(2,3)))
# first arg is of numpy array name and second arg is of total rows and second is of columns. 


# import numpy as np

# inputs = list(map(int,input().split()))
# n = inputs[0]
# m = inputs[1]
# p = inputs[2]
# inp = []
# inp1 = []
# for i in range(n):
#     inp.append(list(map(int,input().split())))

# arinp = np.array(inp)
# # print(arinp)

# for i in range(m):
#     inp1.append(list(map(int,input().split())))
# arinp1 = np.array(inp1)
# # print(arinp1)
# print(np.concatenate((arinp, arinp1)))

# fast and alternate solution (very imp ****)

# import numpy as np
# a, b, c = map(int,input().split())
# arrA = np.array([input().split() for _ in range(a)],int)
# arrB = np.array([input().split() for _ in range(b)],int)
# print(np.concatenate((arrA, arrB), axis = 0))
    


