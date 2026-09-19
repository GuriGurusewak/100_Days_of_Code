//Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int sum = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for(i = 0; i < rows; i++) {
        printf("Enter the %d elements for Row %d: ", cols, i + 1);
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);
    return 0;
}
