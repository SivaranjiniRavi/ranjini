#include<stdio.h>
int main()
{
int num;
clrscr();
printf("Enter the number");
scanf("%d",&num);
if(num>0)
printf("The number is positive");
else if(num<0)
printf("The number is negative");
else
printf("The number is zero");
getch();
}
