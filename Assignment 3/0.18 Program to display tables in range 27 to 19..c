
#include <stdio.h>

int main() {
    int start = 27, end = 19, i, j;

    // Loop through numbers from 27 to 19 in reverse order
    for (i = start; i >= end; i--)
     {
        printf("\nMultiplication Table of %d:\n", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
