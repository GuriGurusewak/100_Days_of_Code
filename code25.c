//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    int num1, num2, result;
    char op;
    printf("Enter the numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Enter the operator:");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d\n", result);
            } else {
                printf("Error: Modulo by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
