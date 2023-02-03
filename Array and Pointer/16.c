#include<stdio.h>
int main()
{
    int a=300;
    char *p;
    p=(char *)&a;
    printf("%d",*p);
}