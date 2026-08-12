#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int a[5],i,n;
	 char choice[3];
	printf("Enter any five number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n Do you want to change any number from the numbers you have entered? (yes/no)=");
	scanf("%s", &choice);
if(strcmp(choice,"no")==0)
{
printf("\nNo changes made");
return 0;
}
else
{
printf("\n Enter the number to be changed=");
scanf("%d", &n);
for(i=0;i<5;i++)
	{
if(a[i]==n)
{
	printf("\n Enter a new number=");
scanf("%d", &a[i]);
}
}
}
printf("\nThe numbers after the changes are=\n");
for(i=0;i<5;i++)
	{
		printf("%d, ", a[i]);
	}
getch();
}
