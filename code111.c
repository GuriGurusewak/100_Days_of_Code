#include <stdio.h>

void printFirstNegative(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNegative = arr[i + j];
                break;
            }
        }
        printf("%d", firstNegative);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {-8, 2, 3, -6, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Output 1:\n");
    printFirstNegative(arr1, size1, k1);

    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("Output 2:\n");
    printFirstNegative(arr2, size2, k2);

    int arr3[] = {12, 1, 3, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;
    printf("Output 3:\n");
    printFirstNegative(arr3, size3, k3);

    return 0;
}
