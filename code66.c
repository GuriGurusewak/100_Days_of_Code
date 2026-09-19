//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int n, vd, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter array element: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to be added: ");
    scanf("%d", &vd);
    i = n - 1;
    while (i >= 0 && arr[i] > vd) {
        arr[i + 1] = arr[i];
        i--;
    }
    printf("Edited array: ");
    arr[i + 1] = vd;
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}
