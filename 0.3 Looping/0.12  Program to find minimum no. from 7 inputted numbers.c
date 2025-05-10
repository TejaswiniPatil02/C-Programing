
#include <stdio.h>

int main() {
    int numbers[7], i, min;


    printf("Enter 7 numbers: ");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Assume first number is the minimum
    min = numbers[0];

    // Compare with the remaining numbers
    for (i = 1; i < 7; i++)
        {
        if (numbers[i] < min)
         {
            min = numbers[i];
        }
    }

    // Display the minimum number
    printf("The minimum number is: %d\n", min);

    return 0;
}
