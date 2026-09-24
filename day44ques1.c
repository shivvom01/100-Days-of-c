#include <stdio.h>
int main()
{
    char str[200]; int i, spaces = 0, digits = 0, special = 0;
    printf("Enter a string: "); fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ') spaces++;
        else if(str[i] >= '0' && str[i] <= '9') digits++;
        else if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||str[i]=='\n')) special++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d", spaces, digits, special);
    return 0;
}