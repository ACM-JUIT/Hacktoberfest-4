#include <stdio.h>
int main()
{
   //fibonacci series
    int i,sum;
    int a=0,b=1;
    printf("%d,%d,",a,b);
    for(i=3;i<10;i++)
    {
        sum=a+b;
        printf("%d,",sum);
        a=b;
        b=sum;

    }
    return 0;
}    
    
