//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];
    int rowSum[100];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSum[i] = sum; 
    }

    printf("\nRow Sum Array = [");
    for (int i = 0; i < rows; i++) {
        printf("%d", rowSum[i]);
        if (i != rows - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
