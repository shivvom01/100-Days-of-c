#include <stdio.h>
enum Role {ADMIN=1, USER, GUEST};
int main()
{
    enum Role role;
    printf("1.ADMIN 2.USER 3.GUEST\nEnter role: "); scanf("%d", (int *)&role);
    switch(role)
    {
        case ADMIN: printf("Administrator access"); break;
        case USER: printf("User access"); break;
        case GUEST: printf("Guest access"); break;
        default: printf("Invalid role");
    }
    return 0;
}