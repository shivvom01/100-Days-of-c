#include <stdio.h>
int main()
{
    char str[100]; int i, len = 0, same = 1;
    printf("Enter a string: "); fgets(str, sizeof(str), stdin);
    while(str[len] != '\0' && str[len] != '\n') len++;
    for(i = 0; i < len / 2; i++) if(str[i] != str[len-1-i]) same = 0;
    if(same) printf("Palindrome string");
    else printf("Not a palindrome string");
    return 0;
}