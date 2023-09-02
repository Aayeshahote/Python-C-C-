#include <stdio.h>

int count_lost_working_days(int N, int* hartal_parameters, int num_parameters) {
    int working_days = 0;

    for (int day = 1; day <= N; day++) {
        if (day % 7 != 6 && day % 7 != 0) { // Check if it's not a Friday or Saturday
            for (int i = 0; i < num_parameters; i++) {
                if (day % hartal_parameters[i] == 0) {
                    working_days++;
                    break;
                }
            }
        }
    }

    return working_days;
}

int main() {
    int N = 14;
    int hartal_parameters[] = {3, 4, 8};
    int num_parameters = sizeof(hartal_parameters) / sizeof(hartal_parameters[0]);

    int lost_working_days = count_lost_working_days(N, hartal_parameters, num_parameters);
    printf("Number of working days lost: %d\n", lost_working_days);

    return 0;
}

