//Write a program to calculate the area and circumference of a circle given its radius
#include <stdio.h>
int main() {
int r;
printf("Enter the radius:");
scanf ("%d", &r);
double area=3.14*r*r;
double circumference=2*3.14*r;
printf("Area= %.2f, Circumference= %.2f\n", area, circumference);
return 0;
}
