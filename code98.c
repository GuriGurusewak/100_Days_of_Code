#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len, lastSpaceIndex = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }

    printf("Output: ");

    if (lastSpaceIndex == -1) {
        printf("%s", name);
    } else {
        if (name[0] != ' ') {
            char initial = name[0];
            if (initial >= 'a' && initial <= 'z') {
                initial = initial - 32;
            }
            printf("%c.", initial);
        }

        for (i = 0; i < lastSpaceIndex; i++) {
            if (name[i] == ' ' && name[i + 1] != ' ') {
                char initial = name[i + 1];
                if (initial >= 'a' && initial <= 'z') {
                    initial = initial - 32;
                }
                printf("%c.", initial);
            }
        }

        printf(" ");
        for (i = lastSpaceIndex + 1; i < len; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}
