#include<stdio.h>

int main()
{
    int n, sum= 0, i;
    printf("enter the length of array");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum= sum+a[i];
    }
    printf("sum of elements is: %d", sum);
    return 0;
}
