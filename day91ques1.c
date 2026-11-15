#include <stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
    struct Student s;
    printf("Enter name, roll number and marks: ");
    scanf("%49s%d%f", s.name, &s.roll_no, &s.marks);
    printf("\nStudent Details\nName: %s\nRoll Number: %d\nMarks: %.2f", s.name, s.roll_no, s.marks);
    return 0;
}