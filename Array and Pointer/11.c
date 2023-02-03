#include <stdio.h>
void fun(int *);
void main()
{
    int a[4] = {10, 20, 30, 40};
    fun(a);
    printf("%d  %d", a[0], a[1]);
}

void fun(int *P)
{
    *P++;
}
