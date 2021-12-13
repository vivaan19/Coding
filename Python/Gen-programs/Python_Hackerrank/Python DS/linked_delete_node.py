class node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = None

def insert(lhead, data):
    if lhead is None:
        lhead = node(data)
    else:
        temp = lhead
        while temp.next:
            temp = temp.next
        temp.next = node(data)
    return lhead

def delete_at_loc(lhead, loc):
    if loc == 0:
        return lhead.next
    else:
        temp1 = lhead
        temp = lhead
        for i in range(loc-1):
            temp1 = temp1.next
        for i in range(loc):
            temp = temp.next
        temp1.next = temp.next
        temp.next = None 
        return lhead

def display(lhead):
    temp = lhead
    while temp:
        print(temp.data, end="-->")
        temp = temp.next


n=int(input())
list_obj = linkedlist()

for i in range(n):
    item = int(input())
    ins = insert(list_obj.head, item)
    list_obj.head = ins

loc = int(input())

display(delete_at_loc(list_obj.head,loc))
