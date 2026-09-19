#include <stdio.h>

int main() {
    int year;

    // Take the year as input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // 1. Must be divisible by 4
    // 2. If divisible by 100, it must ALSO be divisible by 400
    if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
            }
    else {
                printf("%d is not a leap year.\n", year);
           }
return 0;
}
