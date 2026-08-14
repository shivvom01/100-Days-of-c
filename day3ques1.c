#include<stdio.h>
#include<conio.h>
void main()
{
int c,fahr;
printf("Enter the temperature in Celsius=");
scanf("%d", &c);
fahr=(c*1.8)+32;
printf("\nTemperature in Fehrenheit is=%d",fahr);
getch();
} 
