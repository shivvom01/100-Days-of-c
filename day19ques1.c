#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        i = a;
    }
    else
    {
        i = b;
    }

    for(; ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}
