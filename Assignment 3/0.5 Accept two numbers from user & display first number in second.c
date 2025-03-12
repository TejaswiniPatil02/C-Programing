
#include <stdio.h>

int main()
 {
    int firstNumber, secondNumber;

    // Accepting input from user
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    // Displaying the first number 'secondNumber' of times
    for (int i = 0; i < secondNumber; i++)
    {
        printf("%d ", firstNumber);
    }

    return 0;
}
