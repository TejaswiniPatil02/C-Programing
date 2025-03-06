
#include <stdio.h>

int main()
{
    char division;

    printf("Enter your division (A, B, C, D): ");
    scanf(" %c", &division);

    switch (division)
     {
        case 'A': case 'a':
            printf("Your exam is at 10 AM\n");
            break;
        case 'B': case 'b':
            printf("Your exam is at 10.30 AM\n");
            break;
        case 'C': case 'c':
            printf("Your exam is at 1 PM\n");
            break;
        case 'D': case 'd':
            printf("Your exam is at 1.30 PM\n");
            break;
        default:
            printf("Invalid division!\n");
    }

    return 0;
}
