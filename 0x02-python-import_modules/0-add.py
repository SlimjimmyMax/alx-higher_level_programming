#!/usr/bin/python3
<<<<<<< HEAD
a = 1
b = 2

if __name__ == "__main__":
    from add_0 import add
    print(f"{a} + {b} = {add(a, b)}")
=======
def add(a, b):
    """My addition function

    Args:
        a: first integer
        b: second integer

    Returns:
        The return value. a + b
    """
    return (a + b)

a = 1
b = 2
print("{:d} + {:d} = {:d}".format(a, b, add(a, b)))
>>>>>>> f8a79bc5e83f46cb8e25691f2c69dbe526fc4457
