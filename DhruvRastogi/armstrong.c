
#include <stdio.h>

int main()
{  int i,j,sum,r,m,k;
for(i=1;1<=500;i++)
{ k=i;
m=k;
sum=0;
 while(k>0)

 {  r=k%10;
 sum=sum+(r*r*r);
 k=k/10;
 }
 if(sum==m)
    printf("%d is armstrong\n",m);}

    return 0;
}
