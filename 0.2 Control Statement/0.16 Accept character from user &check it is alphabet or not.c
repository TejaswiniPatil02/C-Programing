#include <stdio.h>

int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
