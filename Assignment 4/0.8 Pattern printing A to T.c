#include <stdio.h>

int main()
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
        {
        for (int j = 1; j <= 4; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
