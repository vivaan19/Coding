'''
x = 5
print(type(x))

x='a'
print(type(x))

b="Hello, world!"
print(b[2:5])

age = "36"
txt = "My name is John, I am " + age
print(txt)
'''
x="pynative"
size=len(x)
print(size)
if size%2==0:
	stop=size-2
else:
	stop=size-1
for i in range(0,size,2):
	if i==stop:
		print("'"+x[i]+"'")
	else:
		print("'"+x[i]+"'",end=",")