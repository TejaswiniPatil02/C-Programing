#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("The character '%c' is Upper Case.\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("The character '%c' is Lower Case.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("The character '%c' is a Digit.\n", ch);
    else
        printf("The character '%c' is a Special Symbol.\n", ch);

    return 0;
}

