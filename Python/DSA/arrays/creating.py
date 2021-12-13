# elements will be shifted to right when insertion operation is performed. 
# insertion at beginnning will take O(n) because all elements will be shifted to right
# insertion at ending will take O(1) only at last insertion happens no elements will be shifted.
from array import *

arr1 = array('i', [1,2,3,4,5])

arr1.insert(0,4)
print(arr1)

# traversing in array takes O(n) time complexity and O(1) space complexity. 
for i in arr1:
    print(i)
