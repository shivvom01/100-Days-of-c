#include <stdio.h>
int main()
{
    char str[200]; int i, newWord = 1;
    printf("Enter a sentence: "); fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' && newWord) str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z' && !newWord) str[i] += 32;
        if(str[i] == ' ' || str[i] == '\n') newWord = 1;
        else newWord = 0;
    }
    printf("%s", str);
    return 0;
}