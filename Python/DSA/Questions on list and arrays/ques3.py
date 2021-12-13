# find the maximum product for two ints in an array 

lst=[1, 2, 3, 4, 5, 99, 7, 8, 10, 10]

mul=0
# mul = lst[0]*lst[1]
for i in range(0, len(lst)):
    for j in range(i+1, len(lst)):
        if lst[i]*lst[j] > mul:
            mul = lst[i]*lst[j]
    
print(mul)