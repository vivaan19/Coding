# Linked list
class node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

# Here all the operations are going to take place 
class list1:
    def __init__(self):
        self.head = None

    def insert_at_start(self, data):
        nod = node(data, self.head)
        self.head = nod
    
    def insert_at_end(self, data):
        if self.head is None:
            self.head = node(data, None)
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = node(data, None)
    
    def insert_values(self,data_list):
        self.head = None
        for data in data_list:
            self.insert_at_end(data)
    
    def remove_at_end(self):
        temp=self.head
        count1 = 0
        while temp:
            if count1 == self.len()-2:
                temp.next = None
                break
            temp = temp.next
            count1 += 1
    
    def remove_at_start(self):
        temp = self.head
        self.head=temp.next
    
    def remove_at_loc(self, loc):
        if loc < 0 or loc >= self.len():
            raise Exception("Invalid Index")
        if loc == 0:
            self.head = self.head.next
            return
        
        count = 0
        temp = self.head
        while temp:
            if count == loc-1:
                temp.next = temp.next.next
                # temp.next.next = None
                break
            temp = temp.next
            count += 1
    
    def len(self):
        temp = self.head
        count = 0
        while temp:
            temp = temp.next
            count += 1
        return count

    def printlist(self):
        temp = self.head
        while temp:
            print(temp.data, end="-->")
            temp = temp.next

obj = list1()

obj.insert_at_end(1)
obj.insert_at_end(2)
obj.insert_at_end(3)
# obj.insert_values([1,2,3,4,5])
# print("length of list = ", obj.len())
# obj.remove_at_end()
# obj.remove_at_start()
# obj.remove_at_loc(4)
obj.printlist()