//Find the sum of each row of a matrix and store it in an array

#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int row_sums[rows];
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }
    printf("\nThe sum of each row is:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, row_sums[i]);
    }
    return 0;
}
