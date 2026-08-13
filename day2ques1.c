#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,peri,area;
printf("Enter the length of the rectangle");
scanf("%d",&l);
printf("\nEnter the breath of the rectangle");
scanf("%d",&b);
peri=2*(l+b);
area=l*b;
printf("\nPerimeter of the rectangle is=%d",peri);
printf("\nArea of the rectangle is=%d",area);
getch();
}
