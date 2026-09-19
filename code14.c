//Write a program to input charachter and ceck whether it is a vowel or consonant using if-else
#include <stdio.h>

int main() {
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    // Corrected the Python 'in' syntax to proper C logical OR (||) syntax
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        // Added %c so the program knows where to print the character 'ch'
        printf("Entered character '%c' is a vowel.\n", ch);
    }
    else
    {
        printf("Entered character '%c' is a consonant.\n", ch);
    }

    return 0;
}

