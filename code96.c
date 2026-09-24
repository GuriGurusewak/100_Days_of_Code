#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, wordStart = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Output: ");

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (j = i - 1; j >= wordStart; j--) {
                printf("%c", str[j]);
            }
            
            if (str[i] == ' ') {
                printf(" ");
            }
            
            wordStart = i + 1;
        }
    }

    printf("\n");
    return 0;
}
