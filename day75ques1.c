#include <stdio.h>
int main()
{
    FILE *fp; char line[200];
    printf("Enter a line to append: ");
    getchar();
    fgets(line, sizeof(line), stdin);
    fp = fopen("info.txt", "a");
    if(fp == NULL) { printf("Unable to open file"); return 0; }
    fputs(line, fp);
    fclose(fp);
    printf("Line appended successfully");
    return 0;
}