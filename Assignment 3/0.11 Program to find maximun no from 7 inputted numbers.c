
#include <stdio.h>

int main() {
    int i, num, max;


    printf("Enter 7 numbers:\n");
    scanf("%d", &max);

    // Loop to take the remaining 6 numbers and find the maximum
    for (i = 1; i < 7; i++)
    {
        scanf("%d", &num);
        if (num > max)
         {
            max = num;
        }
    }

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
