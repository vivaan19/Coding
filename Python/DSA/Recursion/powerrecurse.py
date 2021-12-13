# exponent will be greater than 0 and have to be int number
def func(n,p):
    assert p>=0 and int(p) == p, "exponent will be will integer greater than 0"
    if p == 0:
        return 1
    else:
        return n * func(n,p-1)
    

n=float(input())
p=int(input())
print(func(n,p))