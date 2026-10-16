#include <stdio.h>
int main()
{
    int a[100], n, target, i, j;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter target sum: "); scanf("%d", &target);
    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if(a[i] + a[j] == target) { printf("Indices: %d %d", i, j); return 0; }
    printf("No pair found");
    return 0;
}