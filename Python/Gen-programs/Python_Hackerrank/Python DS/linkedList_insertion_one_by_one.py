class node:
    def __init__(self,data, next):
        self.data = data
        self.next = next
class linkedlist:
    def __init__(self):
        self.head = None

    def insert(self, data):
        if self.head is None:
            self.head = node(data, None)
        else:
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = node(data, None)
        # self.printlist()
    
    def reverse(self):
        temp = self.head
        # p = self.head
        for i in range(self.len_list()-1):
            while temp.next:
                q = temp
                temp = temp.next
            p=q.next
            p.next = q
            q.next = None
        self.printlist()
        

    def len_list(self):
        temp = self.head
        count = 0
        while temp:
            count += 1
            temp = temp.next 
        return count

    def printlist(self):
        temp = self.head
        while temp:
            print(temp.data, end="-->")
            temp = temp.next


obj_list = linkedlist()

n = int(input())
for i in range(n):
    ele = input()
    obj_list.insert(ele)
# print(obj_list.len_list())
obj_list.reverse()
# obj_list.printlist()
