#include <iostream>

bool is_prime(int num) {
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        return true;
    }
    return false;
}

int count_good_strings(int length, int position) {
    if (position >= length) {
        return 1;
    }

    int count = 0;

    if (position % 2 == 0) {
        for (int digit = 0; digit <= 8; digit += 2) {
            count += count

