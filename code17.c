//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, e;
    printf("Enter coefficient as per the equation ax^2+bx+c : ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4.0f * a * c);

    if (d > 0) {
        d = (-b + sqrt(d)) / (2.0f * a);
        e = (-b - sqrt((b * b) - (4.0f * a * c))) / (2.0f * a);

        if (d >= e) {
            printf("Roots are real and different: %.0f, %.0f\n", d, e);
        } else {
            printf("Roots are real and different: %.0f, %.0f\n", e, d);
        }
    }
    else if (d == 0) {
        e = -b / (2.0f * a);
        printf("Roots are real and same: %.0f\n", e);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}
