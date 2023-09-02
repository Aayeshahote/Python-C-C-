def extended_gcd(a, b):
    if b == 0:
        return a, 1, 0

    d, x1, y1 = extended_gcd(b, a % b)
    x = y1
    y = x1 - (a // b) * y1

    return d, x, y


# Read input until EOF (End of File)
while True:
    try:
        a, b = list(map(int, input().split()))
        d, x, y = extended_gcd(a, b)
        print(x, y, d)
    except EOFError:
        break
