#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len, isFirst = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Output: ");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!isFirst) {
                printf(",");
            }
            isFirst = 0;

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }

    printf("\n");
    return 0;
}
