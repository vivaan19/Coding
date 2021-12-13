def fun(pan):
    print(id(pan))
    pan = 16
    print(id(pan))
x=9
fun(x)
print(id(x))