#include <stdio.h>

int CountDigitFrequency(int num, int digitToFind)
{
    int count = 0, digit;

    while (num > 0) {
        digit = num % 10;
        if (digit == digitToFind) {
            count++;
        }

        num /= 10;
    }

    return count;
}

int main() {
    int num, digit, result;


    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a digit to count: ");
    scanf("%d", &digit);

    result = CountDigitFrequency(num, digit);


    printf("The digit %d appears %d times.\n", digit, result);

    return 0;
}
