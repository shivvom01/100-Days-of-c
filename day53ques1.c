#include <stdio.h>
int main()
{
    int a[100], n, i, total = 0, left = 0, answer = -1;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) { scanf("%d", &a[i]); total += a[i]; }
    for(i = 0; i < n; i++)
    {
        if(left == total - left - a[i]) { answer = i; break; }
        left += a[i];
    }
    printf("Pivot index = %d", answer);
    return 0;
}