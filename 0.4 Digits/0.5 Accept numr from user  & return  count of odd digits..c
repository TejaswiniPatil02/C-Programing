#include <stdio.h>

int CountOddDigits(int num)
{
    int count = 0, digit;

    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            count++;
        }
        num = num / 10;
    }

    return count;
}

int main()
{
    int num, result;


    printf("Enter a number: ");
    scanf("%d", &num);

    result = CountOddDigits(num);


    printf("Count of odd digits: %d\n", result);

    return 0;
}
