#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char longest[100] = "";
    char current[100];
    int i, j = 0;

    printf("Enter a sentence: ");
    // Reads a full line including spaces
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            current[j] = str[i];
            j++;
        } else {
            current[j] = '\0';
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0;
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
