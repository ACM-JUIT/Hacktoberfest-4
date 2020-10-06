#include<stdio.h>

int main()
{    double a, b, c;

    printf("Enter 3 numbers:-> ");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c)
    {
        if(b >= c)
        {
           printf("%d is the 2nd largest number\n", b);
        }
        else
        {
            printf("%d is the 2nd largest number\n", c);
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            printf("%d is the 2nd largest number\n",a);
        }
        else
        {
            printf("%d is the 2nd largest number\n",c);
        }
    }

   else if(a >= b)
    {
        printf("%d is the 2nd largest number\n", a);
    }
    else
    {
        printf("%d is the 2nd largest number\n", b);
    }
    return 0;
}
