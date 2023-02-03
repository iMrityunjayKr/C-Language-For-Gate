//Think Like a Compiler
#include<stdio.h>
int main()
{
    void *p;
    int a=25;
    p=&a;// assignment state mein void pointer error nhi deta hai
    
    printf("%d",*(int*)p);/* error because void poniter mein int 
    ka value print krvana chah rhe hai isiliye typecasting krta*/


}