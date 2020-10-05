#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int num, digit, rev_num = 0, digits = 0, a;
    scanf("%d", &num);
    a = num;
    while (a != 0)
    {
        digits++; //digits =3
        a = a / 10;
    }
    while (num != 0)
    {

        digit = num % 10;
        rev_num = rev_num + (digit * (pow(10, digits - 1)));
        num/=10;
        --digits;
    }
    printf("%d", rev_num);
    return 0;
}
    
   