#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[5],i,n,k=0;
   for(i=0;i<5;i++)
   {
     printf("enter the no: ");
     scanf("%d",&a[i]);

   }
   printf("enter the no. you want to search: ");
   scanf("%d",&n);
   for(i=0;i<=5;i++)
   {
       if(a[i]==n)
        k++;
   }
   if(k>0)
   printf("found %d times ",k);
   else
   printf("not found");

    return 0;
}
