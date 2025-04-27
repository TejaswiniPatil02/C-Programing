
#include <stdio.h>

int main()
 {
    char ch;

    // Loop to print letters from 'W' to 'E' in reverse order
    for (ch = 'W'; ch >= 'E'; ch--)
    {
        printf("%c ", ch);
    }

    printf("\n"); // Move to the next line after printing

    return 0;
}
