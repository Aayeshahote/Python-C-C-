import math

def is_divisible(n, m):
    factorial = math.factorial(n)
    if factorial % m == 0:
        return f"{m} divides {n}!"
    else:
        return f"{m} does not divide {n}!"

# Read input until EOF (End of File)
while True:
    try:
        n, m = map(int, input().split())
        print(is_divisible(n, m))
    except EOFError:
        break
