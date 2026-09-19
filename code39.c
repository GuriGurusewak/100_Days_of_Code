//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, remainder;
    int product = 1;
    int odd = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        remainder = num % 10;

        if (remainder % 2 != 0) {
            product = product * remainder;
            odd = 1;
        }

        num = num / 10;
    }

    if (odd) {
        printf("Product of odd digits = %d\n", product);
    }
    else {
        printf("No odd digits found. Product = 0\n");
    }

    return 0;
}

