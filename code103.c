#include <stdio.h>

int findPivotIndex(int nums[], int numsSize) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        if (leftSum == (totalSum - leftSum - nums[i])) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}

int main() {
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", findPivotIndex(nums1, size1));

    int nums2[] = {1, 2, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", findPivotIndex(nums2, size2));

    int nums3[] = {2, 1, -1};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", findPivotIndex(nums3, size3));

    return 0;
}
