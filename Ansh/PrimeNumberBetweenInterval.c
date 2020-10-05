/* This program is written to find out prime numbers between two intervals(entered by the user) 
   Written by Ansh Agrawal
   Date : 28/09/2020
*/
#include<stdio.h>
int main()
{
    int start,end;
    int i,j,flag;
    scanf("%d %d", &start, &end);
    for(i=start; i<=end; i++)
    {
        for(j=2 ; j<=i/2 ; j++)
        {
            if(i%j==0)
            {
                flag=2;
                break;
            }
            else
                flag=1;
        }
        if(flag==1)
        printf("%d ", i);
    }
    return 0;
}
