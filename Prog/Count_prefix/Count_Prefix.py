def countPrefixes(words, s):
    count = 0
    
    for word in words:
        if s.startswith(word):
            count += 1
    
    return count

# Example usage
words = ["a", "b", "c", "ab", "bc", "abc"]
s = "abc"
result = countPrefixes(words, s)
print(result)
