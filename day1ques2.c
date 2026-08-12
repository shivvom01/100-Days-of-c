#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,div,multi,sub;
printf("Enter first number");
scanf("%d",&a);
printf("\nEnter second number");
scanf("%d",&b);
sum=a+b;
printf("\n The sum of the two numbers is=%d",sum);
sub=a-b;
printf("\n The subtraction of the two numbers is=%d",sub);
multi=a*b;
printf("\n The multiplication of the two numbers is=%d",multi);
div=a/b;
printf("\n The division of the two numbers is=%d",div);
getch();
}
