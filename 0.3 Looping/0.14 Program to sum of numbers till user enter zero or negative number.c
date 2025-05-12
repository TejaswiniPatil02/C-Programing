
#include <stdio.h>

int main() {
    int num, sum = 0;

    while (1)
        {
        printf("Enter a number (zero or negative to stop): ");
        scanf("%d", &num);

        if (num <= 0)
        {
            break;  // Exit loop if input is zero or negative
        }

        sum += num;  // Add valid numbers to sum
    }

    printf("Total sum: %d\n", sum);
    return 0;
}
