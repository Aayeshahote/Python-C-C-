#include <iostream>
#include <vector>

int find_smallest_multiple(int n) {
    int remainder = 0;
    int digits = 1;

    while (true) {
        remainder = (remainder * 10 + 1) % n;
        if (remainder == 0) {
            return digits;
        }
        digits += 1;
    }
}

int main() {
    std::vector<int> input_list = {3, 7, 9901};

    for (int n : input_list) {
        if (n % 2 != 0 && n % 5 != 0) {
            int result = find_smallest_multiple(n);
            std::cout << result << std::endl;
        }
    }

    return 0;
}

