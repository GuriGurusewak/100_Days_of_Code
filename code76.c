#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int isSymmetric = 1;
    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter the elements row by row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d (%d elements separated by space): ", i + 1, cols);
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }
    printf("\nOutput:\n");
    if (isSymmetric == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
