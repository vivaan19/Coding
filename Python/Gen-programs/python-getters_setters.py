#program to show use of normal get(), set() functions.

class myClass():
	def __init__(self, age=0):
		self._age=age

	#getter method
	def get_age(self):
		return self._age

	#setter method
	def set_age(self, x):
		self._age=x

ram=myClass()

ram.set_age(22) #setting the self._age using para x.

print(ram.get_age())  #function calling through object.

print(ram._age)
