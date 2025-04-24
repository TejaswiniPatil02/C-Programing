#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
