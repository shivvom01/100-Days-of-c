#include <stdio.h>
int main()
{
    FILE *fp; int ch, characters = 0, words = 0, lines = 0, inWord = 0, last = '\n';
    fp = fopen("info.txt", "r");
    if(fp == NULL) { printf("File not found"); return 0; }
    while((ch = fgetc(fp)) != EOF)
    {
        characters++;
        if(ch == '\n') lines++;
        if(ch == ' ' || ch == '\n' || ch == '\t') inWord = 0;
        else if(!inWord) { words++; inWord = 1; }
        last = ch;
    }
    if(characters > 0 && last != '\n') lines++;
    fclose(fp);
    printf("Characters = %d\nWords = %d\nLines = %d", characters, words, lines);
    return 0;
}