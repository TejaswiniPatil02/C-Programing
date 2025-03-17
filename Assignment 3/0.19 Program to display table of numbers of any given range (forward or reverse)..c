
#include <stdio.h>

void displayTable(int start, int end, int reverse)
 {
    int num, i;

    if (reverse)
    {
        for (num = end; num >= start; num--)
         {
            printf("\nMultiplication Table for %d:\n", num);
            for (i = 1; i <= 10; i++)
             {
                printf("%d x %d = %d\n", num, i, num * i);
            }
            printf("--------------------\n");
        }
    } else
     {
        for (num = start; num <= end; num++)
         {
            printf("\nMultiplication Table for %d:\n", num);
            for (i = 1; i <= 10; i++)
             {
                printf("%d x %d = %d\n", num, i, num * i);
            }
            printf("--------------------\n");
        }
    }
}

int main() {
    int start, end, reverse;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Do you want the tables in reverse order? (1 for Yes, 0 for No): ");
    scanf("%d", &reverse);

    displayTable(start, end, reverse);

    return 0;
}
