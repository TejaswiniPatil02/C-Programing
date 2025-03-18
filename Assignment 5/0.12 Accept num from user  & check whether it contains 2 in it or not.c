#include <stdio.h>

int ContainsTwo(int num)
{
    int digit;

    while (num > 0)
    {
        digit = num % 10;

        if (digit == 2)
        {
            return 1;
        }

        num /= 10;
    }

    return 0;
}

int main() {
    int num, result;


    printf("Enter a number: ");
    scanf("%d", &num);

    result = ContainsTwo(num);


    if (result)
        printf("It Contains Two\n");
    else
        printf("There is no Two\n");

    return 0;
}
