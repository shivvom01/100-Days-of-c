#include <stdio.h>
int main()
{
    FILE *in, *out; int ch;
    in = fopen("input.txt", "r");
    if(in == NULL) { printf("input.txt not found"); return 0; }
    out = fopen("output.txt", "w");
    if(out == NULL) { printf("Cannot create output.txt"); fclose(in); return 0; }
    while((ch = fgetc(in)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z') ch = ch - 32;
        fputc(ch, out);
    }
    fclose(in); fclose(out);
    printf("Converted file saved as output.txt");
    return 0;
}