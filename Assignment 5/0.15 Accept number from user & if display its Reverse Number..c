#include <stdio.h>

int ReverseNumber(int num)
{
    int rev = 0, digit;

    while (num > 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num /= 10;
    }

    return rev;
}

int main() {
    int num, reversed;


    printf("Enter a number No: ");
    scanf("%d", &num);

    reversed = ReverseNumber(num);

    printf("No: %d ; Rev: %d\n", num, reversed);

    return 0;
}
