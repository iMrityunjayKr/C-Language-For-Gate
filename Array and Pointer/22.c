//Think Like a Compiler
#include<stdio.h>
int main()
{
    void *p;
    int a=25;
    p=&a;// assignment state mein void pointer error nhi deta hai
    
    printf("%d",*(int*)p);//Type casting 


}