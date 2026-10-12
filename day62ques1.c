#include <stdio.h>
int main()
{
    int a[100], n, i, current, max;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    current = max = a[0];
    for(i = 1; i < n; i++)
    {
        if(current + a[i] < a[i]) current = a[i];
        else current += a[i];
        if(current > max) max = current;
    }
    printf("Maximum subarray sum = %d", max);
    return 0;
}