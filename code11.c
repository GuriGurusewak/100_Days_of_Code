//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main () {
int num;
printf("Enter value of Integer :");
scanf("%d",&num);
if(num%2==0) {
	printf("num is even\n");
	}
else {
	printf("num is odd\n");
	}
return 0;
}
