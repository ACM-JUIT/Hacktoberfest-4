// Creating a X pattern inside a rectangle or a square//
#include <stdio.h>
int main()
{
  int n;
  printf("Enter value of n \n");
  scanf("%d", &n);
  for(int i = 1; i<=n; i++)
  {
      for(int j = 1; j<=n; j++)
      {
          if(i==1||i==n||j==1||j==n||i==j||(i+j)==(n+1))
             printf("* ");
          else
             printf("  ");
      }
      printf("\n");
  }
  return 0;
}
