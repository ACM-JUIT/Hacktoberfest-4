#include <stdio.h>
int mult(int num)
{

    for (int i = 1; i <= 10; i++)
        printf("%d X %d = %d\n", num, i, num * i);
}
int main()
{
    int n;
    printf("Enter the number of which you want to print table of\n");
    scanf("%d", &n);
    mult(n);
    return 0;
}