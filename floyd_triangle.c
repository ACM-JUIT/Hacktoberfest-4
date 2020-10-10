#include<stdio.h>
void main()
{
    int i,j,n,a=1;
    printf("enter a number of rows:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
     for(i=1;i<=j;i++)
     {
           printf("%d ",a);
           a++;
     }
     printf("\n");
    }
    return 0;
}
