
#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);

    printf("Enter First number: ");
    scanf("%lf", &num1);

    printf("Enter Second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        case '%':
            if ((int)num2 != 0)
                result = (int)num1 % (int)num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
