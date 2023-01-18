#include <stdio.h>
void f(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        f(n - 1);
        printf("%d\n", n);
        f(n - 1);
        printf("%d\n", n);
    }
}
void main()
{
    int a;
    printf("Enter the Number");
    scanf("%d", &a);
    f(a);
}