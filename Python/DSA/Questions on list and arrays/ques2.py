# a = [1,1,1,2,2,3,3,4,1,2,9,8]
# lst = []
# count=0
# for i in range(len(a)):
#     if a[i] not in lst:
#         lst.append(a[i])
# print(lst)

# ----------------------------------------------

# find a missing number in a list. 

n=int(input("How many integers: "))

sum_n=(n*(n+1))/2

lst=[1,3,4,5]

sum_lst=sum(lst)
# print(sum_lst)

print("Missing Integer: ", int(sum_n-sum_lst))