def first():
    second()
    print("First method")
def second():
    third()
    print("Second method")

def third():
    fourth()
    print("Third method")

def fourth():
    print("fourth method")
first()