#include <stdio.h>
int main()
{
    char name[150]; int i, start = 0, last = 0;
    printf("Enter full name: "); fgets(name, sizeof(name), stdin);
    for(i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        if(name[i] == ' ')
        {
            if(i > start) printf("%c. ", name[start]);
            start = i + 1;
        }
        last = i;
    }
    for(i = start; i <= last; i++) printf("%c", name[i]);
    return 0;
}