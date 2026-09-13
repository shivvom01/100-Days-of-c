#include <stdio.h>
int main()
{
    int a[101], n, value, i, pos = 0;
    printf("Enter size of sorted array: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to insert: "); scanf("%d", &value);
    while(pos < n && a[pos] < value) pos++;
    for(i = n; i > pos; i--) a[i] = a[i - 1];
    a[pos] = value;
    for(i = 0; i <= n; i++) printf("%d ", a[i]);
    return 0;
}