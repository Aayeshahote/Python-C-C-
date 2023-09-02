def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def find_four_primes(n):
    primes = []
    for i in range(2, n):
        if is_prime(i):
            for j in range(i, n):
                if is_prime(j):
                    for k in range(j, n):
                        if is_prime(k):
                            for l in range(k, n):
                                if is_prime(l) and i + j + k + l == n:
                                    primes.append(i)
                                    primes.append(j)
                                    primes.append(k)
                                    primes.append(l)
                                    return primes
    return None

# Read input until end of file
while True:
    try:
        n = int(input())
        result = find_four_primes(n)
        if result is None:
            print("Impossible.")
        else:
            print(" ".join(str(num) for num in result))
    except EOFError:
        break
