#include <stdio.h>
int main()
{
    FILE *fp; int ch;
    fp = fopen("info.txt", "r");
    if(fp == NULL) { printf("File does not exist"); return 0; }
    printf("File exists. Contents:\n");
    while((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);
    return 0;
}