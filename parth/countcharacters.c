#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int c = 0;
printf("Enter your name =  ");
gets(a);

for(int i = 0;i<=strlen(a)-1;i++)
{
c++;
}
c=c-1;
printf("Your name has %d characters",c);
return 0 ;
}
