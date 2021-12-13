# program to demostrate the sql connection 
import mysql.connector

mydb = mysql.connector.connect(
	host="localhost",
	user="root",
	password="Vivaan@ram1",
	database="mydatabase"
	)
mycursor = mydb.cursor()

#1. mycursor.execute("CREATE TABLE customers (name VARCHAR(225), address VARCHAR(225))") 



#1. to create a table called customers.
#2. to show the table customers.

# Q)- How to create a table which has a unique key for each record.?
'''
Ans:

This can be done by defining a PRIMARY KEY.

We use the statement "INT AUTO_INCREMENT PRIMARY KEY" which will insert a unique number for each record. Starting at 1, and increased by one for each record.
'''
#mycursor.execute("CREATE TABLE girls (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255), address VARCHAR(255))")
#mycursor.execute("ALTER TABLE customers ADD COLUMN id INT AUTO_INCREMENT PRIMARY KEY")
mycursor.execute("SHOW TABLES")
for x in mycursor:
	print(x)