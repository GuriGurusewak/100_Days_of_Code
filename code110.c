#include <stdio.h>

void printMaxInWindows(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d", max);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    printf("Output 1:\n");
    printMaxInWindows(arr1, size1, k1);

    int arr2[] = {5, 1, 3, 4, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 1;
    printf("Output 2:\n");
    printMaxInWindows(arr2, size2, k2);

    return 0;
}
