#include <stdio.h>

void printNextGreaterElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        printf("%d", nextGreater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1:\n");
    printNextGreaterElement(arr1, size1);

    int arr2[] = {6, 8, 0, 1, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2:\n");
    printNextGreaterElement(arr2, size2);

    int arr3[] = {1, 2, 3, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3:\n");
    printNextGreaterElement(arr3, size3);

    int arr4[] = {5, 4, 3, 1};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Output 4:\n");
    printNextGreaterElement(arr4, size4);

    return 0;
}
