#include <stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        count++;
        number /= 10;
    } while (number != 0);

    printf("Count of digits: %d\n", count);

    return 0;
}
