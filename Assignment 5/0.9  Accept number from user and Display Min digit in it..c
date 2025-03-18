#include <stdio.h>

int MinDigit(int num)
{
    int minDigit = 9, digit;

    while (num > 0)
    {
        digit = num % 10;

        if (digit < minDigit)
        {
            minDigit = digit;
        }

        num /= 10;
    }

    return minDigit;
}

int main() {
    int num, result;


    printf("Enter a number: ");
    scanf("%d", &num);

    result = MinDigit(num);


    printf("The minimum digit is: %d\n", result);

    return 0;
}
