#include<stdio.h>
int main()
{
int n;
printf("Enter percentage=");
scanf("%d", &n);
if(n>=90 && n<=100)
{
	printf("Grade A");
}
else if(n>=80 && n<=89)
{
	printf("Grade B");
}
else if(n>=70 && n<=79)
{
	printf("Grade C");
}
else if(n>=60 && n<=69)
{
	printf("Grade D");
}
else if(n>100)
{
	printf("Invalid input");
}
else
{
	printf("Grade F");
}
return 0;
}
