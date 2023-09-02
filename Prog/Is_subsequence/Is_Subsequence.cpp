#include <iostream>
#include <cstring>

bool is_subsequence(const std::string& s, const std::string& t) {
    int i = 0, j = 0;  // Pointers for s and t

    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;  // Move pointer for s
        }
        j++;  // Move pointer for t
    }

    return i == s.length();  // Check if all characters of s are found
}

int main() {
    std::string s1 = "abc";
    std::string t1 = "ahbgdc";
    std::cout << is_subsequence(s1, t1) << std::endl;  // Output: 1 (True)

    std::string s2 = "axc";
    std::string t2 = "ahbgdc";
    std::cout << is_subsequence(s2, t2) << std::endl;  // Output: 0 (False)

    return 0;
}

