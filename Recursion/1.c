#include <stdio.h>
void fun(int n)
{
    if (n == 1)
    {
        printf("Pankaj\n");
        return;
    }
    else
    {
        printf("Pankaj\n");
        fun(n - 1);
    }}
    void main()
    {
        int a;
        printf("Enter the Number");
        scanf("%d", &a);
        fun(a);
    }
