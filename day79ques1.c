#include <stdio.h>
int main()
{
    FILE *fp; int num, sum = 0, count = 0;
    fp = fopen("numbers.txt", "r");
    if(fp == NULL) { printf("numbers.txt not found"); return 0; }
    while(fscanf(fp, "%d", &num) == 1) { sum += num; count++; }
    fclose(fp);
    if(count > 0) printf("Sum = %d\nAverage = %.2f", sum, (float)sum/count);
    else printf("No numbers in file");
    return 0;
}