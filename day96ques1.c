#include <stdio.h>
struct Date { int day, month, year; };
struct Employee
{
    char name[50];
    int id;
    struct Date joiningDate;
};
int main()
{
    struct Employee e;
    printf("Enter employee name and ID: ");
    scanf("%49s%d", e.name, &e.id);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d%d%d", &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);
    printf("Employee: %s\nID: %d\nJoining Date: %02d-%02d-%04d",
    e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);
    return 0;
}