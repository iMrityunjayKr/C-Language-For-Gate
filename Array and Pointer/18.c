// FUNCTION POINTER
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
void main()
{
    int (*P)(int,int);
    P=add;
    int result=(*P)(10,30);
    printf("%d",result);
}