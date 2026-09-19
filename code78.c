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
    
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }
    
    printf("Sum of main diagonal elements: %d\n", sum);
    
    return 0;
}
