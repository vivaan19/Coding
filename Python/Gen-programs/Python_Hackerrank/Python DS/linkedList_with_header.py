# Python code for linked list
# to built a linked list in python:

# 1. create a class node and in it there will data and pointer part of the node.
# 2. create a header class in which it will be header node. 
# 3. creation of objects of node class and header class which is used to make a node 


# first node class will be created in it there will  be data and next which is a pointer parts, initially 
# pointer part will be NULL i.e None in python. 

class node:
    def __init__(self, data):
        self.data = data
        self.next = None

# then we need to create another linked list class in which we are defining the header node which is initialized to None

class linkedList:
    def __init__(self):
        self.head = None
    def printlist(self):
        temp = self.head
        while temp:
            print(temp.data,end="-->")
            temp = temp.next

# then create object of linkedList class, so head will be None

obj = linkedList()
# fisrt we are defing nodes and data to it, then after we will link all nodes to one another through next. 

# here obj.head is object for node class and its data is 1 and pointes to None which is next. 
obj.head = node(1)

# this is second node after head node which has 2 data  
second = node(2)

# this is third node after second node which has 3 data  
third = node(3)

# now we are going to link to each nodes through next. 

# head-1 ----> second-2 ----> third-3 ----> NULL

obj.head.next = second
second.next = third
third.next = None 
obj.printlist()
