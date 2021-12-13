# Py program to demostrate the use of object can be used for function as well.

class MyClass():
	def __init__(self, brand, price):
		self.brand = brand
		self.price = price

	def DisplayBrand(self):
		print("The brand of Laptop is "+obj.brand) # We can do either obj.brand or self.brand.

obj = MyClass("DELL", 650000)

obj.DisplayBrand() # This is the function calling through class object 

