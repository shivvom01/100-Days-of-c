#include <stdio.h>
enum Choice {ADD=1, SUBTRACT, MULTIPLY, DIVIDE};
int main()
{
    enum Choice choice; float a, b;
    printf("Enter two numbers: "); scanf("%f%f", &a, &b);
    printf("1.Add 2.Subtract 3.Multiply 4.Divide\nEnter choice: "); scanf("%d", (int *)&choice);
    switch(choice)
    {
        case ADD: printf("Result = %.2f", a+b); break;
        case SUBTRACT: printf("Result = %.2f", a-b); break;
        case MULTIPLY: printf("Result = %.2f", a*b); break;
        case DIVIDE: if(b != 0) printf("Result = %.2f", a/b); else printf("Cannot divide by zero"); break;
        default: printf("Invalid choice");
    }
    return 0;
}