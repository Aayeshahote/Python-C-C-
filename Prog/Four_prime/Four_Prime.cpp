#include <iostream>
#include <vector>
#include <cmath>

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

std::vector<int> find_four_primes(int n) {
    std::vector<int> primes;
    for (int i = 2; i < n; i++) {
        if (is_prime(i)) {
            for (int j = i; j < n; j++) {
                if (is_prime(j)) {
                    for (int k = j; k < n; k++) {
                        if (is_prime(k)) {
                            for (int l = k; l < n; l++) {
                                if (is_prime(l) && i + j + k + l == n) {
                                    primes.push_back(i);
                                    primes.push_back(j);
                                    primes.push_back(k);
                                    primes.push_back(l);
                                    return primes;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return primes;
}

int main() {
    int n;
    while (std::cin >> n) {
        std::vector<int> result = find_four_primes(n);
        if (result.empty()) {
            std::cout << "Impossible." << std::endl;
        } else {
            for (int i = 0; i < result.size(); i++) {
                std::cout << result[i] << " ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}

