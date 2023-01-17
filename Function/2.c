#include <stdio.h>
int fun();
void main()
{
    int x;
    x =fun(10);
    printf("%d", x);
}
int  fun(int a)
{
    int y = 2;
    return y * a;
}
