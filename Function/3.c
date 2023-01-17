#include<stdio.h>
void h(){
    printf("1");
}
void g(){
    printf("2");
    h();
    printf("3");
}
void f(){
    printf("4");
    g();
    printf("5");
}
void main(){
    f();
    g();
    h();
    f();
}