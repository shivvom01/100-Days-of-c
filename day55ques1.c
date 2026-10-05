#include <stdio.h>
int main()
{
    int a[100], n, i, j, count, answer = -1;
    printf("Enter array size: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++) if(a[i] == a[j]) count++;
        if(count > n / 2) { answer = a[i]; break; }
    }
    printf("Majority element = %d", answer);
    return 0;
}