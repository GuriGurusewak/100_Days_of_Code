#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int i, j, len1, len2;

    scanf("%99s", str1);
    scanf("%99s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    for (i = 0; i <= len1; i++) {
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                break;
            }
        }

        if (j == len2) {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not rotation");

    return 0;
}
