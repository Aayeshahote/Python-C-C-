#include <stdio.h>

int is_subsequence(const char* s, const char* t) {
    int i = 0, j = 0;  // Pointers for s and t

    while (s[i] != '\0' && t[j] != '\0') {
        if (s[i] == t[j]) {
            i++;  // Move pointer for s
        }
        j++;  // Move pointer for t
    }

    return s[i] == '\0';  // Check if all characters of s are found
}

int main() {
    const char* s1 = "abc";
    const char* t1 = "ahbgdc";
    printf("%d\n", is_subsequence(s1, t1));  // Output: 1 (True)

    const char* s2 = "axc";
    const char* t2 = "ahbgdc";
    printf("%d\n", is_subsequence(s2, t2));  // Output: 0 (False)

    return 0;
}

