#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, evenCount = 0;


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
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    printf("\nNumber of even elements: %d\n", evenCount);

    return 0;
}
