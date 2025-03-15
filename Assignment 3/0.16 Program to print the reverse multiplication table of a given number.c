
#include <stdio.h>

int main() {
    int num, i;


    printf("Enter a number: ");
    scanf("%d", &num);

    // Print reverse multiplication table
    printf("Reverse Multiplication Table of %d:\n", num);
    for (i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
