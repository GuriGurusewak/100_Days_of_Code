//Add two matrices.

#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols];
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < rows; i++) {
        printf("Enter values for first matrix: ");
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    int rows2, cols2;
    printf("\nEnter rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        printf("Enter values for second matrix: ");
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nResultant Matrix (Sum):\n");
    int sum[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
