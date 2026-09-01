#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    while(digits > 0)
    {
        power = power * 10;
        digits--;
    }

    result = last * power + (n % power - last) + first;

    if(n < 10)
    {
        result = n;
    }

    printf("Number after swapping first and last digits = %d", result);

    return 0;
}
