#include <stdio.h>
enum Gender {MALE, FEMALE, OTHER};
struct Person
{
    char name[50];
    enum Gender gender;
};
int main()
{
    struct Person p; int choice;
    printf("Enter name: "); scanf("%49s", p.name);
    printf("0.MALE 1.FEMALE 2.OTHER\nEnter gender: "); scanf("%d", &choice);
    if(choice < 0 || choice > 2) { printf("Invalid gender"); return 0; }
    p.gender = (enum Gender)choice;
    printf("Name: %s\nGender: ", p.name);
    if(p.gender == MALE) printf("Male");
    else if(p.gender == FEMALE) printf("Female");
    else printf("Other");
    return 0;
}