//Write a program to convert temperature from Celsius to Fahrenheit
#include <stdio.h>
int main() {
int c;
printf("Enter temprature in celcius:");
scanf("%d", &c);
int f=(c*9/5)+32;
printf("Temprature in fahrenheit: %d\n,",f);
return 0;
}
