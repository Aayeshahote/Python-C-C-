#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int* find_four_primes(int n) {
    int* primes = (int*)malloc(4 * sizeof(int));
    for (int i = 2; i < n; i++) {
        if (is_prime(i)) {
            for (int j = i; j < n; j++) {
                if (is_prime(j)) {
                    for (int k = j; k < n; k++) {
                        if (is_prime(k)) {
                            for (int l = k; l < n; l++) {
                                if (is_prime(l) && i + j + k + l == n) {
                                    primes[0] = i;
                                    primes[1] = j;
                                    primes[2] = k;
                                    primes[3] = l;
                                    return primes;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    free(primes);
    return NULL;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int* result = find_four_primes(n);
        if (result == NULL) {
            printf("Impossible.\n");
        } else {
            printf("%d %d %d %d\n", result[0], result[1], result[2], result[3]);
            free(result);
        }
    }
    return 0;
}

