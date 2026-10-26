#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currMax = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > currMax + arr[i]) {
            currMax = arr[i];
        } else {
            currMax = currMax + arr[i];
        }

        if (currMax > maxSoFar) {
            maxSoFar = currMax;
        }
    }

    return maxSoFar;
}

int main() {
    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1);
    printf("Output 1: %d\n", maxSubarraySum(arr1, size1));

    int arr2[] = {-2, -4};
    int size2 = sizeof(arr2) / sizeof(arr2);
    printf("Output 2: %d\n", maxSubarraySum(arr2, size2));

    int arr3[] = {5, 4, 1, 7, 8};
    int size3 = sizeof(arr3) / sizeof(arr3);
    printf("Output 3: %d\n", maxSubarraySum(arr3, size3));

    return 0;
}
