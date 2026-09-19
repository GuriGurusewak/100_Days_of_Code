//Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = -1;
    int second_largest = -1;
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if(second_largest == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
return 0;
}
