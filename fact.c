#include <stdio.h>
void calcfact(int n);
int main() {
int num;
printf("Enter the number:");
scanf("%d", &num);
calcfact(num);
return 0;
}
void calcfact(int n){
int fact=1;
for (int i=1; i<=n; i++){
fact *=i;
}
printf("Factorial of the entered number: %d\n", fact);
}
