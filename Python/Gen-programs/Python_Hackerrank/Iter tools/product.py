from itertools import product

a=list(map(int, input().split()))
b=list(map(int, input().split()))

proud = product(a, b)

lst = list(proud)
lst = sorted(lst, key=lambda x: x[0])

for i in lst:
    print(i, end=" ")