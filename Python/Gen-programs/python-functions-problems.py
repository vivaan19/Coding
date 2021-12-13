'''
# Program - 1 : To find the GCD of two numbers.
def GCD(x, y):
		

	small = x

	if y < small:
		small = y
	for i in range(1, small+1):
		if ((x % i == 0) and (y % i == 0)):
			gcd = i

	return gcd		

	
x1 = int(input("Enter first number: "))
y1 = int(input("Enter second number: "))

print("Greatest Common Divisor is: ",GCD(x1, y1))
'''



'''
# Program - 2 : Find a squart root of a number using newton's method

def squrt(n, approx, better):

	

	while better != approx:
		approx = better
		better = 0.5 * (approx + n/approx)

	print("Square root is ", approx)

n1 = int(input("Enter number: "))

approx1 = 0.5*n1

better1 = 0.5*(approx1 + n1/ approx1)

squrt(n1, approx1, better1)
'''


'''
# program-3 :input -2/14 output Feburary 14.

def cal(m, d):
	

	print("Your Format:",m,"/",d)

	if m == '1':
		val = "January"
	elif m == '2':
		val = "Feburary"
	elif m == '3':
		val = "March"
	elif m == '4':
		val = "April"
	elif m == '5':
		val = "May"
	elif m == '6':
		val = "June"
	elif m == '7':
		val = "July"
	elif m == '8':
		val = "August"
	elif m == '9':
		val = "September"
	elif m == '10':
		val = "October"
	elif m == '11':
		val = "November"
	elif m == '12':
		val = "December"
	else:
		print("Month exceeds 12")


	print("Your new format is:"+val+" "+d)

m1 = input("Enter your month in number:")
d1 = input("Enter date: ")					

cal(m1, d1)
'''
'''
# Program - 4: 
def list(n,l):

	for i in range(0,n):
		temp = int(input("Enter Element: "))

		l.append(temp)

	print("Your List is :-")
	print(l)

	print("MAX value: ", max(l))

	print("MIN value: ",min(l))

n = int(input("Enter the size of list: "))
l=[]

list(n, l)
'''
'''
# Program-5: Linear Search

def linearSearch(n, l):
	for i in range(0, n):
		temp = input("Enter element: ")
		l.append(temp)

	print("Your List :-")

	print(l)

	ser = input("Which element to search: ")

	for i in range(0, len(l)):
		if l[i] == ser:
		    print("The postion of element is at: ", i)

	print("Such element does not exist")

n = int(input("Enter the size of list: "))
l = []

linearSearch(n, l)

'''

# Program-6: Binary search

def binary(n, l):

	for i in range(0, n):

		temp = int(input("Enter element: "))
		l.append(temp)

   
   l1 = sorted(l)
 print("sorted List:")
 print(l1)

 	ser = int(input("Which item to search: "))

 	low = 0
 	high = len(l1) - 1

 	mid = int((low+high)/2)

 	while l1[mid] != ser:

		if l1[mid] > ser:
			high = mid-1

		else:
			low = mid + 1

	mid = int((low + high)/ 2)

 	print("The position of element is ",mid)

n = int(input("Enter the size  of list: "))
l = []
binary(n ,l)












