#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,r = 0;
    scanf("%d", &a);
    int d = a;
    while(a!=0){
        r = r * 10 + a%10;
        a = a/10;
    }
    if (r == d)
        printf("YES");
    else
        printf("NO");
    return 0;
}
