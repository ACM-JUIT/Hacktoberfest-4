#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int start, end, i, flag;
    
    printf("Enter the start of the series of prime numbers:\n");
    scanf("%d", &start);
    printf("Enter the end of the series of prime numbers:\n");
    scanf("%d", &end);

    while (start < end)
    // loop will continue till this condition becomes false.
    {
        flag = 0;
        for (i = 2; i <= start / 2; ++i)
        {
            if (start % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d,", start);
        }
        ++start;        // for incrementing the number from the starting number after the end of every iteration.
    }
    return 0;
}
