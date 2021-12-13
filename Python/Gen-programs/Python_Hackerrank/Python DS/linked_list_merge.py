class node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class linked_list:
    def __init__(self):
        self.head = None
        self.head1 = None

def insert(lhead, data):
    if lhead is None:
        lhead = node(data)
    else:
        temp=lhead
        while temp.next:
            temp = temp.next
        temp.next = node(data)
    return lhead

def print_list(lhead):
    temp=lhead
    while temp:
        print(temp.data, end=' ')
        temp=temp.next
    print("\n")

def merge(lhead1, lhead2):
    dummynode=node(0)
    tail=dummynode
    while True:
        if lhead1 is None:
            tail.next = lhead2
            break
        if lhead2 is None:
            tail.next = lhead1
            break

        if lhead1.data <= lhead2.data:
            tail.next = lhead1
            lhead1 = lhead1.next
        else:
            tail.next = lhead2
            lhead2 = lhead2.next
        
        tail = tail.next

    return dummynode.next

obj = linked_list()

n=int(input("How many elements? in list 1 "))

for i in range(n):
    ele = int(input("Enter Element: "))
    ins = insert(obj.head, ele)
    obj.head = ins

print_list(obj.head)
# print("\n")
m=int(input("How many elements? in list 2 "))

for i in range(m):
    ele = int(input("Enter Element: "))
    ins = insert(obj.head1, ele)
    obj.head1 = ins

print_list(obj.head1)
print_list(merge(obj.head, obj.head1))

