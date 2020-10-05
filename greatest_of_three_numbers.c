#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER THE VALUE OF a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
    if (a > c)
        {
            printf("a is the greatest among three \n");
        }
    else
        {
            printf("b is the greatest among three \n");
        }
    }
    else if (b > c)
       {
           printf("b is the greatest among three \n");
       }
    else
         {
    printf("c is the greatest among three \n");
         }

        return 0;
}
