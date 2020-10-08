#include<stdio.h>
int main()
{
int ch;
int number;
printf("Enter the number:");
scanf("%d",&number);
printf("\nEnter the choice:\n1 to check whether number is odd or even\n 2 to check whether number is positive or negative=");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(number%2==0)
{
printf("%d is even number",number);
}
else
{
printf("%d is odd number",number);
}
break;
case 2:
if(number>0)
{
printf("%d is positive",number);
}
else
{
printf("%d is negative",number);
}
break;
default:
printf("WRONG CHOICE!!");
}
return 0;
}
