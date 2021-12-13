'''
# Function number of arguments.

def my_function(fname, lastname):
	print(fname + " " + lastname)
	

my_function("Vivaan", "Shiromani")
my_function("Ashish", "Shiromani")
'''

'''
# If we dont know function arguments then add a * in arguments this is called arbitary arguments.
# this will create a tuple of parameters and we can access it with its index.

def my_function(*kids):
	print("The name of kid is " +kids[2])

my_function("Ram", "Mohan", "Shyam")
'''

'''
# Keyword arguments- We can access the arguments with key = value pair.

def viv_function(sub1, sub2, sub3):
	print("The main subject is " +sub2)

# Here key name is sub1, sub2, sub3 with maths, physics, chemistry associated with it resp.
viv_function(sub1="Maths", sub2="Physics", sub3="Chemistry") 
'''

'''
# If you dont the number of arguments in key value pair then add ** before the params name.
# This is arbitary keyword arguments

def viv_function(**sub):
	print("My main subject is " +sub["sub2"])

viv_function(sub1="Maths", sub2="Physics")
'''

# Deaufault parameters value.


