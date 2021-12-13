'''
import mod1 as mod

mod.myname("Shiromani")
'''

'''
import platform

x=platform.system()
print(x)
'''

'''
import platform

x=dir(platform)
print(x)
'''
class MyNumbers:
  def __iter__(self):
    self.a = 5
    return self

  def __next__(self):
    x = self.a
    self.a += 5
    return x

myclass = MyNumbers()
myiter = iter(myclass)

print(next(myiter))