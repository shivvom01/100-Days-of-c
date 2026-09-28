#include <stdio.h>
int main()
{
    char a[100], b[100], joined[200]; int i, j, len = 0, found = 0;
    printf("Enter first string: "); fgets(a, sizeof(a), stdin);
    printf("Enter second string: "); fgets(b, sizeof(b), stdin);
    while(a[len] != '\0' && a[len] != '\n') len++;
    a[len] = '\0';
    for(i = 0; i < len; i++) joined[i] = a[i];
    for(i = 0; i < len; i++) joined[len+i] = a[i];
    joined[2*len] = '\0';
    for(i = 0; b[i] != '\0' && b[i] != '\n'; i++) {}
    if(i == len)
    {
        for(i = 0; i <= len; i++)
        {
            for(j = 0; j < len && joined[i+j] == b[j]; j++) {}
            if(j == len) { found = 1; break; }
        }
    }
    if(found) printf("Second string is a rotation");
    else printf("Not a rotation");
    return 0;
}