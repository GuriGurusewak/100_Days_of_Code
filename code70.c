//Rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int temp[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    printf("Rotated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

return 0;
}
