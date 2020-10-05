#include<stdio.h>
int main(){
        int a,b,c,p;
        scanf("%d",&a);
        scanf("%d",&b);
        for(p=a;p<=b;p++){
            for(c=2;c<p;c++){
                if(p%c==0){
                    break;}
                    else if(c==p-1){
                        printf(" %d",p);
                    }

            }

        }
        return 0;}
