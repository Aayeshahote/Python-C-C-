def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_gcd(nums):
    smallest = min(nums)
    largest = max(nums)
    return gcd(smallest, largest)

# Test cases
nums1 = [2, 5, 6, 9, 10]
print(find_gcd(nums1))  # Output: 2

nums2 = [7, 5, 6, 8, 3]
print(find_gcd(nums2))  # Output: 1

nums3 = [3, 3]
print(find_gcd(nums3))  # Output: 3
