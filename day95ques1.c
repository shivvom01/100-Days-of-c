#include <stdio.h>
struct Student { char name[50]; int roll; float marks; };
struct Student topStudent(struct Student s[], int n)
{
    int i, top = 0;
    for(i = 1; i < n; i++) if(s[i].marks > s[top].marks) top = i;
    return s[top];
}
int main()
{
    struct Student s[5], top; int i;
    for(i = 0; i < 5; i++)
    {
        printf("Enter name, roll and marks: ");
        scanf("%49s%d%f", s[i].name, &s[i].roll, &s[i].marks);
    }
    top = topStudent(s, 5);
    printf("Top student: %s, Roll: %d, Marks: %.2f", top.name, top.roll, top.marks);
    return 0;
}