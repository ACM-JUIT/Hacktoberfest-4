#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 9

int main(int argc, char *argv[])
{
    int n;
    char v[argc - 1][20];
    int u[argc - 1];
    int max, y, g = 0;
    int t = 0;
    int temp = 0;

//End of initializations or declarations

    if (argc > MAX + 1)
    {
        printf("Maximum of 9 Candidates can appear!\n");
        return 1;
    }
    if (argc == 1)
    {
        printf("Need atleast 1 Candidate to continue!\n");
        return 1;
    }

//End of function to check the number of candidates

    for (int f = 0; f <= argc - 1; f++)
    {
        u[f] = 0;
    }

//End of initialization of votes of a person linked with their string location

    printf("Number of Voters:");
    scanf("%i", &n);

//End of collection of voters

    for (int i = 0; i < n ; i++)
    {
        printf("Vote:");
        scanf("%s", v[i]);
        //scaned string(vote)

        for (int j = 1; j < argc ; j++)
        {
            int x = strcmp(v[i], argv[j]);
            if (x == 0)
            {
                u[j]++;
                g++;
                temp = u[j];
                //g is to increment when given vote is accurate
            }
        }
        //end of statement to increment value linked to candidate
        if (g == 0)
        {
            printf("Invalid Vote\n");
        }
        g = 0;

    }

    //End of function to calculate votes from user input

    max = u[1];
    y = 1;
    //end of initialization of max votes as candidate 1


    for (int i = 2; i < argc ; i++)
    {
        if (u[i] > max)
        {
            max = u[i];
            y = i;
        }
        else if (u[i] == max)
        {
            t = u[i];
        }
    }

//end of calculation of maximum votes or tie



    if ((max == t)&&(max != 0))
    {
        printf("It's a Tie!\n");
    }

    else if (max == 0)
    {
        printf("Umm did we mess up the names again?\n");
    }

    else
    {
        printf("%s won!\n", argv[y]);
    }


//end of results

}