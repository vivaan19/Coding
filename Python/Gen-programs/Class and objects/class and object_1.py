'''
# Basic code for class and object using __init__() function.

class laptop():
	def __init__(self, brand, price):
		self.brand = brand
		self.price = price

obj = laptop("DELL", 60000)

print("The brand of laptop is "+obj.brand)
print("The price of laptop is",obj.price)
'''

class dummy():
	x=1
	y=2

def my_func(x, y):
	print("New value of x=",x+2)
	print("New value of y=",y+2)

obj=dummy()
e=obj.my_func(obj.x, obj.y)
print(e)
