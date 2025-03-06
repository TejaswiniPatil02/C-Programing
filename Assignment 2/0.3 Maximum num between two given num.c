#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter Number:");
    scanf("%d %d",&a,&b);


    if(a>b)
    {
        printf("The gretest Number is:%d\n",a);
    }
    else
    {
        printf("The gretest Number is:%d\n",b);
    }
    return 0;
}
