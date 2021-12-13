
'''
# Q-1
n = int(input("Enter your number: "))
thistuple=()
for i in range(0,n):
	temp = input()
	z=list(thistuple)
	z.append (int(temp))
	thistuple = tuple(z)

print(thistuple)

print("Max Value: " +str(max(thistuple)))
print("Min Value: " +str(min(thistuple)))
'''

'''
# Q-2
# Creating a dictionarie called ODD which contains.
# Odd numbers as key and value as corresponding words.
ODD = {
	"1": "one",
	"3": "three",
	"5": "five",
	"7": "seven",
	"9": "nine"
}

# print(ODD) 

# print all key names in the dict
for i in ODD:
	print(i)

# print the values in the dict
for x in ODD:
 	print(ODD[x])

# Display the lenghth of ODD
print("\nThe lenght of ODD is " ,len(ODD))

# Checking 7 present in ODD or not.
if "7" in ODD:
 print("YES 7 is the key of ODD")
else:
 print("NO 7 is not the key of ODD")

# Checking 2 is present in ODD or not.
if "2" in ODD:
 print("YES 2 is the key of ODD")
else:
 print("NO 2 is not the key of ODD")

# Getting and displaying the value corresponding to key "9" 
y = ODD["9"]
print("The value corresponding to key 9 is " +y)

# Removing the value at the key "9" and then printing the ODD
ODD.pop("9")
print("The ODD Dictionarie after removal of key= 9 ")
print(ODD)
'''

'''
# Q-3

n = int(input("Enter how many employees are there: "))

for i in range(1,n+1):
 print("Enter details of ",i,"employee")
 employee = {
	"Name":str(input("Name:")),
	"salary":int(input("salary:"))
 }
 print(employee)

'''
'''

# Q-4

n = "VIVAAN"

count={}

for i in n:
	if i in count:
		count[i] += 1

	else:
		count[i] = 1

print("Count of charaters in 'VIVAAN' is "+str(count))
'''


'''

# Q-5

# Write a function to convert number into corresponding number in
# words
def convert(num):
 #numberNames is a dictionary of digits and corresponding number
 #names
 numberNames = {0:'Zero',1:'One',2:'Two',3:'Three',4:'Four',5:'Five',6:'Six',7:'Seven',8:'Eight',9:'Nine'}

 result = ''
 for ch in num:
     	key=int(ch) 	#converts character to integer
     	value=numberNames[key]
 	 	result=result + ' ' + value
 	 return result

num = input("Enter any number: ") #number is stored as string
result = convert(num)
print("The number is:",num)
print("The numberName is:",result)
'''

'''
# Q-6

n=input()
tuple1=()
tuple2=()
tuple3=()
for i in range(int(n)):
	id=input()
	temp=list(tuple1)
	temp.append(id)
	tuple1=tuple(temp)
	id=id.split("@")
	temp=list(tuple2)
	temp.append(id[0])
	tuple2=tuple(temp)
	temp=list(tuple3)
	temp.append(id[1])
	tuple3=tuple(temp)
print(tuple1)
print(tuple2)
print(tuple3)

print("Enter your email id's")
'''

'''
# Q-7

n = int(input("Enter how many students: "))

thistuple = ()

for i in range(0,n):
 temp = input()

 y = list(thistuple)

 y.append(temp)

 thistuple = tuple(y)
 
print(thistuple)

m = str(input("Enter another name:"))

if m in thistuple:
 print("Yes another name present in tuple")
else:
 print("NO another name is not present in tuple") 
'''


# Q-8
'''
	# (a) to display the dictionary of names and ph numbers of friends.

friends={
	"friend1":{
	"name":input("Enter name of first friend:"),
	"number":input("Enter ph number of first friend:")
	},

	"friend2":{
	"name":input("Enter name of second friend:"),
	"number":input("Enter ph number of second friend:")
	}
}

for a,b in friends.items():
 print(a,b)
'''
'''
	# (b) add a new key-value pair to dictionary

print("This is a dictionary of friends with their names and phone numbers")
print("Add names and numbers to the dictionary:")

friends={
	"friend1":{
	"name":input("Enter name of first friend:"),
	"number":input("Enter ph number of first friend:")
	},

	"friend2":{
	"name":input("Enter name of second friend:"),
	"number":input("Enter ph number of second friend:")
	}
}

print(friends)

print("Add a second number to friend1")

# Adding new key value pair to friend1.
friends["friend1"]["number1"] = input("Add second number of friend1:")

print("After addition of second number of friend1")
print("The modified dictionary is:")

print(friends)
'''

