#include <stdio.h>

int main() {
    int nums[100], n, i;
    int total = 0, sum = 0, missing;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
