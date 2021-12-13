import numpy
def arrays(arr):
    for i in range(len(arr)):
        arr[i] =float(arr[i])
    # print(arr)
    
    arr.reverse()
    # print(b)
    a = numpy.array(arr)
    return a
arr = input().strip().split(' ')
# print(arr)
result = arrays(arr)
print(result)