#include<stdio.h>
#include<conio.h>
int main()
{
int seconds, hours, minutes, rseconds;
printf("Enter time in seconds:");
scanf("%d", &seconds);
hours =seconds/3600;
rseconds=seconds%3600;
minutes=rseconds/60;
rseconds=rseconds%60;
printf("Time =%d:%d:%d", hours, minutes, rseconds);
getch();
}
