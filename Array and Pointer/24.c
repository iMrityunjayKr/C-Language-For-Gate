#include<stdio.h>
int * fun()
{
    static int a=24;
    return &a;
}
void main()
{
    int *p;
    fun();
}