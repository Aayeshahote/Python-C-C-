def find_winner(n, k):
    winner = 0  # The winner's index
    for i in range(1, n + 1):
        winner = (winner + k) % i
    return winner + 1  # Adding 1 to convert index to friend number


n1 = int(input("Enter the value of n: "))
k1 = int(input("Enter the value of k: "))

winner = find_winner(n1, k1)
print("Winner for n =", n1, ", k =", k1, "is:", winner)
