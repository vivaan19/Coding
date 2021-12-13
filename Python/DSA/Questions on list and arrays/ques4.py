# Duplicates present in list or not.

lst = [1, 2, 3, 4, 5, 6, 1]
dict ={}

for i in lst:
    if i in dict:
        dict[i]+=1
    else:
        dict[i]=0
print(dict)
for i in dict:
    if dict[i] >= 1:
        print(dict[i],"Is the duplicate element")