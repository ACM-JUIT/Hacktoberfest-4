#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, i, j, mul;
    printf ("Enter the number whose multiplication table is needed: ");
    scanf ("%d", &n);
    printf ("Enter the limit: ");
    scanf ("%d", &j);
    
    if (n>0 && n<=20)
    for (i=1; i<=j; i++)
    {
        mul=n*i;
        printf ("%d * %d = %d\n", n, i, mul);
    }
    else
        printf ("Outside the range");
    return 0;
}
