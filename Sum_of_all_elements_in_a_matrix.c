#include <stdio.h>

int sumOfElements(int matrix[][3], int rows, int cols) {
    int totalSum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            totalSum += matrix[i][j];
        }
    }
    return totalSum;
}

int main() {
    int matrix[3][3];
    int rows, cols;

    scanf("%d", &rows);

    scanf("%d", &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int totalSum = sumOfElements(matrix, rows, cols);
    printf("%d
", totalSum);

    return 0;
}