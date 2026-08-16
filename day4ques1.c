#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nBefore swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    getch();
}
