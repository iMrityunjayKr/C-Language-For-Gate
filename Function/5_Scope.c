#include<stdio.h>
void main(){
    int a=10;
    ++a;{
        int a=12;
        ++a;
        printf("%d",a);
    }
    ++a;
    printf("%d",a);
}