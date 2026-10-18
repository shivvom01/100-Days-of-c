#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0, expected;
    printf("Enter n: "); scanf("%d", &n);
    printf("Enter %d numbers from 0 to n with one missing: ", n);
    for(i = 0; i < n; i++) { scanf("%d", &a[i]); sum += a[i]; }
    expected = n * (n + 1) / 2;
    printf("Missing number = %d", expected - sum);
    return 0;
}