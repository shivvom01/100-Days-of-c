#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    FILE *fp; struct Student s; int n, i;
    printf("Enter number of students: "); scanf("%d", &n);
    fp = fopen("students.txt", "w");
    if(fp == NULL) { printf("Cannot open file"); return 0; }
    for(i = 0; i < n; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%49s%d%f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    while(fscanf(fp, "%49s%d%f", s.name, &s.roll, &s.marks) == 3)
        printf("%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);
    return 0;
}