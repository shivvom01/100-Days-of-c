#include <stdio.h>
int main()
{
    int a[100], n, x, i, answer = -1;
    printf("Enter size of sorted array: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value: "); scanf("%d", &x);
    for(i = 0; i < n; i++) if(a[i] >= x) { answer = i; break; }
    printf("Ceil index = %d", answer);
    return 0;
}