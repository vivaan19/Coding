class account:
	def __init__(self):
		self.name=''
		self.acc_num=0
		self.acc_type=0
		self.balance=0

	def getData(self):
		print("**********************ENTER THE DATA**********************\n")
		print("----------------------------------------------------------\n")
		self.name=input("Enter the Customer Name :")
		self.acc_num=int(input("Enter Customer Account number :"))
		self.acc_type=input("Enter Account Type(1 For Current Account And 2 For Savings Account ):")
	
	def deposite(self):
		self.balance=int(input("Enter Your Deposit Amount :"))

	def display(self):
		print("Your Account Balance :",self.balance)

	def withdraw(self):
		amount=int(input("Enter the amount you want to withdraw:"))
		if amount>self.balance:
			print("Insufficient Balance\n")
		else:
			self.balance=self.balance-amount
		self.display()

class cur_acct(account):

	def penalty(self):
		if self.balance<200:
			self.balance=self.balance-30
			print("Balance is less than 200\n")
			print("Your balance is penalised by 30 rupees\n")
			self.display()

		else:
			print("Balance is greater than 200 no penalty applied")
			self.display()

class sav_acct(account):

	def monthly_interest(self):
		print("The rate of monthly interst is 4%\n")
		amo1=float(self.balance)
		amo=amo1+(amo1*0.4)
		print("Your monthly interst total balance is",float(amo))


ac1=cur_acct()
ac1.getData()

if ac1.acc_type == '1':
	print("\n************************READ THE BELOW CONDITIONS***************************************\n")
	print("Your account is Current Type here there is a penalty of 30 rupees if min balance of 200 not there.")
	print("-------------------------------------------------------------------------------------------\n")

	ac1.deposite()
	ac1.withdraw()
	ac1.penalty()

else:
	print("\n*****************READ THE BELOW CONDITIONS*************************\n")
	print("Your account is savings Type here monthly interst is there no penalty")
	print("---------------------------------------------------------------------\n")
	ac2=sav_acct()
	ac1.deposite()
	ac1.withdraw()
	ac2.monthly_interest()


