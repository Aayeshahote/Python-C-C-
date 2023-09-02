#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_gcd(int nums[], int size) {
    int smallest = nums[0];
    int largest = nums[0];

    for (int i = 1; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return gcd(smallest, largest);
}

int main() {
    int nums1[] = {2, 5, 6, 9, 10};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", find_gcd(nums1, size1));  // Output: 2

    int nums2[] = {7, 5, 6, 8, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", find_gcd(nums2, size2));  // Output: 1

    int nums3[] = {3, 3};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("%d\n", find_gcd(nums3, size3));  // Output: 3

    return 0;
}

