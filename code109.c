#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int sum = 0, maxSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum subarray sum of size %d: %d\n", k, maxSum);

    return 0;
}
