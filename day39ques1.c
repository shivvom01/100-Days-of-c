#include <stdio.h>
int main()
{
    int a[10][10], n, i, j, count = 0;
    printf("Enter order of square matrix: "); scanf("%d", &n);
    for(i = 0; i < n; i++) for(j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++)
    {
        int seen = 0;
        for(j = 0; j < i; j++) if(a[i][i] == a[j][j]) seen = 1;
        if(!seen) count++;
    }
    printf("Distinct main diagonal elements = %d", count);
    return 0;
}