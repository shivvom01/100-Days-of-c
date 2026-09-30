#include <stdio.h>
int main()
{
    char str[100]; int i, j;
    printf("Enter a string: "); scanf("%99s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i; str[j] != '\0'; j++) printf("%.*s\n", j-i+1, str+i);
    }
    return 0;
}