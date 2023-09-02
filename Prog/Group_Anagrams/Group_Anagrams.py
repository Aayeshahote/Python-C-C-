from collections import defaultdict

def groupAnagrams(words):
    # Create a defaultdict to store the groups of anagrams
    anagram_groups = defaultdict(list)

    # Iterate through each word in the input list
    for word in words:
        # Sort the characters of the word to obtain its key
        key = ''.join(sorted(word))

        # Add the word to its corresponding anagram group
        anagram_groups[key].append(word)

    # Return the values of the anagram_groups dictionary as the result
    return list(anagram_groups.values())

# Example usage
words = ["eat", "tea", "tan", "ate", "nat", "bat","eat", "tea", "tan", ]
result = groupAnagrams(words)
print(result)
