#include <stdio.h>
struct Student { char name[50]; int roll; float marks; };
int main()
{
    struct Student s[5]; int i, top = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Enter name, roll and marks: ");
        scanf("%49s%d%f", s[i].name, &s[i].roll, &s[i].marks);
        if(s[i].marks > s[top].marks) top = i;
    }
    printf("Highest marks: %s with %.2f", s[top].name, s[top].marks);
    return 0;
}