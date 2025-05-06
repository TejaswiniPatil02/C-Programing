#include <stdio.h>

int main()
{
    int num, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    printf("Output: ");

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;

        if (temp > 0)
        {
            printf("%d+", digit);
        } else
        {
            printf("%d ", digit);
        }
    }

    printf("= %d\n", sum);
    return 0;
}
