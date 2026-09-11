#include <stdio.h>
int main()
{
    int a[100], n, key, i, found = -1;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: "); scanf("%d", &key);
    for(i = 0; i < n; i++)
        if(a[i] == key) { found = i; break; }
    printf("Index = %d", found);
    return 0;
}