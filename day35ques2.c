#include <stdio.h>
int main()
{
    int a[100], b[100], n, k, i;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter k: "); scanf("%d", &k);
    if(n == 0) return 0;
    k = k % n;
    for(i = 0; i < n; i++) b[(i + k) % n] = a[i];
    for(i = 0; i < n; i++) printf("%d ", b[i]);
    return 0;
}