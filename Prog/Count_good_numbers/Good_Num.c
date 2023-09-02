#include <stdio.h>

int is_prime(int num) {
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        return 1;
    }
    return 0;
}

int count_good_strings(int length, int position) {
    if (position >= length) {
        return 1;
    }

    int count = 0;

    if (position % 2 == 0) {
        for (int digit = 0; digit <= 8; digit += 2) {
            count += count_good_strings(length, position + 1);
        }
    } else {
        for (int digit = 2; digit <= 7; digit += 2) {
            if (is_prime(digit)) {
                count += count_good_strings(length, position + 1);
            }
        }
    }

    return count % 1000000007;
}

int main() {
    int n = 4;
    int total_good_strings = count_good_strings(n, 0);
    printf("Total number of good digit strings of length %d: %d\n", n, total_good_strings);

    return 0;
}

