import mysql.connector

mydb = mysql.connector.connect(
	host="localhost",
	user="root",
	password="Vivaan@ram1",
	database="mydatabase"
	)



mycursor=mydb.cursor()

sql = "INSERT INTO customers (name, address) VALUES (%s, %s)"

value=[

	("Ram", "Hall St"),
	("Ashish", "Subhash Memorium 1 St"),
	("Neelima", "Super bakery St"),
	("Raj", "Night Town St"),
	('Peter', 'Lowstreet 4'),
	('Amy', 'Apple st 652'),
	('Hannah', 'Mountain 21'),
	('Michael', 'Valley 345'),
	('Sandy', 'Ocean blvd 2'),
	('Betty', 'Green Grass 1'),
	('Richard', 'Sky st 331'),
	('Susan', 'One way 98'),
	('Vicky', 'Yellow Garden 2')
]


mycursor.executemany(sql, value)

mydb.commit()

print(mycursor.rowcount, "was record feeded")
print("1 record inserted, ID:", mycursor.lastrowid)

