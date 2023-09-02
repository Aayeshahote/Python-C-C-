#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int findPairs(int* nums, int numsSize, int k) {
    int count = 0;
    
    // Create an array to store the frequency of each number
    int* numFreq = (int*)calloc(2001, sizeof(int));  // Assuming the range of numbers is [-1000, 1000]
    
    // Count the frequency of each number in the array
    for (int i = 0; i < numsSize; i++) {
        numFreq[nums[i] + 1000]++;
    }
    
    // Iterate through the array
    for (int i = 0; i < numsSize; i++) {
        if (k == 0) {
            if (numFreq[nums[i] + 1000] > 1) {
                count++;
                numFreq[nums[i] + 1000] = 0;  // Mark as visited to avoid duplicate pairs
            }
        } else {
            if (numFreq[nums[i] + k + 1000] > 0) {
                count++;
                numFreq[nums[i] + k + 1000] = 0;  // Mark as visited to avoid duplicate pairs
            }
        }
    }
    
    free(numFreq);  // Free the memory allocated for numFreq
    
    return count;
}

int main() {
    int nums[] = {3, 1, 4, 1, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    int result = findPairs(nums, numsSize, k);
    printf("%d\n", result);
    
    return 0;
}

