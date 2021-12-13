# The elements in sets are not repeted.
# The elements are arranged randomly in the set means that they do not have specified indexes defined .

thisset={"a","b","c"} # this is a set which is initialized.
nextset={1,2,3}

'''
thisset.add("Orange") # "add" function adds one value to set "thisset".

thisset.update(["Orange","Grapes","Apple"]) # "update" function adds mutiple values to set.

print(thisset)

'''
'''
print("length of the set is",len(thisset)) # this is the function of length.

# we can remove item in a set by remove() or discard() function.

# but if the item is not present in the set then remove() function will raise a error,but not discard().

thisset.discard("e")

print(thisset)

x=thisset.pop() # removes the last item of the set but sets are unordered so, the value is removed ramdomly.

print(x)

print(thisset)

thisset.clear()

print(thisset)
'''

'''
# this function deletes the set
del thisset
print(thisset)

'''
'''
# set union is also possible between sets 1 and 2

set3=thisset.union(nextset)
print(set3)
'''

# set update is also a function to join set, but in this it joins two sets in the first set

thisset.update(nextset)
print(thisset)