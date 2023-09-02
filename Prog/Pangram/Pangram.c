#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPangram(const char* sentence) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int alphabetSize = strlen(alphabet);

    int charCount[26] = { 0 };

    for (int i = 0; sentence[i] != '\0'; i++) {
        char lowercaseChar = tolower(sentence[i]);
        char* foundChar = strchr(alphabet, lowercaseChar);
        if (foundChar != NULL) {
            int index = foundChar - alphabet;
            charCount[index]++;
        }
    }

    for (int i = 0; i < alphabetSize; i++) {
        if (charCount[i] == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const char* sentence1 = "thequickbrownfoxjumpsoverthelazydog";
    printf("%s\n", isPangram(sentence1) ? "true" : "false");  // Output: true

    const char* sentence2 = "dbatu";
    printf("%s\n", isPangram(sentence2) ? "true" : "false");  // Output: false

    return 0;
}

