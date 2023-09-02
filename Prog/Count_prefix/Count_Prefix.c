#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int countPrefixes(char** words, int wordsSize, char* s) {
    int count = 0;
    
    for (int i = 0; i < wordsSize; i++) {
        if (strncmp(s, words[i], strlen(words[i])) == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char* words[] = {"a", "b", "c", "ab", "bc", "abc"};
    int wordsSize = sizeof(words) / sizeof(words[0]);
    char* s = "abc";
    int result = countPrefixes(words, wordsSize, s);
    printf("%d\n", result);
    
    return 0;
}

