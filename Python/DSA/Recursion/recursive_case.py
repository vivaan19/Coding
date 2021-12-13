# example: f(6) = 21 ; 0+1+2+...+6 = 21

def func(n):
    if n==0:
        return 0
    return n+func(n-1)

print(func(11))