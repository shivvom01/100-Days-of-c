#include <stdio.h>
int main()
{
    char a[100], b[200]; int i, j, len = 0, found = 0;
    printf("Enter first string: "); fgets(a, sizeof(a), stdin);
    printf("Enter second string: "); fgets(b, sizeof(b), stdin);
    while(a[len] != '\0' && a[len] != '\n') len++;
    for(i = 0; b[i] != '\0' && b[i] != '\n'; i++)
    {
        for(j = 0; j < len; j++)
            if(a[j] != b[i+j]) break;
        if(j == len) { found = 1; break; }
    }
    if(found) printf("Second string is a rotation");
    else printf("Not a rotation");
    return 0;
}