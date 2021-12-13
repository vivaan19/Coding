# from itertools import groupby
from itertools import groupby

grobj = groupby(input())

for key, gr in grobj:
    print((len(list(gr)), int(key)), end=" ")