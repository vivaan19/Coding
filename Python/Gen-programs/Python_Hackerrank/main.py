# Q-1
# lst = []
# for i in range(2000, 3201):
#     if i % 7 == 0 and i % 5 != 0:
#         lst.append(i)
# print(lst)

# Q-2
# import math
# a = int(input("Enter a number:"))
# b=math.factorial(a)
# print(b)

# Q-3
# lst = []
# for i in range(0,10):
#     a=int(input("Enter number {}:".format(i+1)))
#     lst.append(a)

# print(lst)
# sum =0
# for i in range(0,10):
#     sum = sum + lst[i]

# print("The sum of numbers is:",sum)

# Q-4
# a = input("Enter a string:")

# for i in range(0,len(a)+1, 2):
#     print(a[i],end = ",")

# Q-5
# a=input("Enter a string:")

# b = a.split(" ")
# print(b)
# count =0
# for i in range(0, len(b)):
#     if b[i] == "Emma":
#         count = count + 1
# print(count)

# for i in range(8, 90, 3):
#     print(i, end=",")

# for i in range(100, 0, -2):
#     print(i, end=",")


# x=int(input())
# y=int(input())
# z=int(input())
# n=int(input())

# lst = []
# lst1 = []
# lst2 = []
# lst3 = []
# lst4 = []


# for i in range(0,x+1):
#     lst.append(i)
#     for j in range(0, y+1):
#         lst1.append(j)
#         for k in range(0, z+1):
#             if i+j+k != n:
#                 lst2.append(k)
#                 lst3 = lst+lst1+lst2
#                 lst4.append(lst3)
#                 lst2.clear()
#         lst1.clear()
#     lst.clear()
# print(lst4)
                


# lst = []
# lst1 = []
# lst2 = []
# lst3 = []

# for i in range(0,2):
#     lst.append(i)
#     for j in range(0,3):
#         lst1.append(j)
#         lst2 = lst+lst1
#         lst3.append(lst2)
#         lst1.clear()
#     lst.clear()
# print(lst3)

# n=int(input())
# for i in range(0,n):
#     lst=int(input()).split 
    

# max_ele = max(lst)
# sec_max = max_ele
# for i in range(1,max_ele+1):
#     sec = sec_max - i;
#     if sec in lst:
#         break

# print(sec)

# print(lst)

# n=int(input())
# a=list(map(int,input().split(" "))) 
# b=max(a)
# temp = b
# while True:
#     temp = temp - 1
#     for i in range(0, len(a)):
#         if temp == a[i]:
#             break
#     if temp == a[i]:
#             break

# print(temp)

# lst = []
# lst1 = []
# lst2 = []
# lst3 = []
# lst4 = []
# lst5 = []
# n=int(input())
# for i in range(n):
#         name = input()
#         lst.append(name)
#         # print(lst)
#         score = float(input())
#         lst1.append(score)
#         # print(lst1)
#         lst3 = lst+lst1
#         lst2.append(lst3)
#         lst.clear()
#         lst1.clear()

# # print(lst2)

# for i in range(0,n):
#     lst4.append(lst2[i][1])
# # print(lst4)


# lst4 = list(dict.fromkeys(lst4))
# lst4.remove(min(lst4))
# min_ele = min(lst4)

# # print(min_ele)

# for i in range(n):
#     if min_ele == lst2[i][1]:
#         lst5.append(lst2[i][0])
# # print(lst5)

# lst5 = sorted(lst5)

# for i in range(0, len(lst5)):
#     print(lst5[i])


# print(lst4)

# dict = {}

# marks = [] # value

# n=int(input())

# for i in range(n):
#     val=list(map(str,input().split(" ")))
#     marks = list(map(int,input().split(" ")))
#     dict[val] = marks
# print(dict)


# if __name__ == '__main__':
#     n = int(input())
#     student_marks = {}
#     for _ in range(n):
#         name, *line = input().split()
#         scores = list(map(float, line))
#         student_marks[name] = scores
#     query_name = input()

