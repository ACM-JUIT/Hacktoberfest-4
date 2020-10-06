#include<stdio.h>
int main()
{

    int i, n, a = 0, b = 1, z;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
        {
        printf("%d, ", a);
        z = a + b;
        a =b;
        b = z;
    }

    return 0;
}
