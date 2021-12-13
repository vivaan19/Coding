# # Enter your code here. Read input from STDIN. Print output to STDOUT
# n = int(input())

# ninp = list(map(int,input().split()))

# nset = set(ninp)

# m = int(input())

# minp = list(map(int,input().split()))

# mset = set(minp)

# insec = nset.intersection(mset)

# uni = nset.union(mset)

# uni.difference_update(insec)

# for i in uni:
#     print(i)

# -->

# inp = input().rstrip()
# n, m = inp.split()
# print(n)
# print(m)

# lst = [1, 2, 2, 3, 4, 5, 5, 6, 6, 5, 7]
# s = set(lst)

# lst = list(s)

# print(lst)

# inp = set(map(int,input().split()))
# print(inp)


# lst = [1, 2, 2, 3, 4, 5,3, 4, 5, 8, 1]
# lst.sort()
# print(lst)
# s = set(lst)
# print(s)
# ls = list(s)
# for i in ls:
#     c = lst.count(i)
#     if c == 1:
#         print(i)



# s1 = set()
# s2 = set()

# for i in lst:
#     if i in s1:
#         s2.add(i)
#     else:
#         s1.add(i)

# print(s1)
# print(s2)
# print(s1.difference(s2))
# print(ls)

n,m = list(map(int,input().split()))




