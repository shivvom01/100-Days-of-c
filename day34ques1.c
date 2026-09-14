#include <stdio.h>
int main()
{
    int a[101], n, value, pos, i;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value and position (1-based): "); scanf("%d%d", &value, &pos);
    if(pos < 1 || pos > n + 1) { printf("Invalid position"); return 0; }
    for(i = n; i >= pos; i--) a[i] = a[i - 1];
    a[pos - 1] = value;
    for(i = 0; i <= n; i++) printf("%d ", a[i]);
    return 0;
}