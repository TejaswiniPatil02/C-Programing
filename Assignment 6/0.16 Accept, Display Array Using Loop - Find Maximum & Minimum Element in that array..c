#include <stdio.h>

int main()
{
    int size, i, minElement, maxElement;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered elements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    minElement = maxElement = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    printf("\nMinimum element in the array: %d", minElement);
    printf("\nMaximum element in the array: %d\n", maxElement);

    return 0;
}
