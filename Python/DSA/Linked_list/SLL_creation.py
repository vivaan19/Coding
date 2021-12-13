# base class of single linked list 
class singleLL:
    def __init__(self):
        self.head = None
        self.tail = None

class node:
    def __init__(self, value):
        self.value = value
        self.next = None

def insert(lhead, node_value):
    if lhead is None:
        lhead = node(node_value)
        
        return lhead
    else:
        temp = lhead
        p = node(node_value)
        temp.next = p
        return p

def insert_at_start(lhead):
    val = input("Enter val: ")
    new_node = node(val)
    new_node.next = lhead
    lhead = new_node
    return lhead


def insert_at_end(lhead):
    val = input("Enter value at last: ")
    last_node = node(val)
    temp = lhead
    while temp.next != None:
        temp = temp.next
    last_node.next = None
    temp.next = last_node
    return lhead

def insert_at_location(loc, lhead):
    val = input("Enter val to insert at loc "+str(loc)+": ")
    new_node = node(val)
    temp = lhead
    for _ in range(loc-2):
        temp = temp.next
    new_node.next = temp.next 
    temp.next = new_node
    return lhead

def search(lhead,ser_val):
    if lhead is None:
        return "head is null no item is there"
    else:
        temp = lhead
        while temp != None:
            if int(temp.value) == ser_val:
                return ser_val
            temp = temp.next
        return "value not in this list"

def delete_node(del_val, lhead, inp):
    if del_val == 1:
        # delete first node
        lhead = lhead.next
        return lhead
    elif del_val == 2:
        # delete node at a location 
        loc = int(input("Enter location to delete: "))
        temp = lhead
        for _ in range(loc-2):
            temp = temp.next
        cur_node = temp.next
        temp.next = cur_node.next
        cur_node.next  = None
        return lhead
    
    elif del_val == 3:
        # delete whole linked list
        return None
        
    else:
        # delete last node
        temp = lhead
        for i in range(inp-2):
            temp = temp.next
        temp.next = None
        return lhead     
         
def printList(lhead):
    if lhead is None:
        print("This linked list is empty nothing to print")
    temp = lhead
    while temp != None:
        print(temp.value, end = "-->")
        temp = temp.next
    print("\n")

list_obj = singleLL()
inp = int(input("How many element to insert: "))

for i in range(inp):
    node_value = input("Insert value: ")
    updated_head = insert(list_obj.head, node_value)
    if i == 0:
        inital_head = updated_head
    list_obj.head = updated_head

# new_head = insert_at_start(inital_head)
# printList(insert_at_end(new_head))
printList(inital_head)
# printList(insert_at_location(2, inital_head))
# print(search(inital_head,2))

del_val = int(input("Press 1 for delete first node, 2 for delete at any locaion, 3 to delete entire linked list ,4 to delete last node"))
if del_val == 1:
    printList(delete_node(1, inital_head, inp))
elif del_val == 2:
    printList(delete_node(2, inital_head, inp))
elif del_val == 3:
    printList(delete_node(3, inital_head, inp))
else:
    printList(delete_node(4, inital_head, inp))
# printList(inital_head)