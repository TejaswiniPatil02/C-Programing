#include <stdio.h>

int CountZeros(int num)
{
    int count = 0, digit;

    while (num > 0)
    {
        digit = num % 10;

        if (digit == 0)
        {
            count++;
        }

        num /= 10;
    }

    return count;
}

int main() {
    int num, result;


    printf("Enter a number: ");
    scanf("%d", &num);

    result = CountZeros(num);


    printf("Count of zeros: %d\n", result);

    return 0;
}
