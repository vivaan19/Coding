class node:
    def __init__(self, data):
        self.data = data
        self.next = None
    def printlist(self, add_of_first):
        temp = add_of_first
        while temp:
            print(temp.data)
            temp = temp.next

first = node(1)
second = node(2)
third = node(3)

first.next = second
second.next = third
third.next = None

second.printlist(first)