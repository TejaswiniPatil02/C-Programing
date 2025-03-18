#include <stdio.h>

int DifferenceEvenOddSum(int num)
{
    int evenSum = 0, oddSum = 0, digit;

    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            evenSum += digit;
        } else {
            oddSum += digit;
        }

        num /= 10;
    }

    return evenSum - oddSum;
}

int main() {
    int num, result;


    printf("Enter a number: ");
    scanf("%d", &num);

    result = DifferenceEvenOddSum(num);

    // Print result
    printf("Difference = %d\n", result);

    return 0;
}
