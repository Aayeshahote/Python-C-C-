#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int* diffWaysToCompute(char* expression, int* returnSize) {
    int* results = NULL;
    int size = 0;

    // Base case: if the expression is a single number, return it as the only result
    int i;
    int is_single_number = 1;
    for (i = 0; expression[i] != '\0'; i++) {
        if (!isdigit(expression[i])) {
            is_single_number = 0;
            break;
        }
    }

    if (is_single_number) {
        size = 1;
        results = (int*)malloc(size * sizeof(int));
        results[0] = atoi(expression);
        *returnSize = size;
        return results;
    }

    // Iterate through each character in the expression
    for (i = 0; expression[i] != '\0'; i++) {
        char c = expression[i];

        // If the character is an operator, split the expression into two parts
        if (c == '+' || c == '-' || c == '*') {
            char* left_part = strndup(expression, i);
            char* right_part = strdup(&expression[i + 1]);

            // Compute results for the left and right parts recursively
            int left_size = 0;
            int* left_results = diffWaysToCompute(left_part, &left_size);

            int right_size = 0;
            int* right_results = diffWaysToCompute(right_part, &

