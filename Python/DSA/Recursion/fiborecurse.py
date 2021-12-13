# first no. = 0, second no. = 1, third and so on sum of previous 2 number.


def fibo(first, second, n, count):
    if count == n:
        return 
    else:
        count+=1
        result = first+second
        print(result)
        fibo(second, result, n, count)

inp = int(input())
print(0)
print(1)
print(fibo(0,1,inp-2,0))
