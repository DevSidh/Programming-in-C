#include <stdio.h>

int main() {
    int year;
    char choice;

    do {
        printf("Enter the year to check (Leap Year): ");
        scanf("%d", &year);

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("%d is a leap year\n", year);
        } else {
            printf("%d is not a leap year\n", year);
        }

        printf("Do you want to check more? (y/n): ");
        getchar();              // clears newline
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

