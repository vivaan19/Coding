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

def display_reverse(lhead, n):

    '''
    # Method-2 by using list and reversing it. 
    temp = lhead
    a=[]
    while temp:
        a.append(temp.data)
        temp = temp.next
    
    for i in a[::-1]:
        print(i, end = "-->")
    '''
    

    '''
    Method -1 if parameters has n (size of list) involved 
    while n != 0:
        prev = lhead
        for i in range(n-1):
            prev = prev.next
        print(prev.data, end = "-->")
        n -= 1
        '''

def reverse_list(lhead):
    prev = None
    current = lhead
    while current is not None:
        next = current.next
        current.next = prev
        prev = current
        current = next
    lhead = prev
    return lhead

def display(lhead):
    temp = lhead

    while temp:
        print(temp.data, end ="-->")
        temp = temp.next

n=int(input())

lobj = linkedlist()

for i in range(n):
    item = int(input())
    ins = insert(lobj.head, item)
    lobj.head = ins

# display(lobj.head)
# display_reverse(lobj.head, n)
display(reverse_list(lobj.head))

