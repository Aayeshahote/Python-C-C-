#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 100

char* kth_distinct_string(char arr[][MAX_STR_LEN], int n, int k) {
    char distinct_strings[n][MAX_STR_LEN];
    int string_count[n];
    int distinct_count = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < distinct_count; j++) {
            if (strcmp(arr[i], distinct_strings[j]) == 0) {
                string_count[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(distinct_strings[distinct_count], arr[i]);
            string_count[distinct_count] = 1;
            distinct_count++;
        }
    }

    if (k <= distinct_count) {
        return distinct_strings[k - 1];
    }
    else {
        return "";
    }
}

int main() {
    char arr1[][MAX_STR_LEN] = { "d", "b", "c", "b", "c", "a" };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("%s\n", kth_distinct_string(arr1, n1, k1));  // Output: "a"

    char arr2[][MAX_STR_LEN] = { "aaa", "aa", "a" };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 1;
    printf("%s\n", kth_distinct_string(arr2, n2, k2));  // Output: "aaa"

    char arr3[][MAX_STR_LEN] = { "a", "b", "a" };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;
    printf("%s\n", kth_distinct_string(arr3, n3, k3));  // Output: ""

    return 0;
}

