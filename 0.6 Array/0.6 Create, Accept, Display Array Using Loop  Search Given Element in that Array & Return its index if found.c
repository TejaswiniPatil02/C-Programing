#include <stdio.h>

int main()
{
    int arr[10];
    int i, searchElement, found = 0;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered elements are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &searchElement);


    for (i = 0; i < 10; i++)
    {
        if (arr[i] == searchElement)
        {
            printf("Element %d found at index %d\n", searchElement, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
