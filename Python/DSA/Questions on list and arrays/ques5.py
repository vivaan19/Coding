# to check if the lists have purmutations to another. 
def permu(lst1, lst2):
    if len(lst1) != len(lst2):
        return False
    lst1.sort()
    lst2.sort()
    # print(lst1)
    # print(lst2)
    if lst1 == lst2:
        return True
    else:
        return False
lst1 = [1,2]
lst2 = [2,1]
print(permu(lst1, lst2)) 