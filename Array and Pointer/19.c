// FUNCTION POINTER
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int prod(int a, int b)
{
    return a * b;
}
void main()
{
    int (*P)(int,int);
    P=add;
    printf("%d\n",(*P)(10,30));
     P=sub;
    printf("%d\n",(*P)(10,30));
     P=prod;
    printf("%d\n",(*P)(10,30));
}