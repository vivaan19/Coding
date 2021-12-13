
# program to store elements in a list entered by user and finding the second max among the list.
'''
n=int(input())





print(A)
'''
'''
class MyNumbers:
  def __iter__(self):
    self.a = 1
    return self

  def __next__(self):
    if self.a <= 20:
      x = self.a
      self.a += 1
      return x
    else:
      raise StopIteration 

myclass = MyNumbers()
myiter = iter(myclass)

for x in myiter:
  print(x)
'''

'''
lst = []
nums = [15, 6]
lst.append(nums)
nums = [10, 30, 20]
lst.append(nums)
lst.sort()
print(lst)
'''
