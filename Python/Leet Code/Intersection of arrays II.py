# Given two integer arrays nums1 and nums2, return an array of their intersection. 
# Each element in the result must appear as many times as it shows in both arrays
# and you may return the result in any order.
# Intersection of arrays II 
# Algo:
# 1. Take input
# 2. Then check if the len of nums1 is small than nums2 swap the arrays, because 
#    to be uniform length should be same and num1 should be bigger than or equal to nums2. 
# 3. Initialize a dictionary
# 4. Count each element's frequency in nums1 (bigger list).
# 5. Iterate through nums2 and check if that element is present in m and have non-zero frequency.
# 6. Decrement the value of that elements count
# 7. Append the value in res list and then print it.  

nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))

if len(nums1) < len(nums2):
    nums1, nums2 = nums2, nums1
m={}

for i in nums1:
    if i in m:
        m[i] += 1
    else:
        m[i] = 1

res = []
for i in nums2:
    if i in m and m[i]:
        m[i] -=1
        res.append(i)
print(res)
