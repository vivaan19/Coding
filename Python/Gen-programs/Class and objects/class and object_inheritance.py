# Program to demostrate the use of inheritance in class and objects.

class laptop():
	def __init__(self, brand, color):
		self.brandName = brand
		self.color = color

	def displayThings(self):
		print(self.brandName, self.color)

# Here the object of parent is created called obj

obj = laptop("Dell", "Gray")

obj.displayThings()  # Function calling through obj of parent class

# Now creating a child class called mobile.

class mobile(laptop):
	pass

obj_child = mobile("NOKIA", "Black") # Defining the child class's attributes

obj_child.displayThings()  # Function calling through child's object