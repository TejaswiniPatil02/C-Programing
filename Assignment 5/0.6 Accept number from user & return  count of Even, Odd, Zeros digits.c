#include <stdio.h>

void CountDigits(int num, int *even, int *odd, int *zero)
{
    *even = *odd = *zero = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit == 0)
        {
            (*zero)++;
        } else if (digit % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }

        num /= 10;
    }
}

int main() {
    int num, even, odd, zero;


    printf("Enter a number: ");
    scanf("%d", &num);


    CountDigits(num, &even, &odd, &zero);


    printf("E = %d, O = %d, Z = %d\n", even, odd, zero);

    return 0;
}
