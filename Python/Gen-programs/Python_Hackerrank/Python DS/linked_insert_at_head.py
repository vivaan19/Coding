
class node:
    def __init__(self,data,next):
        self.data = data
        self.next = next

class singlylinkedlist:
    def __init__(self):
        self.head = None
        self.tail = None


def insertathead(lhead, item):
    if lhead is None:
        lhead = node(item, None)
        return lhead
    else:
        temp = lhead
        p=node(item, None)
        p.next = temp
        return p

def display(lhead):
    # print()
    while lhead:
        print(lhead.data, end = "-->")
        lhead = lhead.next
    


count = int(input())
list_obj = singlylinkedlist()

for i in range(count):
    item = int(input())
    list_head = insertathead(list_obj.head, item)
    list_obj.head = list_head

display(list_obj.head)