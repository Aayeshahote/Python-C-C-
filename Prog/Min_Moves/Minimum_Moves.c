#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int minMoves2(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int median = nums[numsSize / 2];
    
    int moves = 0;
    for (int i = 0; i < numsSize; i++) {
        moves += abs(nums[i] - median);
    }
    
    return moves;
}

int main() {
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result = minMoves2(nums, numsSize);
    printf("%d\n", result);
    
    return 0;
}

