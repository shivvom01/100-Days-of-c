#include <stdio.h>
int main()
{
    int a[100], n, key, low = 0, high, mid, result = -1, i;
    printf("Enter size of sorted array: "); scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: "); scanf("%d", &key);
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(a[mid] == key) { result = mid; break; }
        else if(a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    printf("Index = %d", result);
    return 0;
}