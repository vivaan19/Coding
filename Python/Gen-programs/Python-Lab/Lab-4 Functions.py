'''
# Q-1 GCD of two numbers.
# GCD means greatest common divisor.
def GCD(num1, num2):
	small=num1

	if num2<small:
		small=num2

	for i in range(1, small+1):
		if ((num1%i == 0) and (num2%i == 0)):
			GCD=i

	return GCD

x=int(input("Enter First number:"))
y=int(input("Enter second number:"))

print("GCD =",GCD(x, y))
'''

'''
# Q-2 Square root of a number using newton's method

def squrt(num):
	approx=0.5*num

	better=0.5*(approx+num/approx)

	while better != approx:
		approx=better
		better=.5*(approx+num/approx)

	return approx


n=float(input("Enter number to be squared:"))
print("Square root =",squrt(n))
'''


'''
# Q-3 Convert numeric info into words.

def date(dd, mm):

	if mm == "1":
		mm="January"

	elif mm == "2":
		mm= "Feburary"

	elif mm == "3":
		mm="March"

	elif mm == "4":
		mm="April"

	elif mm == "5":
		mm="May"

	elif mm == "6":
		mm="June"

	elif mm == "7":
		mm="July"

	elif mm == "8":
		mm="August"

	elif mm == "9":
		mm= "September"

	elif mm == "10":
		mm= "October"

	elif mm == "11":
		mm="November"

	elif mm == "12":
		mm = "December"

	else:
		print("Invalid month")

	print("New Formant:"+mm+ " " +dd) 

dd=input("Enter date:")
mm=input("Enter month:")

print("Old Formant:"+dd+"/"+mm)
date(dd, mm)
'''

'''
# Q-4 Program to find the maximum from a list of numbers.

def max_no(n):

	I=[]

	print("Enter elements-")
	for i in range(0, n):
		temp=int(input())
		I.append(temp)

	print("The elements are:",I)

	maxno=I[0]

	for i in range(1, n):
		if I[i] > maxno:
			maxno=I[i]

	print("Max number:",maxno)


num=int(input("Enter How many elements:"))
max_no(num)
'''

'''
# Q-5 Linear Search

def linear_search(num):


	thislist=[]

	print("Now insert the elements-")

	for i in range(0, num):
		temp=int(input())
		thislist.append(temp)
	
	s=int(input("Enter which element to search:"))

	for i in range(0, num):
		if thislist[i] == s:
			return i

n=int(input("How many element:"))
print("Element found at location:",linear_search(n))
'''

'''
# Q-6 Binary Search

def binary(num):
	thislist = []
	print("Enter the elements-")

	for i in range(0, num):
		temp=int(input())
		thislist.append(temp)

	
	thislist.sort()

	print("Sorted list in acending order:",thislist)

	s=int(input("Which element to search:"))

	low=0
	high=len(thislist)-1
	mid=0

	while low <= high:
		mid = (high+low)//2

		if thislist[mid] < s:
			low=mid+1
		elif thislist[mid] > s:
			high = mid-1
		else:
			return mid
	return -1


n=int(input("How many elements:"))
val=binary(n)

if val == -1:
	print("Element not found")
else:
	print("Element found at:",val)
'''


'''
# Q-7 Factorial of a number using recursion
def recur_factorial(n):
   if n == 1:
       return n
   else:
       return n*recur_factorial(n-1)

num = 7

# check if the number is negative
if num < 0:
   print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
   print("The factorial of 0 is 1")
else:
   print("The factorial of", num, "is", recur_factorial(num))
'''