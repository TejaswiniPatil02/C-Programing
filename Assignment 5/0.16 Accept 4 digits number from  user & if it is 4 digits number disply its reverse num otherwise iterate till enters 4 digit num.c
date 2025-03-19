#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder;

    do {
        printf("Enter a 4-digit number: ");
        scanf("%d", &num);

        if (num < 1000 || num > 9999)
        {
            printf("Invalid input! Please enter a 4-digit number.\n");
        }
    }
    while (num < 1000 || num > 9999);

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reverse Number: %d\n", reverse);
    return 0;
}
