#include <stdio.h>
int main()
{
    char str[200]; int last[256], i, start = 0, max = 0, len;
    for(i = 0; i < 256; i++) last[i] = -1;
    printf("Enter a string: "); fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if(last[(unsigned char)str[i]] >= start) start = last[(unsigned char)str[i]] + 1;
        last[(unsigned char)str[i]] = i;
        len = i - start + 1;
        if(len > max) max = len;
    }
    printf("Longest substring length = %d", max);
    return 0;
}