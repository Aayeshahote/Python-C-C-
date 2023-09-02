#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int maxProduct(char** words, int wordsSize) {
    int max_product = 0;
    
    for (int i = 0; i < wordsSize; i++) {
        for (int j = i + 1; j < wordsSize; j++) {
            bool has_common = false;
            for (int k = 0; k < strlen(words[j]); k++) {
                if (strchr(words[i], words[j][k]) != NULL) {
                    has_common = true;
                    break;
                }
            }
            
            if (!has_common) {
                int product = strlen(words[i]) * strlen(words[j]);
                max_product = (product > max_product) ? product : max_product;
            }
        }
    }
    
    return max_product;
}

int main() {
    char* words[] = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    int wordsSize = sizeof(words) / sizeof(words[0]);
    int result = maxProduct(words, wordsSize);
    printf("%d\n", result);
    
    return 0;
}

