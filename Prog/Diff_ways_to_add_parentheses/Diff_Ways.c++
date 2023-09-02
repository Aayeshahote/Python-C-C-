#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

std::vector<int> diffWaysToCompute(std::string expression) {
    std::vector<int> results;

    // Base case: if the expression is a single number, return it as the only result
    if (std::all_of(expression.begin(), expression.end(), ::isdigit)) {
        results.push_back(std::stoi(expression));
        return results;
    }

    // Iterate through each character in the expression
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];

        // If the character is an operator, split the expression into two parts
        if (c == '+' || c == '-' || c == '*') {
            std::string left_part = expression.substr(0, i);
            std::string right_part = expression.substr(i + 1);

            // Compute results for the left and right parts recursively
            std::vector<int> left_results = diffWaysToCompute(left_part);
            std::vector<int> right_results = diffWaysToCompute(right_part);

            // Combine the results in different ways based on the operator
            for (int left : left_results) {
                for (int right : right_results) {
                    int result;
                    if (c == '+') {
                        result = left + right;
                    } else if (c == '-') {
                        result = left - right;
                    } else if (c == '*') {
                        result = left * right;
                    }
                    results.push_back(result);
                }
            }
        }
    }

    return results;
}

int main() {
    std::string expression = "2-1-1";
    std::vector<int> results = diffWaysToCompute(expression);

    // Print the results
    for (int result : results) {
        std::cout << result << " ";
    }
    std::cout << std::endl;

    return 0;
}

