import math
a="1010"
b="1011"
la=list(map(int, list(a)))
lb=list(map(int, list(b)))
la = la[::-1]
lb = lb[::-1]
sum_a=0
for i in range(len(la)):        
    sum_a+=pow(2,i)*la[i]

sum_b=0
for i in range(len(lb)):
    sum_b+=pow(2,i)*lb[i]

sum_c = sum_a + sum_b
print("{0:b}".format(int(sum_c)))
