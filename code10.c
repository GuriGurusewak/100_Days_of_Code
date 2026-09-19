//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int sec;
    int hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    hours = sec / 3600;
    int remaining_seconds = sec % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
