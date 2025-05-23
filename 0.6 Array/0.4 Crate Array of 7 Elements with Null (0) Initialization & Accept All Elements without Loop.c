#include <stdio.h>

int main()
{
    int arr[7] = {0};


    printf("Enter 7 elements:\n");
    scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);

    printf("Array elements:\n");
    printf("%d %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);

    return 0;
}
