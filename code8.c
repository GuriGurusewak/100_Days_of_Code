//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() {
int a;
printf("Enter the number:");
scanf("%d",&a);
int s= a*(a+1)/2;
printf("Sum= %d\n",s);
return 0;
}
