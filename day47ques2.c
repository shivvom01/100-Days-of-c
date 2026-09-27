#include <stdio.h>
int main()
{
    char str[200]; int i = 0, len = 0, max = 0, start = 0, best = 0;
    printf("Enter a sentence: "); fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n') len++;
        else { if(len > max) { max = len; best = start; } len = 0; start = i + 1; }
        i++;
    }
    if(len > max) { max = len; best = start; }
    printf("Longest word: ");
    for(i = best; i < best + max; i++) printf("%c", str[i]);
    return 0;
}