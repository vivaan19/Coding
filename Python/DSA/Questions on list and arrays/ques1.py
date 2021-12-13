# Q_1::
# data = [[[1, 2], [3, 4]], [[5, 6], [7, 8]]]
# def fun(m):
#     v = m[0][0]  # 1 
#     for row in m:
#         for element in row:
#             if v < element: v = element
 
#     return v
# print(fun(data[0]))

# Q-2 :: find average temprature of n number of days.

inp = int(input("How many number of days?: "))
lst=[]
count=0
for i in range(0, inp):
    temp = float(input("Enter day {} temprature: ".format(i+1)))
    lst.append(temp)

avg = sum(lst)/float(len(lst))
print("Average=",avg)

for i in lst:
    if i > avg:
        count+=1
print("{} day(s) above average".format(count)) 