def print_twice(name):
    print(name)
    print(name)

def do_twice(name):
    print_twice(name)
    print_twice(name)
    
do_twice(print_twice, "spam")


def do_four(f, val):
    do_twice(val)
    do_twice(val)


# def print_twice(name):
#     print(name)
#     print(name)
# def do_twice(name):
#     f(name)
#     f(name)

# do_four(print_twice, "spam")