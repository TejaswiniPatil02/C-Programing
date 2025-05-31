#include <stdio.h>

int SumOfDigits(int num)
{
    int sum = 0, count = 0, temp = num;


    while (temp > 0)
    {
        temp /= 10;
        count++;
    }


    if (count != 5)
    {
        return -1;
    }


    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main()
{
    int num, result;


    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    result = SumOfDigits(num);


    if (result == -1)
        printf("Invalid input.\n");
    else
        printf("The sum of digits is: %d\n", result);

    return 0;
}
