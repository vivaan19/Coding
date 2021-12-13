
strs=["dog","racecar","car"]
# strs = ["flower", "flow", "flight"]
# flow , flower, flight 
# print(strs[0][:1])
emp = '""'

res=[]
strs.sort(key=len)
# print(strs)

for i in range(1, len(strs[0])+1):
    let=strs[0][:i]
    check = 0
    for j in range(1, len(strs)):
        if let == strs[j][:i]:
            check+=1
    if check == len(strs)-1:
        res.append(let)
        continue
    else:
        if len(res) == 0:
            print(emp)
        else:
            print(max(res,key=len))
        break
            
            