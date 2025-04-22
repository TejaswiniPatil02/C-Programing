
#include <stdio.h>

int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("%c\n", ch + ('a' - 'A'));
    else if (ch >= 'a' && ch <= 'z')
        printf("%c\n", ch - ('a' - 'A'));
    else
        printf("%c\n", ch);

    return 0;
}
