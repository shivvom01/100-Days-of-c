#include <stdio.h>
int main()
{
    int n, x, left = 0, right = 0;
    printf("Enter n: "); scanf("%d", &n);
    for(x = 1; x <= n; x++) right += x;
    for(x = 1; x <= n; x++)
    {
        left += x;
        if(left == right) { printf("Pivot integer = %d", x); return 0; }
        right -= x;
    }
    printf("No pivot integer");
    return 0;
}