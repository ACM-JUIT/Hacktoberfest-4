#include<stdio.h>
int main()
{
   
   int ar[3][3],i ,j ;
   
   for(i=0; i<3; i++) 
   {
      for(j=0;j<3;j++)
      {
         printf("Enter value for ar[%d][%d]:", i, j);
         scanf("%d", &ar[i][j]);
      }
   }
   
   printf("2D array elements:\n");
   for(i=0; i<3; i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ", ar[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   
   printf("Transpose of 2D array elements:\n");
   for(i=0; i<3; i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d ", ar[j][i]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}




















