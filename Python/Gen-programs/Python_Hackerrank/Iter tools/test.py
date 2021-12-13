t=int(input())
for i in range(t):
    n=int(input())
    a = list(map(int,input().split()))
    b = []
    for i in range(1, n+1):
        b.append(i)
    bribe = 0
    for i in range(n-1, 0, -1):
        if b[i] == a[i-1]:
            bribe+=1
        elif b[i] == a[i-2]:
            bribe+=2
    print(bribe)
    


# n=10
# for i in range(n-1, -1, -1):
#     print(i)