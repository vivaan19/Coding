n=int(input())
inp = list(map(int,input().split()))
# print(inp)

jump=0
initial = 0

while len(inp)-1 != initial:
    if ((inp[initial+1] == 1) and (inp[initial+2] == 0)):
        initial+=2
        jump+=1
    
    elif ((inp[initial+1] == 0) and (initial == len(inp)-2)):
        initial+=1
        jump +=1

    elif ((inp[initial+1] == 0) and (inp[initial+2] == 0)):
        initial+=2
        jump+=1

    elif ((inp[initial+1] == 0) and (inp[initial+2] == 1)):
        initial+=1
        jump+=1

print(jump)
