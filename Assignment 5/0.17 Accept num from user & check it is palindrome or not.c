#include<stdio.h>

int main()
{
    int num,digit,temp,reverse=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }


    if (num == reverse)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}

