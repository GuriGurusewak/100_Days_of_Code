#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("Output: ");

    if (len > 0 && name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }

    for (i = 0; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
