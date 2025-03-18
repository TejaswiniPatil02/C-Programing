#include <stdio.h>

int MaxDigit(int num)
{
    int maxDigit = 0, digit;

    while (num > 0)
    {
        digit = num % 10;

        if (digit > maxDigit)
        {
            maxDigit = digit;
        }

        num /= 10;
    }

    return maxDigit;
}

int main() {
    int num, result;


    printf("Enter a number: ");
    scanf("%d", &num);

    result = MaxDigit(num);


    printf("The maximum digit is: %d\n", result);

    return 0;
}
