'''
#Q-1

class string():
	def __init__(self):
		self.str=""

	def get_string(self):
		self.str=input("Enter your string:")

	def print_string(self):
		print("string in upper case:"+self.str.upper())

obj=string()
obj.get_string()
obj.print_string()
'''

'''
# Q-2
class area():
	def __init__(self):
		self.length=0
		self.width=0
	def get_dimension(self):
		self.length=int(input("Enter length:"))
		self.width=int(input("Enter width:"))

	def print_area(self):
		area=self.length*self.width
		print("Area =",area)


obj=area()
obj.get_dimension()
obj.print_area()
'''

'''
# Q-3 
class circle():
	def __init__(self):
		self.radius=0

	def get_radius(self):
		self.radius=int(input("Enter radius:"))

	def area(self):
		area=3.14*self.radius*self.radius
		print("Area=",area)

	def perimeter(self):
		perimeter=2*3.14*self.radius
		print("perimeter=",perimeter)

obj=circle()
obj.get_radius()
obj.perimeter()
obj.area()
'''

'''
# Q-4

class pow():
	def __init__(self):
		self.base=0
		self.power=0

	def get_val(self):
		self.base=int(input("Enter the value of base:"))
		self.power=int(input("Enter Power:"))

	def display_power(self):
		power=1

		for i in range(0, self.power):
			power=power*self.base

		print("Power=",power)


obj=pow()
obj.get_val()
obj.display_power()
'''

'''
# Q-5 

class reverse_string():

	def __init__(self):
		self.str=""

	def get_str(self):
		self.str=input("Enter a string:")

	def print_str(self):
		e=self.str.split(' ')
		print(e[::-1])
		

obj=reverse_string()
obj.get_str()
obj.print_str()
'''