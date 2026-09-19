//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int originalNum, num, lastDigit, sum = 0;
    int i, factorial;

     printf("Enter an integer: ");
    scanf("%d", &originalNum);

    num = originalNum;

    while (num > 0) {
        lastDigit = num % 10;

        factorial = 1;
        for (i = 1; i <= lastDigit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        num = num / 10;
    }

    if (sum == originalNum && originalNum > 0) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}

