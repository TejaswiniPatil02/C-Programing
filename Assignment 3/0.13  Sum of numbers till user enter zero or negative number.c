#include <stdio.h>

int main() {
    int num, sum = 0;

    while (1)
        { // Unconditional loop
        printf("Enter a number (0 or negative to stop): ");
        scanf("%d", &num);

        if (num <= 0)
            {
            break; // Exit the loop when a non-positive number is entered
        }

        sum += num;
    }

    printf("Sum of entered numbers: %d\n", sum);

    return 0;
}
