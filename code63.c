//Merge two arrays.

#include <stdio.h>
int main() {
    int n1, n2, n3;

    printf("Enter the size of Array 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the values: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of Array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the values: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    n3 = n1 + n2;
    int merged[n3];
    int k = 0;

   for (int i = 0; i < n1; i++) {
        merged[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < n2; i++) {
        merged[k] = arr2[i];
        k++;
    }

    printf("\nThe merged array is: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
