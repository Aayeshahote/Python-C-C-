#include <iostream>
#include <vector>

int count_lost_working_days(int N, std::vector<int>& hartal_parameters) {
    int working_days = 0;

    for (int day = 1; day <= N; day++) {
        if (day % 7 != 6 && day % 7 != 0) { // Check if it's not a Friday or Saturday
            for (int parameter : hartal_parameters) {
                if (day % parameter == 0) {
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
    std::vector<int> hartal_parameters = {3, 4, 8};

    int lost_working_days = count_lost_working_days(N, hartal_parameters);
    std::cout << "Number of working days lost: " << lost_working_days << std::endl;

    return 0;
}