'''
	# (c) removing a friend detail in this dictionary.

friends={
	"friend1":{
	"name":input("Enter name of first friend:"),
	"number":input("Enter ph number of first friend:")
	},

	"friend2":{
	"name":input("Enter name of second friend:"),
	"number":input("Enter ph number of second friend:")
	}
}

print("Dictionary before removal of friend1:\n")
print(friends)


print("\nDeleting friend1 using del function:")
del friends["friend1"] # del function.
print(friends)

print("\nDeleting friend2 using pop function:")
friends.pop("friend2")
print("Now the dictionary is empty")
print(friends)
'''


'''
	# (d) Modify the phone number of an existing friend

print("Enter details of your friend:\n")

friends={
	"friend1":{
	"name":input("Enter name of first friend:"),
	"number":input("Enter ph number of first friend:")
	},

	"friend2":{
	"name":input("Enter name of second friend:"),
	"number":input("Enter ph number of second friend:")
	}
}

print("Before number modification\n")
print(friends)

print("\nModification of friend1 number")
friends["friend1"]["number"] = input("Modify number of friend1\n")

print("\nModification of friend2 number")
friends["friend2"]["number"] = input("Modify number of friend2\n")

print("After number modification of friend1 and friend2\n")

print(friends)
'''


'''
	# (e) Check if a friend is present in the dictionary or not

friends={
	"friend1":{
	"name":input("Enter name of first friend:"),
	"number":input("Enter ph number of first friend:")
	},

	"friend2":{
	"name":input("Enter name of second friend:"),
	"number":input("Enter ph number of second friend:")
	}
}

if "friend1" in friends:
	print("YES it is present")
else:
	print("NO")
'''

'''

	 # (f) Display the dictionary in sorted order of names
friends={
	"friend1":{
	"name":input("Enter name of first friend:"),
	"number":input("Enter ph number of first friend:")
	},

	"friend2":{
	"name":input("Enter name of second friend:"),
	"number":input("Enter ph number of second friend:")
	}
 }
print("The dictionary after sorting is:\n")
for i in sorted(friends):
 print(i,friends[i])
'''


'''
# Q-9
thislist = []

n = int(input("How many Elements to enter in thislist:"))
print("Enter your the Elements in thislist")

for i in range(0,n):
 thislist.append(input())


print("\n********LIST OPERATIONS********")
print("Press the following number to perform that operation\n")
print("Press 1 for Append an element to a List\n")
print("Press 2 for Insert an element to a List\n")
print("Press 3 for Append a list to the given list\n")
print("Press 4 for Modify an existing element in the list\n")
print("Press 5 for Delete an existing element from its position\n")
print("Press 6 for Delete an existing element with a given value\n")
print("Press 7 for Sort the list in ascending order\n")
print("Press 8 for Sort the list in descending order\n")
print("Press 9 for Display the list\n")

ch = str(input("Which operation to perform: "))

if ch=="1":
	print("\nYour are in the append method")
	newelement = input("Enter name of element to append to thislist:")
	thislist.append(newelement)
	print("Your list after appending:\n")
	print(thislist)

elif ch=="2":
	print("\nYou are in the Insert method")
	m = int(input("At which position you want to Insert:"))
	newelement = str(input("Enter your element:"))
	thislist.insert(m, newelement)
	print("List after inserting")
	print(thislist)

elif ch=="3":
	appendlist=[]
	print("\nYou are in the append a list method")
	p=int(input("Enter the size of appending list:"))
	print("Enter the elements in appendlist")
	for i in range(0,p):
	 	appendlist.append(input())
	finallist = thislist + appendlist
	print("The final list after appending the appendlist is:")
	print(finallist)

elif ch == "4":
	print("\nYour are in the modify method")
	m=int(input("At which position you want to modify:"))
	thislist[m] = input("Modify:")
	print("The final lsit after modification:\n")
	print(thislist)

elif ch == "5":
	print("\nYou are in delete an existing element from its 'position'")
	m = int(input("Enter your position of deletion:"))
	del thislist[m]
	print("The list after deletion\n")
	print(thislist)

elif ch == "6":
	print("\nYou are in delete an existing element with a given 'value'")
	m = str(input("Which value you want to delete:"))
	thislist.remove(m)
	print("The list after removal")
	print(thislist)

elif ch == "7":
	print("You are in Sort the list in ascending order")
	thislist.sort()
	print("The list in ascending order is:\n")
	print(thislist)

elif ch == "8":
	print("You are in sort the list in descending order")
	thislist.sort(reverse=True)
	print("List in descending order is:\n")
	print(thislist)

elif ch == "9":
	print("You are in display list")
	print("The list is::")
	print(thislist)
else:
	print("You have entered incorrect method")
'''

'''
# Q-10

set1 = {10,20,30,40,50}
set2 = {30,40,50,60,70}

set3 = set1.intersection(set2)

print("The set with all values similar is:")

print(set3)
'''

# Q-11
str1 = str(input("String:"))

len = len(str1)
count=0

for i in range(0,len):
	for j in range(i+1,len):
		if str1[i] == str1[j]:
			count += 1

if count >= 1:
	print("False")
else:
	print("True")













