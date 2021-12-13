from collections import deque
t=int(input())

d=deque()
for _ in range(t):
    n=int(input())
    
    d.append(list(map(int,input().split())))

    lpop = d[0].popleft()
    rpop = d[0].pop()
    if lpop <= rpop:
        l1pop = d[0].popleft()
        r1pop = d[0].pop()
        if rpop <= r1pop:
            print("no")
        else:
            print("yes")
    else:
        print("no")


# print(d[0])