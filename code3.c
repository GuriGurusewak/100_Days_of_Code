//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
int a,b;
printf("Enter Length and Breadth:");
scanf ("%d %d", &a, &b);
int area=a*b;
int perimeter= 2*(a+b);
printf("Area= %d, Perimeter=%d\n", area, perimeter);
return 0;
}
