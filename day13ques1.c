#include <stdio.h>

int main()
{
    int a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            result = a + b;
            printf("Result = %d", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %d", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %d", result);
            break;

        case '/':
            if (b != 0)
            {
                result = a / b;
                printf("Result = %d", result);
            }
            else
            {
                printf("Division by zero is not possible.");
            }
            break;

        case '%':
            if (b != 0)
            {
                result = a % b;
                printf("Result = %d", result);
            }
            else
            {
                printf("Modulus by zero is not possible.");
            }
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}
