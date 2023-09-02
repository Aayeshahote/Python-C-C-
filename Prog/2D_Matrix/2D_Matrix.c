#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrix == NULL || matrixSize == 0 || *matrixColSize == 0) {
        return false;
    }

    int row = 0;
    int col = *matrixColSize - 1;

    while (row < matrixSize && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }

    return false;
}

int main() {
    int matrix[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int* matrixPtr[3] = {matrix[0], matrix[1], matrix[2]};
    int matrixSize = 3;
    int matrixColSize = 4;
    int target = 3;

    if (searchMatrix(matrixPtr, matrixSize, &matrixColSize, target)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}

