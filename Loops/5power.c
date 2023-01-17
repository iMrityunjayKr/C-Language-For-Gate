#include<stdio.h>
void main ()
{
    int a,i,b,prod=1;
    printf("Enter the base");
    scanf("%d",&a);
    printf("Enter the power");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    prod=prod*a;
    printf("The answer is %d",prod);
}