
import mysql.connector

mydb = mysql.connector.connect(
	host="localhost",
	user="root",
	password="Vivaan@ram1",
	database="mydatabase"
	)


'''
mycursor=mydb.cursor()

sql = "INSERT INTO customers (name, address) VALUES (%s, %s)"

value=("Sita", "Blue green")
mycursor.execute(sql, value)

mydb.commit()

print("1 record inserted, ID:", mycursor.lastrowid)
'''
mycursor = mydb.cursor()

mycursor.execute("SELECT * FROM customers")

myresult = mycursor.fetchall()

for x in myresult:
  print(x)
