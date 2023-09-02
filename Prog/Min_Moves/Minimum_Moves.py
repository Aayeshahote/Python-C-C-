def minMoves2(nums):
    nums.sort()  # Sort the array
    median = nums[len(nums) // 2]  # Find the median element
    
    moves = 0
    for num in nums:
        moves += abs(num - median)  # Calculate the absolute difference to the median
    
    return moves

# Example usage
nums = [1, 2, 3]
result = minMoves2(nums)
print(result)
