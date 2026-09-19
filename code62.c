//Reverse an array without taking extra space.

#include <stdio.h>
int main() {
    int n;
    printf("Enter te size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array values:");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Swapped array:");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
return 0;
}
