def is_subsequence(s, t):
    i, j = 0, 0  # Pointers for s and t

    while i < len(s) and j < len(t):
        if s[i] == t[j]:
            i += 1  # Move pointer for s
        j += 1  # Move pointer for t

    return i == len(s)  # Check if all characters of s are found

# Test cases
s1 = "abc"
t1 = "ahbgdc"
print(is_subsequence(s1, t1))  # Output: True

s2 = "axc"
t2 = "ahbgdc"
print(is_subsequence(s2, t2))  # Output: False
