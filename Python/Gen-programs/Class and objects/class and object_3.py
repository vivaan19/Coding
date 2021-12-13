# we can also modify the object properties. 
# we can delete the object property and delete an entire object.
# also we can modify the object attribute.

class laptop():
	def __init__(self, brand, price):
		self.brand=brand
		self.price=price

	def display(self):
		print(obj.brand)
		print(obj.price)

obj = laptop("DELL", 60000)

obj.price = 40000  # The price is modified
obj.brand = "LENOVO" # The brand is modified

obj.display() # Function calling through class object with dot operator.