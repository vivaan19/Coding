'''
try:
	print(x)
except:
	print("Exception occured")
'''

'''
try:
	print(x)
except NameError:
	print("This is a name error")

except:
	print("something else")
'''

'''
try:
	print("my")
except:
	print("something else went wrong")
else:
	print("NO error")
finally:
	print("The handling is over")
'''

'''
x=-1

if x<0:
	raise Exception("No numbers below zero")
'''

x="e"

if not type(x) is int:
	raise TypeError("Only integers are allowed")