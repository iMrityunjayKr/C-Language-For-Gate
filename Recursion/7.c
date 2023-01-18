// Program to find any power of any number where a,b>0
#include <stdio.h>
int f(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        return a * f(a, b - 1);
    }
}
void main()
{
    int a, b;
    printf("Enter the base");
    scanf("%d", &a);
    printf("Enter the power");
    scanf("%d", &b);

    printf("The required no id %d: ", f(a, b));
}
