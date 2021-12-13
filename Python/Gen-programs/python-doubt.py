x=str(input(""))
size=len(x)
if size%2==0:
	stop=size-2
else:
	stop=size-1
for i in range(0,size,2):
	if i==stop:
		print("'"+x[i]+"'")
	else:
		print("'"+x[i]+"'",end=", ")