#  @author Daniel Anani https://github.com/dandashino

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

def car(f):
    return f(lambda a,b : a)

def cdr(f):
    return f(lambda a,b : b)

print(car(cons(3,5)))

print(cdr(cons(3,5)))
