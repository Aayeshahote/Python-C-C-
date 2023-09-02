#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100
#define MAX_WORDS 100

typedef struct AnagramGroup {
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int size;
} AnagramGroup;

int compareChars(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int compareAnagramGroups(const void* a, const void* b) {
    AnagramGroup* groupA = (AnagramGroup*)a;
    AnagramGroup* groupB = (AnagramGroup*)b;
    return strcmp(groupA->words[0], groupB->words[0]);
}

void groupAnagrams(char words[][MAX_WORD_LENGTH], int wordsSize, AnagramGroup* anagramGroups, int* numGroups) {
    int i;

    // Sort characters in each word
    for (i = 0; i < wordsSize; i++) {
        qsort(words[i], strlen(words[i]), sizeof(char), compareChars);
    }

    // Sort the words
    qsort(words, wordsSize, sizeof(words[0]), compareAnagramGroups);

    // Group the anagrams
    *numGroups = 0;
    for (i = 0; i < wordsSize; i++) {
        if (i == 0 || strcmp(words[i], words[i - 1]) != 0) {
            (*numGroups)++;
        }
        strcpy(anagramGroups[*numGroups - 1].words[anagramGroups[*numGroups - 1].size++], words[i]);
    }
}

void printAnagramGroups(AnagramGroup* anagramGroups, int numGroups) {
    int i, j;
    for (i = 0; i < numGroups; i++) {
        printf("[");
        for (j = 0; j < anagramGroups[i].size; j++) {
            printf("%s", anagramGroups[i].words[j]);
            if (j < anagramGroups[i].size - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }
}

int main() {
    char words[MAX_WORDS][MAX_WORD_LENGTH] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int wordsSize = 6;
    AnagramGroup anagramGroups[MAX_WORDS];
    int numGroups;

    groupAnagrams(words, wordsSize, anagramGroups, &numGroups);
    printAnagramGroups(anagramGroups, numGroups);

    return 0;
}

