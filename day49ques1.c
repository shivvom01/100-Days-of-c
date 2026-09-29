#include <stdio.h>
int main()
{
    char name[150]; int i, newWord = 1;
    printf("Enter full name: "); fgets(name, sizeof(name), stdin);
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] != ' ' && name[i] != '\n')
        {
            if(newWord) printf("%c. ", name[i]);
            newWord = 0;
        }
        else newWord = 1;
    }
    return 0;
}