#include <stdio.h>

int main() {
    char name[100];
    int i, wordStart = 1;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (wordStart && name[i] != ' ') {
            printf("%c.", name[i]);
            wordStart = 0;
        }

        if (name[i] == ' ') {
            wordStart = 1;
        }
    }

    return 0;
}
	
