def find_smallest_multiple(n):
    remainder = 0
    digits = 1

    while True:
        remainder = (remainder * 10 + 1) % n
        if remainder == 0:
            return digits
        digits += 1

# Example input as a list
input_list = [3, 7, 9901]

for n in input_list:
    if n % 2 != 0 and n % 5 != 0:
        result = find_smallest_multiple(n)
        print(result)
