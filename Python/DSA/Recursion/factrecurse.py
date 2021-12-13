def factorial(n):
    assert n>=0 and int(n) == n, "Number should be positive integer"  # edge condition 
    if n in [0,1]:  # if n is 0 or n is 1 base condition 
        return 1
    else:
        return n*factorial(n-1)  # recursion case 

print(factorial(0))