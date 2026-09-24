#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char found = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                found = str[i];
                break;
            }
        }
        if (found != '\0') {
            break;
        }
    }

    if (found != '\0') {
        printf("First repeating character: %c\n", found);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
