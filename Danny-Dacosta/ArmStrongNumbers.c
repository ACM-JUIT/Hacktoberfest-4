#include <stdio.h>

int main()
{
    int t1,t2;
    printf("Enter start and end of range");
    scanf("%d %d",&t1,&t2);
    printf("The Armstrong Numbers are: ");
    for (int i=t1;i<=t2;i++)
    {
        int copy=i,sum=0;
        while(copy)
        {int d=copy%10;
            sum+=d*d*d;
            copy/=10;
        }if(sum==i)printf("%d ",i);
    }

    return 0;
}
