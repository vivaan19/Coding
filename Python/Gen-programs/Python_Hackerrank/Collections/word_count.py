from collections import Counter
n=int(input())

lst = [input() for _ in range(n)]
c = Counter(lst)
lst1=list(c.values())
# print(lst)
lst1 = list(map(str, lst1))
s1 = set(lst)
print(len(s1))

print(" ".join(lst1))

