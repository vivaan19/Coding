file=open("V:\\test.txt","a")
file.write("This is for only testing purpose")
file.close()

file=open("V:\\test.txt","rt")
print(file.read())
file.close()

import os
os.remove("V:\\test.txt")
