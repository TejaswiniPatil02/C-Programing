#include<stdio.h>

int main()
{
    int sub1,sub2,sub3,total_marks;
    float percentage;
    printf("Enter a marks of sub1:");
    scanf("%d",&sub1);

    printf("Enter a marks of sub2:");
    scanf("%d",&sub2);

    printf("Enter a marks of sub3:");
    scanf("%d",&sub3);

    total_marks=sub1+sub2+sub3;
    percentage=total_marks/3;

    printf("total marks :%d & percentage :%f",total_marks,percentage);
    return 0;




}
