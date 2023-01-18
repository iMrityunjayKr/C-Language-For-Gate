// Program to find binary of any decimal using recursion
#include <stdio.h>
void f(int n)
{
    if (n == 1 || n == 0)
    {
        printf("%d", n);

        return;
    }
    else
    {
        f(n / 2);
        printf("%d", n % 2);
    }
}
void main()
{
    int a;
    printf("Enter the Number");
    scanf("%d", &a);
    f(a);
}