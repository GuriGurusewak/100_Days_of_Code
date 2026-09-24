#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Output: ");
    
    if (day < 10) {
        printf("0%d-", day);
    } else {
        printf("%d-", day);
    }

    if (month == 1) printf("Jan");
    else if (month == 2) printf("Feb");
    else if (month == 3) printf("Mar");
    else if (month == 4) printf("Apr");
    else if (month == 5) printf("May");
    else if (month == 6) printf("Jun");
    else if (month == 7) printf("Jul");
    else if (month == 8) printf("Aug");
    else if (month == 9) printf("Sep");
    else if (month == 10) printf("Oct");
    else if (month == 11) printf("Nov");
    else if (month == 12) printf("Dec");

    printf("-%d\n", year);

    return 0;
}
