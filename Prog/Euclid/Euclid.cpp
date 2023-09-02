#include <iostream>

void extended_gcd(int a, int b, int& d, int& x, int& y) {
    if (b == 0) {
        d = a;
        x = 1;
        y = 0;
        return;
    }

    int d1, x1, y1;
    extended_gcd(b, a % b, d1, x1, y1);
    d = d1;
    x = y1;
    y = x1 - (a / b) * y1;
}

int main() {
    int a, b;
    while (std::cin >> a >> b) {
        int d, x, y;
        extended_gcd(a, b, d, x, y);
        std::cout << x << " " << y << " " << d << std::endl;
    }
    return 0;
}

