#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, minElement;

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

    minElement = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    printf("\nMinimum element in the array: %d\n", minElement);

    return 0;
}
