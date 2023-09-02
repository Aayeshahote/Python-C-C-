#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

const char* is_divisible(int n, int m) {
    unsigned long long fact = factorial(n);
    if (fact % m == 0)
        return "divides";
    else
        return "does not divide";
}

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        printf("%d %s %d!\n", m, is_divisible(n, m), n);
    }
    return 0;
}

