//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
	{
        if (a == b && b == c)
	{
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || a == c)
	{
            printf("Isosceles triangle\n");
        }
        else
	{
            printf("Scalene triangle\n");
        }

    }
    else
    {
    printf("The entered sides do not form a valid triangle.\n");
    }

    return 0;
}

