n=int(input())

my_dict = {}

for _ in range(n):
    inp = input().split()
    # print(inp)
    key = " ".join(inp[0:len(inp)-1])
    # print(key)
    val = int(inp[len(inp)-1])
    # print(val)
    if key not in my_dict:
        my_dict[key] = val
    else:
        my_dict[key] = my_dict[key] + val

# print("-------------------------")
for key, val in my_dict.items():
    print(key+" " +str(val))