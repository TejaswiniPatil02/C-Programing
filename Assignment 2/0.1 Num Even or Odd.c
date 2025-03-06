#include<stdio.h>

int main()
{
    int No;
    printf("Enter no:");
    scanf("%d",&No);

    if(No %2 == 0)
    {
        printf("%d Number is even \n",No);
    }
    else{
        printf("%d Number is odd\n",No);
    }

    return 0;
}
