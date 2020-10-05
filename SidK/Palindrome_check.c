#include <stdio.h>
int main() {
   int a,reverse=0,c;
   scanf("%d",&a);
   c=a;
   for(;c>0;){
    int b=c%10;
    reverse = reverse*10+b;
    c=c/10;
   }
  if(a==reverse){
  printf("%d is a plindrome",a);}
  else{
  printf("%d is not a palindrome",a);}

   return 0;
}
