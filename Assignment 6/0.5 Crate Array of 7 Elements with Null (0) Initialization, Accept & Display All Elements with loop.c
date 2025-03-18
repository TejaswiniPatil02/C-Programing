#include <stdio.h>

int main()
{
    int arr[7] = {0};

    printf("Enter 7 elements:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("The entered elements are:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
