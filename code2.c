//WAP to input two numbers and displa their sum, difference, product and quotient
#include <stdio.h>
int main() {
int a,b;
printf("Enter the digits:");
scanf ("%d %d", &a, &b);
int s=a+b;
int d=a-b;
int p=a*b;
int q=a/b;
printf("sum =%d, Diff=%d, Product=%d, Quotient=%d\n",s,d,p,q);
return 0;
}
