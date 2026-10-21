#include <stdio.h>

void productExceptSelf(int nums[], int n) {
    int answer[n];

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1:\n");
    productExceptSelf(nums1, size1);

    int nums2[] = {-1, 1, 0, -3, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2:\n");
    productExceptSelf(nums2, size2);

    return 0;
}
