#include <stdio.h>

int main()
{
    int n, digit, place = 1, result = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 0)
        {
            result = result + 1 * place;
        }
        else if(digit == 1)
        {
            result = result + 0 * place;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %d", result);

    return 0;
}
