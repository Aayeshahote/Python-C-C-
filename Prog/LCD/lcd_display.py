def print_lcd(s, n):
    # Define the patterns for each digit
    patterns = {
        0: [" - ", "| |", "   ", "| |", " - "],
        1: ["   ", " | ", "   ", " | ", "   "],
        2: [" - ", "  |", " - ", "|  ", " - "],
        3: [" - ", "  |", " - ", "  |", " - "],
        4: ["   ", "| |", " - ", "  |", "   "],
        5: [" - ", "|  ", " - ", "  |", " - "],
        6: [" - ", "|  ", " - ", "| |", " - "],
        7: [" - ", "  |", "   ", "  |", "   "],
        8: [" - ", "| |", " - ", "| |", " - "],
        9: [" - ", "| |", " - ", "  |", " - "],
    }

    # Iterate over each row of the pattern and print the corresponding digit for each row
    for row in range(5):
        for i in range(len(s)):
            digit = int(s[i])
            pattern = patterns[digit][row]
            # Print the pattern with the appropriate number of spaces between digits
            print(pattern, end=" " if i != len(s)-1 else "")
        print()

print_lcd("12345", 2)
print_lcd("67890", 3)