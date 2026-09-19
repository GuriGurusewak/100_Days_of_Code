//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
int a,b;
printf("Enter numbers to be swapped:");
scanf("%d %d",&a, &b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap: %d %d\n",a,b);
return 0;
}
