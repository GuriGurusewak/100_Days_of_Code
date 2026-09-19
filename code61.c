//Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array values:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int valueToFind;
    printf("Enter the value to find: ");
    scanf("%d", &valueToFind);
    int foundIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == valueToFind) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        printf("Found at index: %d\n", foundIndex);
    } else {
        printf("Value not found in the array.\n");
    }
return 0;
}
