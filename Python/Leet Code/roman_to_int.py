# Roman to integer 
"""
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
"""

rdict = {
    "I":1,
    "V":5,
    "X":10,
    "L":50,
    "C":100,
    "D":500,
    "M":1000
}
num=0
s=input("Roman: ")

for i in range(len(s)):
    if i + 1 < len(s) and rdict[s[i]] < rdict[s[i+1]]:
        num -= rdict[s[i]]
    else:
        num += rdict[s[i]]
print(num)


