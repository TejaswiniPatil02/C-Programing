#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,res=0;

    printf("Enter A Number: ");
    scanf("%d",&num);

    printf("================********************=====================");

    res= num >> 6;

    printf("\n Result= %d >> 6 =%d." ,num,res);

    printf("\n\n===============****************=======================");

    getch();
    return 0;
}
