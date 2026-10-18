#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actualCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actualCount++;
        }
    }

    if (actualCount > n / 2) {
        return candidate;
    }

    return -1;
}

int main() {
    int nums1[] = {3, 2, 3};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", findMajorityElement(nums1, size1));

    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", findMajorityElement(nums2, size2));

    int nums3[] = {2, 2, 1, 1, 1, 2, 2, 3};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", findMajorityElement(nums3, size3));

    return 0;
}
