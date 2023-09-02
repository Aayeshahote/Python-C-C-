def maxProduct(words):
    max_product = 0
    
    for i in range(len(words)):
        for j in range(i + 1, len(words)):
            if not any(letter in words[i] for letter in words[j]):
                max_product = max(max_product, len(words[i]) * len(words[j]))
    
    return max_product

# Example usage
words = ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
result = maxProduct(words)
print(result)
