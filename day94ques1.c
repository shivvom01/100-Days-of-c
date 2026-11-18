#include <stdio.h>
struct Student { char name[50]; int roll; float marks; };
void display(struct Student s)
{
    printf("Name: %s\nRoll: %d\nMarks: %.2f", s.name, s.roll, s.marks);
}
int main()
{
    struct Student s;
    printf("Enter name, roll and marks: ");
    scanf("%49s%d%f", s.name, &s.roll, &s.marks);
    display(s);
    return 0;
}