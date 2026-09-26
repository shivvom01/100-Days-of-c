#include <stdio.h>
int main()
{
    char str[200]; int count[26] = {0}, i;
    printf("Enter a string: "); fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] >= 'a' && str[i] <= 'z') count[str[i]-'a']++;
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] >= 'a' && str[i] <= 'z' && count[str[i]-'a'] > 1)
        { printf("First repeating character = %c", str[i]); return 0; }
    printf("No repeating lowercase character");
    return 0;
}