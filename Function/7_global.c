#include<stdio.h>
void f1(){
    extern int x;
    ++x;
    printf("%d",x);
}
int x=10;
void f2(){
    ++x;
    printf("%d",x);
}
void main()
{
    f1();
    f2();
    ++x;
    printf("%d",x);
}