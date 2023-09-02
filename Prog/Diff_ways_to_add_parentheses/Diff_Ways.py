def diffWaysToCompute(expression):
    results = []

    # Base case: if the expression is a single number, return it as the only result
    if expression.isdigit():
        return [int(expression)]

    # Iterate through each character in the expression
    for i in range(len(expression)):
        char = expression[i]

        # If the character is an operator, split the expression into two parts
        if char in ['+', '-', '*']:
            left_parts = diffWaysToCompute(expression[:i])
            right_parts = diffWaysToCompute(expression[i + 1:])

            # Combine the results in different ways based on the operator
            for left in left_parts:
                for right in right_parts:
                    if char == '+':
                        results.append(left + right)
                    elif char == '-':
                        results.append(left - right)
                    elif char == '*':
                        results.append(left * right)

    return results


# Test the function
expression = "2-1-1"
results = diffWaysToCompute(expression)
print(results)