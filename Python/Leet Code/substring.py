# print("pwke" in "pwwkew")
ori_str="dvdf"
dict = {}
for i in ori_str:
    if i in dict:
        dict[i]=0
    else:
        dict[i]=0
unique=[]
for i in dict:
    unique.append(i)

unique_str="".join(unique)
print(unique_str)

sub_unique = []

for i in range(len(unique_str)):
    for j in range(i+1, len(unique_str)+1):
        sub_unique.append(unique_str[i:j])
print(sub_unique)
leng = 0
tf = []
for i in sub_unique:
    if i in ori_str:
        if leng < len(i):
            leng=len(i)

print(leng) 