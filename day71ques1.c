#include <stdio.h>
int main()
{
    FILE *fp;
    char name[50]; int age;
    printf("Enter name: "); scanf("%49s", name);
    printf("Enter age: "); scanf("%d", &age);
    fp = fopen("info.txt", "w");
    if(fp == NULL) { printf("Unable to create file"); return 0; }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data written to info.txt");
    return 0;
}