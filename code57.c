//Find the sum of array elements.

#include <stdio.h>
int main() {
    int n, sum = 0;
   printf("Enter the size of array:");
   scanf("%d", &n);
    int arr[n];
   printf("Enter the array values:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
return 0;
}
