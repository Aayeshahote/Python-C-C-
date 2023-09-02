#include <stdio.h>

int find_smallest_multiple(int n) {
    int remainder = 0;
    int digits = 1;

    while (1) {
        remainder = (remainder * 10 + 1) % n;
        if (remainder == 0) {
            return digits;
        }
        digits += 1;
    }
}

int main() {
    int input_list[] = {3, 7, 9901};
    int num_inputs = sizeof(input_list) / sizeof(input_list[0]);

    for (int i = 0; i < num_inputs; i++) {
        int n = input_list[i];
        if (n % 2 != 0 && n % 5 != 0) {
            int result = find_smallest_multiple(n);
            printf("%d\n", result);
        }
    }

    return 0;
}

