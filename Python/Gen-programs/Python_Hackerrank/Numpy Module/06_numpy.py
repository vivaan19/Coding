import numpy as np
np.set_printoptions(legacy='1.13')

# Polymomials 
# inp=input().rstrip().split()
# x = float(input())
# narr = np.array(inp, dtype='f')
# returns the polynomial value at specific point x. 
# print("{:.1f}".format(np.polyval(narr, x)))

# Floor, Ceil and Rint

# n=input().rstrip().split()
# narr = np.array(n, dtype='f')
# print(np.floor(narr))
# print(np.ceil(narr))
# print(np.rint(narr))

# Mean, variance, standard deviation
n,m = map(int,input().rstrip().split())
# print(n)
# print(m)

main_array = np.array([input().split() for _ in range(n)], int)

print(str(np.mean(main_array, axis=1)).lstrip())
print(str(np.var(main_array, axis=0)).lstrip())
print(str(np.std(main_array, axis=None)).lstrip())
