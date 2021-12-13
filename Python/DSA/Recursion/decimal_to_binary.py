def func(n):
    if n == 0:
        return 0
    else:
        return n%2 + 10*func(n//2)

print(func(12))