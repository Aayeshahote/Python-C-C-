#include <iostream>
#include <algorithm>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_gcd(const std::vector<int>& nums) {
    int smallest = *std::min_element(nums.begin(), nums.end());
    int largest = *std::max_element(nums.begin(), nums.end());

    return gcd(smallest, largest);
}

int main() {
    std::vector<int> nums1 = {2, 5, 6, 9, 10};
    std::cout << find_gcd(nums1) << std::endl;  // Output: 2

    std::vector<int> nums2 = {7, 5, 6, 8, 3};
    std::cout << find_gcd(nums2) << std::endl;  // Output: 1

    std::vector<int> nums3 = {3, 3};
    std::cout << find_gcd(nums3) << std::endl;  // Output: 3

    return 0;
}

