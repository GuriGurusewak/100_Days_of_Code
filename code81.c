#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[count] != '\0') {
        count++;
    }
    printf("\n>>> Output: Total characters = %d\n", count);
    return 0;
}
