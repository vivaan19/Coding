'''
def my_sum(my_intergers):
	result = 0
	for x in my_intergers:
		result += x
	return result

list_of_integers = [1, 2, 3]

print(my_sum(list_of_integers))
'''
def my_sum(*args):
	result = 0

	for x in args:
		result += x
	return result

print(my_sum(1, 2, 3))