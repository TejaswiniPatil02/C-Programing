#include<stdio.h>
#include <ctype.h>

int main()
{
    char letter;
    printf("Enter character: ");
    scanf("%c",&letter);

    if(letter >= 'A' && letter <= 'Z')
    {
        printf("%c is uppercase\n",letter);
    }
    else if(letter >= 'a' && letter <='z')
    {
        printf("%c is lower case\n",letter);
    }
    else
    {
        printf("%c is not letter\n");
    }

    return 0;
}
