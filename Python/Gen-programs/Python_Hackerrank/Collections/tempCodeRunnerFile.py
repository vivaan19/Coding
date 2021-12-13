from collections import namedtuple

n=int(input())
lst = input().strip().split()
# print(lst)
student = namedtuple('student', lst)

obj = student([input() for _ in range(n)], [input() for _ in range(n)], [input() for _ in range(n)], [input() for _ in range(n)])

new_lst = list(map(int, obj.MARKS))
print("{:.2f}".format(sum(new_lst)/len(new_lst)))