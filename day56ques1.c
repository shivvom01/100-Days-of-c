#include <stdio.h>
int main()
{
    int a[100], n, i, j, found;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
    {
        found = 0;
        for(j = i + 1; j < n; j++) if(a[j] > a[i]) { printf("%d ", a[j]); found = 1; break; }
        if(!found) printf("-1 ");
    }
    return 0;
}