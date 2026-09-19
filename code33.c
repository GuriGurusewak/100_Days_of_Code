//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int num, originalNum, temp, remainder;
    int digits = 0;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    temp = num;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

     temp = num;
    while (temp > 0) {
        remainder = temp % 10;

        int powerProduct = 1;
        for (int i = 0; i < digits; i++) {
            powerProduct = powerProduct * remainder;
        }

        sum = sum + powerProduct;
        temp = temp / 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
