#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        start = i;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }

        end = i - 1;

        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        if (str[i] == ' ') {
            i++;
        }
    }

    printf("%s", str);

    return 0;
}
