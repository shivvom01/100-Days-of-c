#include <stdio.h>

int main()
{
    int num, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
    }

    if (original == sum)
    {
        printf("The number is Armstrong");
    }
    else
    {
        printf("The number is not Armstrong");
    }

    return 0;
}
