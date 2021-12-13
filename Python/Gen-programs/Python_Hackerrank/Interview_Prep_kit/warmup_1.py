def colour(n, inp):
    s1 = set(inp)
    l1 = list(s1)
    p=0
    for i in l1:
        c=inp.count(i)
        if c%2 == 0:
            c1 = int(c/2)
            p+=c1
        else:
            if (c-1)%2 == 0:
                c2 = int((c-1)/2)
                p+=c2
    return p
n=int(input())
inp = list(map(int,input().split()))
print(colour(n, inp))
