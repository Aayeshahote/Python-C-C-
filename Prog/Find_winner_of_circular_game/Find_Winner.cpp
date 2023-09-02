#include <iostream>

int findWinner(int n, int k) {
    int winner = 0;  // The winner's index
    for (int i = 1; i <= n; i++) {
        winner = (winner + k) % i;
    }
    return winner + 1;  // Adding 1 to convert index to friend number
}

int main() {
    int n, k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int winner = findWinner(n, k);
    std::cout << "Winner for n = " << n << ", k = " << k << " is: " << winner << std::endl;

    return 0;
}

