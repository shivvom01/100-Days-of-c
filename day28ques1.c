#include <stdio.h>
int main()
{
    int n, num, i, prime;
    printf("Enter n: ");
    scanf("%d", &n);
    for(num = 2; num <= n; num++)
    {
        prime = 1;
        for(i = 2; i <= num / 2; i++)
            if(num % i == 0) { prime = 0; break; }
        if(prime == 1) printf("%d ", num);
    }
    return 0;
}