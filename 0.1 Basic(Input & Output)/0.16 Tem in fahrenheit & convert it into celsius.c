#include<stdio.h>

int main()
{
    float fahrenheit ,celsius;
    printf("Temperature is:");
    scanf("%f",&fahrenheit);

    celsius=(fahrenheit-32)*(5/9);

    printf("Temperature in celsius is:%.2f\n",celsius);
    return 0;
}
