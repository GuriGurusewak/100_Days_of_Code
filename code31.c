//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int num;
    int remainder[32];
    int i = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", remainder[j]);
    }
    printf("\n");

    return 0;
}

