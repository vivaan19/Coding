# Rotation of a NxN matrix by 90 degrees. 
''''
1 2 3           7 4 1
4 5 6   ---->   8 5 2 
7 8 9           9 6 3

'''
def rotate(lst):
    rotate=[]
    a=[]
    b=[]
    col=0
    while col != len(lst):
        for i in range(len(lst)-1, -1, -1):
            a.append([lst[i][col]])
        col+=1
        # rotate.append(a)
    return a

n=int(input("Enter n: "))
a=[]
for i in range(n):
    a.append(list(map(int, input("Enter for row {}: ".format(i+1)).split())))
print(a)
print(rotate(a))    
 