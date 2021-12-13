class laptop():
	def __init__(self, brand, price):
		self.brand = brand
		self.price = price

obj = laptop("DELL", 60000)

print(obj.brand)
print(obj.price)