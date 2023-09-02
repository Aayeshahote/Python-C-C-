def findPairs(nums, k):
    num_freq = {}
    count = 0
    
    for num in nums:
        num_freq[num] = num_freq.get(num, 0) + 1
    
    for num in num_freq:
        if k == 0:
            if num_freq[num] > 1:
                count += 1
        else:
            if num + k in num_freq:
                count += 1
    
    return count

# Example usage
nums = [3, 1, 4, 1, 5]
k = 2
result = findPairs(nums, k)
print(result)
