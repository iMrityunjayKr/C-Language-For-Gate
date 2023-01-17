#include<stdio.h>
void main(){
    register int b=25;
    int a=10;
    ++a;{
        ++a;
        printf("%d",a);
    }
    ++a;
    printf("%d\n",a);
    printf("%d",b);
}