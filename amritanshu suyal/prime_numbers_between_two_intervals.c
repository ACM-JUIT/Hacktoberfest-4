#include <stdio.h>
int main() {
   int firstinterval, secondinterval,  i, a;
   printf("Enter two intervals: ");
   scanf("%d %d", &firstinterval, &secondinterval);
   printf("Prime numbers between %d and %d are: ",firstinterval, secondinterval);
   while (firstinterval < secondinterval) {
      a = 0;
      if (firstinterval <= 1) {
         ++firstinterval;
         continue;
      }
      for (i = 2; i <= firstinterval / 2; ++i) {
          if (firstinterval % i == 0) {
            a = 1;
            break;
          }
      }


      if (a == 0)
         printf("%d ", firstinterval);
      ++firstinterval;
   }

   return 0;
}
