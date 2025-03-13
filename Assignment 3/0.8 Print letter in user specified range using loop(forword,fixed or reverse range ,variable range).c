
#include <stdio.h>

int main()
 {
    char start, end, ch;


    printf("Enter start letter: ");
    scanf(" %c", &start);

    printf("Enter end letter: ");
    scanf(" %c", &end);

    // Determine if the range is forward or reverse
    if (start <= end)
    {
        // Forward order
        for (ch = start; ch <= end; ch++) {
            printf("%c ", ch);
        }
    }
    else
    {
        // Reverse order
        for (ch = start; ch >= end; ch--) {
            printf("%c ", ch);
        }
    }

    printf("\n"); // Move to the next line after printing
    return 0;
}
