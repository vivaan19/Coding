v=100
x=abs(v)
lst=[]
while x != 0:
    rem= x % 10
    lst.append(rem)
    x=x//10
for i in lst:
    if i == 0:
        lst.remove(i)

if v == 0:
    print(0)
if v<0:
    ls="".join(map(str, lst))
    ls=int(ls)-2*int(ls)
    print(ls)
if v < -2 ** 31 or v > 2**31-1:
    print(0)
else:
    ls="".join(map(str, lst))
    print(int(ls))