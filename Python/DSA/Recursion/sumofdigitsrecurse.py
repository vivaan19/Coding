def func(n):
    assert n>=0 and int(n) == n, "n should be positive and greater than 0"
    if n == 0:
        return 0
    else:
        return n%10 + func(n//10)

n=int(input())
print(func(n))