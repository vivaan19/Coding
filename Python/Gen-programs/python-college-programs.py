'''
 # Q-1
for x in range(2000,3201):
 if x%7 == 0 and x%5 != 0:
 	print(x,end=', ')
 #The End keyword allows to print in single line and if ', ' is done then it will print with commas seperated.
'''
'''
# Q-2 
n=int(input("Enter a number: "))
fact=1
if n<0:
	print("Not for negetive numbers")
elif n==0:
	print("Factorial of 0 is 1")
else:
	for i in range(1,n+1):
		fact=fact*i
	print("The factorial of",n,"is",fact)
'''
'''
# Q-3
sum=0
for i in range(0,10):
	sum=sum+i
avg=sum/10
print(sum)
print(avg)

'''
'''
# Q-4
a="pynative"
len = len(a)
div=len/2
for i in range(0,int(div)):
	print(a[2*i], end=",")
'''

'''
# Q-5: 
x="Emma is a good developer.Emma is a good writer"
y="Emma"
count=0
for i in range(0,2): 
	if y in x:
		count+=1

print(count)
'''

'''
# Q-6
a=float(512-282)
b=47.48+5
c=a/b
print(c)
'''
'''
# Q-7
n=int(input("Enter a number: "))

square = n*n

print(square)
'''
'''

# Q-8
a= int(input("Enter first number: "))
b= int(input("Enter second number: "))
c= int(input("Enter third number: "))

sum = (a+b+c)
avg = float(sum/3)

print(sum)
print(avg)
'''
'''
# Q-9
for i in range(8,90,3): #here 3 is incremented in 8 so at last 89 will print
	print(i, end=', ')
'''	
'''
# Q-10
for i in range(100,0,-2): #here 2 is decremented till 0 i.e 2 will be last
	print(i, end=', ')
'''
'''
# Q-12
import random 
n=random.randrange(1,11)
print(n)
for i in range(0,n):
	print("Vivaan",end=', ')
'''

'''
# Q-11
import random
for i in range(0,50):
	n=random.randrange(3,7)
	print(n)
'''

'''
Q-13
n=float(input("Enter length in centimeters: "))
if n<0:
	print("Invalid length (cannot be negetive)")
else:
	x = n/2.54
	print("Length in inches: " ,x)
'''
'''
# Q-14 program for finding leap year.
n=int(input("Enter a year: "))

if n%100 == 0:
	if n%400==0:
		print("Is a leap year")
	else:
		print("Is not a leap year")
elif n%4==0:
	print("Is a leap year")
else:
	print("Is not a leap year")
'''


'''
# Q-16
n=str(input("Enter a string containing letter 'a': "))

len=len(n)

for i in range(0,len):
	if n[i] == 'a':
		c=i
		print(n[0:c+1])
		print(n[c+1:len])
'''
'''
# Q-17
a=str(input("Enter first string: "))
b=str(input("Enter second string: "))

c=len(a)
d=len(b)

if c != d:
	print("Program runs only for equal length of string")
else:
	for i in range(0,c):
		print(a[i]+b[i],end='')
'''
'''
# Q-15
n=str(input("Enter a string: "))

len=len(n)

print("Total Number of charaters: " ,len) # a. Total Char in string

for i in range(0,10): # string repeted 10 times
	print(n)

print("First charater of a string: " +n[0])

print("First three charaters: " +n[0:3])

print("Last three charaters: " +n[-3:])

txt = n [::-1]
print("Backward string is: " +txt)

if len>=7:
	print("Seventh charater of string: " +n[6])
else:
	 print("String has length smaller than 7")

print("Last and first charater removed: " +n[1:len-1])

print("String in all upper case: " +n.upper())

print("String with every 'a' replaced with 'e': " +n.replace("a","e"))

new = n
for i in range(0,len):
	new=new.replace(n[i],"_")
print("replaced string with space is: " +new)
'''







