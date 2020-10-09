#include<stdio.h>
int main()
{
int n,s,r,temp;
temp=n;
s=0;
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r*r*r;
n=n/10;
}
if(temp==s)
printf("armstrong no.");
else
printf("not armstrong no.");
}
