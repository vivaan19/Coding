'''
def my_func(n):
	return lambda a:a-n  # This is a anon fuction.

var1=my_func(4)  # Here the value of n will be 4 when called.
var2=var1(5) # here the value of a will be 5 when called.

print(var2)  # Prining the var2.
'''

'''
def my_func(*n): # Use of arbitary argument same with keyword and arbitary keywords
	return lambda a,b: a+b-n[1]  
	# 5+6-2=9

var1=my_func(1, 2, 3)
var2=var1(5,6)

print(var2) # var2=9
'''

'''
def my_func(n):
	return lambda a: a-n

var1=my_func(2)
print(var1(1))  # 1-2=-1

var2=my_func(3)
print(var2(5)) # 5-3=2
'''
for x in range(3, 19, 2):  
	print(x)








