
#include <stdio.h>

int main()
 {
    int start = 7, end = 13, i, j;

    // Loop through numbers from 7 to 13
    for (i = start; i <= end; i++)
    {
        printf("\nMultiplication Table of %d:\n", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
