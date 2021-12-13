# Python File handeling file input/output w3resources

'''
# Q-1 Program to read an entire text file.

f=open("V://test.txt", "r")
print(f.read())
'''

'''
# Q-2 Write a Python program to read first n lines of a file.

f= open("V://test.txt", "r")

n=int(input("How many lines to read:"))

for i in range(0, n):
	print(f.readline())

'''

'''
# Q-3 Write a Python program to append text to a file and display the text.

f= open("V://test.txt", "a")
f.write("\nThis is appended text in file")
f.close()

f=open("V://test.txt", "r")
print(f.read())
'''


# Q-4 Write a Python program to read last n lines of a file.
f=open("V://test.txt", "r")
print(f.read())

lines=f.readlines()
n=int(input("Enter how many lines to display(<=6):"))

last_line=lines[-n:]

print(last_line)
f.close()

