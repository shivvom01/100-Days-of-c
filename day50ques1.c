#include <stdio.h>
int main()
{
    int day, year;
    printf("Enter date as dd/04/yyyy: ");
    scanf("%d/04/%d", &day, &year);
    printf("%02d-Apr-%04d", day, year);
    return 0;
}