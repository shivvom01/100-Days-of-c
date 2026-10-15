#include <stdio.h>
int main()
{
    char a[100], b[100]; int count[256] = {0}, i, same = 1;
    printf("Enter first string: "); fgets(a, sizeof(a), stdin);
    printf("Enter second string: "); fgets(b, sizeof(b), stdin);
    for(i = 0; a[i] != '\0'; i++) if(a[i] != '\n') count[(unsigned char)a[i]]++;
    for(i = 0; b[i] != '\0'; i++) if(b[i] != '\n') count[(unsigned char)b[i]]--;
    for(i = 0; i < 256; i++) if(count[i] != 0) same = 0;
    if(same) printf("Anagram strings"); else printf("Not anagram strings");
    return 0;
}