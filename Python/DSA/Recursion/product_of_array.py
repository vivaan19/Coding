# example : arr[1, 2, 3] = 6 1*2*3 = 6
def product(arr):
    if len(arr) == 1:
        return arr[0]
    else:
        return arr[0] * product(arr[1:len(arr)])

arr=[1,2,3,4,5]
print(product(arr))