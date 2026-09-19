#include <stdio.h>
int main() {
    int rows, cols;    
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isDistinct = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
            }
        }
    }
    if (isDistinct == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
