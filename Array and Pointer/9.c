#include<stdio.h>
void main()
{
    int a[4]={10,20,30,40};
    int *P=a;
    printf("%d",*P);
    printf("%d",*(P+1));
    printf("%d",*(P+2));
    printf("%d",*(P+3));
}