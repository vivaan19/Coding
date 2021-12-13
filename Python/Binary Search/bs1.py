# Binary Search Algo: 
"""
1. Sort the array in acending order
2. Initialize low=0, high=len(ar)-1
3. Initialize mid=low+high // 2  floor value
4. Compare the search element with mid index. 
5. If mid value is greater than the search element then search through left half of array, low=0, high=mid-1
6. If mid value is smaller than the search element then search through right half of array, low=mid+1, high=len(ar)-1
7. If mid value equal to search element then return mid. 
8. If element not found return -1.
9. If multiple occurance of search element then return the position of first index.
10. Complexity : O(LOGN)--> ONLY FOR SEARCHING. 

"""
"""
Extra Things I learnt:
1. Space Seperated input:
lst = list(map(int, input().split()))
"""


def binary_search(ar, element):
    low = 0
    high = len(ar)-1

    while low <= high:
        mid = (low+high) // 2

        if ar[mid] == element:
            return mid
        
        elif ar[mid] > element:
            low = mid+1

        elif ar[mid] < element:
            high = mid - 1

    return -1


# print((2+2)//2)
strr = input()
lst = list(map(int, strr.split()))

ele = int(input("Element to search: "))
lst.sort(reverse=True)
print("len=",len(lst))

inx = binary_search(lst, ele)
print(inx)

occ = inx-1
while True:
    if lst[occ] != lst[inx]:
        print("The position of element",ele," is", inx)
        break
    else: 
        inx = occ
    occ -= 1



