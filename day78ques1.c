#include <stdio.h>
int main()
{
    FILE *fp; int ch, vowels = 0, consonants = 0;
    fp = fopen("info.txt", "r");
    if(fp == NULL) { printf("File not found"); return 0; }
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z') ch += 32;
        if(ch >= 'a' && ch <= 'z')
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}