#     x = []
#     x=student_marks[query_name]
#     y=(x[0]+x[1]+x[2])/3
#     print('%.2f'%y)

# n=int(input())
# lst =[]
# lst1 = []
# for i in range(n):
#     lst1 = list(map(str,input().split(" ")))
#     if lst1[0] == "insert":
#         i = int(lst1[1])
#         e = int(lst1[2])
#         lst.insert(i,e)
#     elif lst1[0] == "remove":
#         rem = int(lst1[1])
#         lst.remove(rem)
#     elif lst1[0] == "append":
#         ap = int(lst1[1])
#         lst.append(ap)
#     elif lst1[0] == "sort":
#         lst.sort()
#     elif lst1[0] == "pop":
#         lst.pop()
#     elif lst1[0] == "reverse":
#         lst.reverse()
#     elif lst1[0] == "print":
#         print(lst)


# def count_substring(string, sub_string):
#     count =0
#     i=0
#     a=len(string)
#     temp=len(sub_string)

#     while i<=a:
#         b=string[i:temp]
#         if b == sub_string:
#             count = count + 1
#         i = temp -1
#         if i == a-1 or i == a:
#             break
#         temp = temp+i
#         if temp > a:
#             temp = a
#     return count

# if __name__ == '__main__':
#     string = input().strip()
#     sub_string = input().strip()
    
#     count = count_substring(string, sub_string)
#     print(count)


# s=input()

# s = s.replace(" ","")

# for i in range(len(s)):
#     if ((s[i].isalpha()) or (s[i].isdigit())):
#         print("True")
#         break
#     elif i == len(s) - 1:
#         print("False")
#         break

# for i in range(len(s)):
#     if s[i].isalpha():
#         print("True")
#         break
#     elif i == len(s) - 1:
#         print("False")
#         break

# for i in range(len(s)):
#     if s[i].isdigit():
#         print("True")
#         break
#     elif i == len(s) - 1:
#         print("False")
#         break

# for i in range(len(s)):
#     if s[i].islower():
#         print("True")
#         break
#     elif i == len(s) - 1:
#         print("False")
#         break

# for i in range(len(s)):
#     if s[i].isupper():
#         print("True")
#         break
#     elif i == len(s) - 1:
#         print("False")
#         break



# lst=[]
# lst1 = []
# def merge_the_tools(s, k):
#     # your code goes here
#     for i in range(0, len(s), k):
#         b=s[i:i+k]
#         lst.append(b)
#     for i in range(len(lst)):
#         remdup(lst[i])

# def remdup(s):
#     a=list(s)
#     b=list(dict.fromkeys(a))
#     c=""
#     for i in range(len(b)):
#         c=c+b[i]
#     print(c)
    
# string, k = input(), int(input())
# merge_the_tools(string, k)

# a="aaAbbcAcddeAe"
# b=list(a)
# c=list(dict.fromkeys(b))
# d=""
# for i in range(len(c)):
#     d=d+c[i]
# print(d)


# import collections

# numShoes = int(input())
# shoes = collections.Counter(map(int, input().split()))
# numCust = int(input())

# income = 0

# for i in range(numCust):
#     size, price = map(int, input().split())
#     if shoes[size]: 
#         income += price
#         shoes[size] -= 1

# print (income)

#!/bin/python3




# b="sample"
# c="mple"
# count = 0
# for i in range(0, len(b)):
#     d=b[i:i+len(c)]
#     if d == c:
#         count = count + 1
# print(count)


# s="chris ana1n e11"

# r=[]
# r=s.split(" ")
# res = ""
# temp = []
# ori = ""

# for i in range(len(r)):
#     res=res + r[i].capitalize() + " "
    
# for i in range(len(res)-1):
#     ori = ori + res[i]
# print(ori)







    


