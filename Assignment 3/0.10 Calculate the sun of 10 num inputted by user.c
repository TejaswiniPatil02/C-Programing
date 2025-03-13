
#include <stdio.h>

int main()
 {
    int i, num, sum = 0;


    printf("Enter 10 numbers:\n");

    // Loop to take 10 inputs and calculate sum
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    // Print the sum
    printf("The sum is: %d\n", sum);

    return 0;
}
