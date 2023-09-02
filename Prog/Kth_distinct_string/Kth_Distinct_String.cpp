#include <iostream>
#include <vector>
#include <unordered_map>

std::string kth_distinct_string(std::vector<std::string>& arr, int k) {
    std::vector<std::string> distinct_strings;
    std::unordered_map<std::string, int> string_count;

    for (const std::string& str : arr) {
        if (string_count.find(str) != string_count.end()) {
            string_count[str]++;
        }
        else {
            string_count[str] = 1;
            distinct_strings.push_back(str);
        }
    }

    if (k <= distinct_strings.size()) {
        return distinct_strings[k - 1];
    }
    else {
        return "";
    }
}

int main() {
    std::vector<std::string> arr1 = { "d", "b", "c", "b", "c", "a" };
    int k1 = 2;
    std::cout << kth_distinct_string(arr1, k1) << std::endl;  // Output: "a"

    std::vector<std::string> arr2 = { "aaa", "aa", "a" };
    int k2 = 1;
    std::cout << kth_distinct_string(arr2, k2) << std::endl;  // Output: "aaa"

    std::vector<std::string> arr3 = { "a", "b", "a" };
    int k3 = 3;
    std::cout << kth_distinct_string(arr3, k3) << std::endl;  // Output: ""

    return 0;
}

