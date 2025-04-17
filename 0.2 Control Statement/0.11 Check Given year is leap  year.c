
#include <stdio.h>

int main()
 {
    int year;

    // Accept input from user
    printf("Enter Year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year %d is a leap year.\n", year);
    }
    else
    {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
