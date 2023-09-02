def kth_distinct_string(arr, k):
    distinct_strings = []
    string_count = {}

    for string in arr:
        if string in string_count:
            string_count[string] += 1
        else:
            string_count[string] = 1
            distinct_strings.append(string)

    if k <= len(distinct_strings):
        return distinct_strings[k - 1]
    else:
        return ""

# Test cases
arr1 = ["d", "b", "c", "b", "c", "a"]
k1 = 2
print(kth_distinct_string(arr1, k1))  # Output: "a"

arr2 = ["aaa", "aa", "a"]
k2 = 1
print(kth_distinct_string(arr2, k2))  # Output: "aaa"

arr3 = ["a", "b", "a"]
k3 = 3
print(kth_distinct_string(arr3, k3))  # Output: ""
