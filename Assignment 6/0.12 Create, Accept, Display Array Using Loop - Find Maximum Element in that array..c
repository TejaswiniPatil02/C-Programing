#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i, maxElement;

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

    maxElement = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    printf("\nMaximum element in the array: %d\n", maxElement);

    return 0;
}
