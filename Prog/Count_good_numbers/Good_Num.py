def count_good_digit_strings(n):
    # Define a helper function to check if a number is prime
    def is_prime(num):
        if num in [2, 3, 5, 7]:
            return True
        return False

    def count_good_strings(length, position):
        # Base case: if the current position exceeds the length, return 1
        if position >= length:
            return 1
        
        # Initialize the count
        count = 0

        # Check if the current position is even
        if position % 2 == 0:
            for digit in [0, 2, 4, 6, 8]:
                count += count_good_strings(length, position + 1)
        else:
            for digit in [2, 3, 5, 7]:
                count += count_good_strings(length, position + 1)
        
        return count % (10**9 + 7)

    return count_good_strings(n, 0)


# Test the function
n = 4
total_good_strings = count_good_digit_strings(n)
print("Total number of good digit strings of length", n, ":", total_good_strings)
