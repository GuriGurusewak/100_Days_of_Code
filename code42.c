//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() {
    int a, b, c;

    scanf("%d", &a);

    c = 0;

    for (b = 1; b < a; b++) {
        if (a % b == 0) {
            c = c + b;
        }
    }

    if (c == a && a > 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
