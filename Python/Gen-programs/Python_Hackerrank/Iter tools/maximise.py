k, m = input().split()

lst = [input().split() for i in range(int(k))]
lst1 = []

for i in lst:
    i=list(map(int, i))
    lst1.append(i)

lst2 = []

for i in lst1:
    large = 0
    for x in i:
        if (x*x)%int(m) > large:
            large = (x*x)%int(m)
            val = x
    lst2.append(val)
print(lst2)
sum = 0
for i in lst2:
    sum = sum + (i*i)

print(sum%(int(m)))