class node:
    def __init__(self, data):
        self.data = data
        self.next = None

class singlylinkedlist:
    def __init__(self):
        self.head = None

def insert_data(lhead, data):
    if lhead is None:
        lhead = node(data)
    else:
        temp = lhead
        while temp.next:
            temp = temp.next
        temp.next = node(data)
    return lhead

def insert_at_loc(lhead,new_data, loc):
    if loc == 0:
        p=node(new_data)
        p.next = lhead
        return p
    else:
        temp = lhead
        p=node(new_data)
        for i in range(loc-1):
            temp =  temp.next
        p.next = temp.next
        temp.next = p
        return lhead

def display(lhead):
    temp = lhead
    while temp:
        print(temp.data, end = "-->")
        temp = temp.next


count = int(input())
list_obj = singlylinkedlist()

for i in range(count):
    item = int(input())
    list_head = insert_data(list_obj.head, item)
    list_obj.head = list_head


display(insert_at_loc(list_obj.head,5, 2))

