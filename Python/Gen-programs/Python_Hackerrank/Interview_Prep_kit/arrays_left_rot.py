from collections import deque


def leftrot(inp, d):
    de=deque(inp)
    # print(de)
    de.rotate(-d)
    return list(de)
n, d=map(int, input().split())
# n= no. of elements, d= how many left rotations
inp = list(map(int, input().split()))
# print(inp)

val = leftrot(inp, d)
print(val)