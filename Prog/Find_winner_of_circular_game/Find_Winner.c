#include <stdio.h>

int findWinner(int n, int k) {
    int winner = 0;  // The winner's index
    for (int i = 1; i <= n; i++) {
        winner = (winner + k) % i;
    }
    return winner + 1;  // Adding 1 to convert index to friend number
}

int main() {
    int n, k;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int winner = findWinner(n, k);
    printf("Winner for n = %d, k = %d is: %d\n", n, k, winner);

    return 0;
}

