from itertools import permutations

s, k = input().split()

lst = list(s)
lst = sorted(lst)

s = "".join(lst)

perm  = permutations(s, int(k))

for i in list(perm):
    print("".join(i))

# Permutations are emitted in lexicographic sorted order. 
# So, if the input iterable is sorted, the Permutations tuples will be produced in sorted order.




    