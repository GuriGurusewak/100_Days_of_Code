//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, remainder;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n = n / 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
