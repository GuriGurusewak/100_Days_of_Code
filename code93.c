#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int count[26] = {0};
    int i;
    int isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        isAnagram = 0;
    } else {
        for (i = 0; str1[i] != '\0'; i++) {
            count[str1[i] - 'a']++;
        }

        for (i = 0; str2[i] != '\0'; i++) {
            count[str2[i] - 'a']--;
        }

        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram == 1) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
