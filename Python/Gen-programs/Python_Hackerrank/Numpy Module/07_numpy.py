import numpy as np
# Cross and dot product
n=int(input())

a=np.array([input().split() for _ in range(n)], int)
# print(a)
b=np.array([input().split() for _ in range(n)], int)

print(np.dot(a, b))
