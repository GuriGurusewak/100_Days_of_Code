/* Write a program to print the following pattern:

  *
 ***
*****
 ***
  *

*/

#include <stdio.h>
int main() {
    int total_rows = 5;
    int mid = 3;

    for (int i = 1; i <= mid; i++) {
         for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
