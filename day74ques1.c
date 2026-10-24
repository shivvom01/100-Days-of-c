#include <stdio.h>
int main()
{
    FILE *source, *destination; int ch;
    source = fopen("info.txt", "r");
    if(source == NULL) { printf("Source file not found"); return 0; }
    destination = fopen("copy.txt", "w");
    if(destination == NULL) { printf("Cannot create copy file"); fclose(source); return 0; }
    while((ch = fgetc(source)) != EOF) fputc(ch, destination);
    fclose(source); fclose(destination);
    printf("File copied successfully");
    return 0;
}