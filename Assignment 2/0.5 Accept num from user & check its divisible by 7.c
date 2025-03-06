#include<stdio.h>

int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);

    if(num%7==0)
    {
        printf("%d is divisible by 7 ");
    }

    return 0;
}
