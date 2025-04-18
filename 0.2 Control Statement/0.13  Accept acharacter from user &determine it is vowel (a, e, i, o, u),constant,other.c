
#include <stdio.h>
#include <ctype.h> // For isalpha() function

int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
    {
        // Convert to lowercase to simplify checking
          char lowerCh = tolower(ch);

        // Check if it is a vowel
    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
    {
            printf("The character '%c' is a Vowel.\n", ch);
    }
    else
    {
            printf("The character '%c' is a Consonant.\n", ch);
    }
    }
    else
    {
        printf("The character '%c' is Other.\n", ch);
    }

    return 0;
}
