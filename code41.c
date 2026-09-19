//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int a, b, c, d, e, f;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a;
    c = a % 10;
    d = 1;

    while (a >= 10) {
        a = a / 10;
        d = d * 10;
    }
    e = a;

    f = b - (e * d) - c;
    f = f + (c * d) + e;

    printf("%d\n", f);

    return 0;
}
