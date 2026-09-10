#include <stdio.h>
int main()
{
    int a[100], n, i, positive = 0, negative = 0, zero = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > 0) positive++;
        else if(a[i] < 0) negative++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", positive, negative, zero);
    return 0;
}