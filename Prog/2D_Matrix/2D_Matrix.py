def searchMatrix(matrix, target):
    if matrix is None or len(matrix) == 0 or len(matrix[0]) == 0:
        return False

    rows = len(matrix)
    cols = len(matrix[0])
    row = 0
    col = cols - 1

    while row < rows and col >= 0:
        if matrix[row][col] == target:
            return True
        elif matrix[row][col] > target:
            col -= 1
        else:
            row += 1

    return False

matrix = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]]
target = 3
print(searchMatrix(matrix, target))  # Output: True
