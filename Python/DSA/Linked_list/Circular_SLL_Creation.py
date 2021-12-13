class node:
    def __init__(self, value, next = None):
        self.value = value
        self.next = next

class circular_sll:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def creation(self, lhead, val, ihead):
        if lhead is None:
            my_node = node(val) # first node 
            my_node.next = my_node # pointing to itself
            lhead = my_node # header --> first node 
            self.tail = my_node # tail --> first node
            return lhead
        else:
            my_node = node(val)
            my_node.next = ihead
            temp = lhead
            temp.next = my_node
            self.tail = my_node
            return my_node
    
    def insert(self, inp_val, value, lhead, loc=0):
        if inp_val == 0:
            # insert at start 
            new_node = node(value)
            new_node.next = lhead
            lhead = new_node
            self.tail.next = new_node
            return lhead
        elif inp_val == 1:
            # insert at a location
            new_node = node(value)
            temp = lhead
            for _ in range(loc - 2):
                temp = temp.next
            new_node.next = temp.next
            temp.next = new_node
            return lhead
        else:
            # insert at end
            new_node = node(value)
            new_node.next = self.tail.next
            self.tail.next = new_node
            self.tail = new_node
            return lhead
    
    def delete(self, inp_val, lhead, loc = 0):
        if inp_val == 0:
            # delete start
            lhead = lhead.next
            self.tail.next = lhead
            return lhead
        
        elif inp_val == 1:
            # delete at loc 
            temp = lhead 
            for _ in range(loc-2):
                temp = temp.next
            cur_node = temp.next
            temp.next = cur_node.next
            cur_node.next = None
            return lhead
        
        else:
            # delete at end
            temp = lhead
            for _ in range(loc-2):
                temp = temp.next
            print(temp.value)
            self.tail = temp
            temp.next = lhead
            return lhead
    
    def printList(self, lhead):
        print(self.tail.value)
        temp = lhead
        while temp:
            print(temp.value, end=' ')
            if self.tail == temp:
                break
            temp = temp.next

list_obj = circular_sll()
nodes = int(input("Total Nodes: "))
first_head = None

for i in range(nodes):
    val = input("Node val: ")
    temp_node_head = list_obj.creation(list_obj.head, val, first_head)
    if i == 0:
        first_head = temp_node_head
    list_obj.head = temp_node_head

list_obj.printList(first_head)
print("\n")

# ########### INSERTION #################
# print("0 for insert at start, 1 for insert at any location ,-1 for insert at last")
# inp = int(input("Enter option: "))
# if inp == 0:
#     val = int(input("Enter value to insert: "))
#     first_head = list_obj.insert(0, val, first_head)
# elif inp == 1:
#     val , loc = int(input("Enter Value to insert: ")), int(input("Enter location to insert: "))
#     first_head = list_obj.insert(1, val, first_head, loc)
# else:
#     val = int(input("Enter value: "))
#     first_head = list_obj.insert(-1, val, first_head)

# ##################### DELETETION #################
# print("0 for delete at start, 1 for delete at any location ,-1 for delete at last")
# inp = int(input("Enter option: "))
# if inp == 0:
#     first_head = list_obj.delete(0, first_head)
# elif inp == 1:
#     loc = int(input("Enter location to delete: "))
#     first_head = list_obj.delete(1, first_head, loc)
# else:
#     first_head = list_obj.delete(-1, first_head, nodes)

list_obj.printList(first_head)
