#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, oddCount = 0;

    printf("Enter %d elements:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered elements are:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    printf("\nNumber of odd elements: %d\n", oddCount);

    return 0;
}
