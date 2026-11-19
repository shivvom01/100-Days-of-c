#include <stdio.h>
struct Employee { int id; char name[50]; float salary; };
int main()
{
    FILE *fp; struct Employee e; int n, i;
    printf("Enter number of employees: "); scanf("%d", &n);
    fp = fopen("employee.dat", "wb");
    if(fp == NULL) { printf("Cannot open file"); return 0; }
    for(i = 0; i < n; i++)
    {
        printf("Enter ID, name and salary: ");
        scanf("%d%49s%f", &e.id, e.name, &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    printf("\nEmployee Records\n");
    while(fread(&e, sizeof(e), 1, fp) == 1)
        printf("%d %s %.2f\n", e.id, e.name, e.salary);
    fclose(fp);
    return 0;
}