//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double num, den;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            num = (2 * i) - 1;
            den = (2 * i) - 2;
            sum += num / den;
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
