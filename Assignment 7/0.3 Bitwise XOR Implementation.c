#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2 ,res;

    printf("Enter a Number: ");
    scanf("%d",&num1);

    printf("Enter a Number: ");
    scanf("%d",&num2);

    printf("\n=========***************========");

    res=num1 ^ num2;

    printf("\n Result ==> %d ^ %d = %d",num1,num2,res);


    getch();
    return 0;
}
