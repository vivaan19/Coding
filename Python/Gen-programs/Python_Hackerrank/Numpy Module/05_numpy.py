import numpy as np

# np.set_printoptions(legacy='1.13')
# inp = tuple(map(int,input().split()))
# print(np.zeros(inp))
# print(np.ones(inp))

# n, m = map(int,input().split())
# print(np.identity(3))
# print(np.eye(n,m))

n, m = map(int,input().split())
a = np.array([input().split() for _ in range(n)],int)
print(a)
b = np.array([input().split() for _ in range(n)],int)
print(b)
print(a+b)
print(a-b)
print(a*b)
print(a//b)
print(a%b)
print(a**b)

# ***IMP****** ------
# a = (5/4 % 1) # to only print decimal part of a number we have to do modulous 1. 
# print(a) # will print 0.25 






