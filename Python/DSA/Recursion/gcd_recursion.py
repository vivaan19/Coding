# Find the gcd of two numbers using recursion 
def gcd_recurs(a, b):
    assert int(a) == a and int(b) == b, "Both numbers should be integers"
    if a<0:
        a = a*-1
    if b<0:
        b=b*-1
    if b == 0:
        return a
    return gcd_recurs(b,a%b)

print(gcd_recurs(8, -12))