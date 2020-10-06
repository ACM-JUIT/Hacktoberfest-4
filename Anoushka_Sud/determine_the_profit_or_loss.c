#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the cost price: ");
    scanf("%d",&a);
    printf("enter the selling price: ");
    scanf("%d",&b);
    int p,l;
    p=b-a;
    l=a-b;
    if(a<b)
    {
        printf("profit = %d",p);
    }
    else
    {
        printf("loss = %d",l);
    }
    return 0;
}
