#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, zeroCount = 0;

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
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }

    printf("\nNumber of zero elements: %d\n", zeroCount);

    return 0;
}
