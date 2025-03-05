#include<stdio.h>

int main()
{
    char name,course,city;
    int roll_no;
    printf("Enter Name:");
    scanf("%s",&name);

    printf("Enter roll no:");
    scanf("%d ",&roll_no);

    printf("Enter course:");
    scanf("%s ",&course);

    printf("Enter city:");
    scanf("%s",&city);

    printf("Student Name:%s,roll no:%d,course:%s,city:%s \n",name,roll_no,course,city);


    return 0;
}
