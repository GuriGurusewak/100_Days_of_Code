//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Diagonal traversal output:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            for (int i = rows - 1; i >= 0; i--) {
                int j = d - i;
                if (j >= 0 && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        else {
            for (int i = 0; i < rows; i++) {
                int j = d - i;
                if (j >= 0 && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
