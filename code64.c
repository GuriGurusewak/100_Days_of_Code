//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int num;
    int counts[10] = {0};
    int remainder;

    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        counts[0] = 1;
    }

    while (num > 0) {
        remainder = num % 10;
        counts[remainder]++;
        num = num / 10;
    }

    int maxDigit = 0;
    int maxCount = 0;

    for (int i = 0; i < 10; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
