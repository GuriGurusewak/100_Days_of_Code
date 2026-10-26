#include <stdio.h>

int find_duplicate(int arr[], int n) {
    static int visited[100000] = {0};
    
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            return arr[i];
        }
        visited[arr[i]] = 1;
    }
    
    return -1;
}

int main() {
    int arr1[] = {1, 3, 3, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: %d\n", find_duplicate(arr1, n1));

    int arr2[] = {1, 2, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: %d\n", find_duplicate(arr2, n2));

    int arr3[] = {0, 4, 1, 1, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: %d\n", find_duplicate(arr3, n3));

    return 0;
}
