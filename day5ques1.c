#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float principal, rate, time,simple,compound,amount;
printf("Enter principal amount=");
scanf("%f", &principal);
printf("\nEnter rate of interest=");
scanf("%f", &rate);
printf("\nEnter time in years=");
scanf("%f", &time);
simple=(principal*rate*time)/100;
amount = principal* pow((1 + rate / 100), time);
compound= amount - principal;
printf("\nSimple interest=%.2f",simple);
printf("\nCompound interest=%.2f",compound);
getch();
}
