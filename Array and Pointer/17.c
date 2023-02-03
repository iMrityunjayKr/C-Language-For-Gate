#include<stdio.h>
int main()
{
    int a=160;
    char *p;
    p=(char *)&a;
    printf("%d",*p);
}