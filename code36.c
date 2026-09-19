//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    while(n1 != n2) {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    printf("HCF is: %d\n", n1);

    return 0;
}
