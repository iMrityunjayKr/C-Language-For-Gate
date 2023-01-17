#include<stdio.h>
void main()
{
    int n,i,prod,a,b;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    for (n=a;n<=b;n++){
        prod=1;
        for (i=1;i<=n;i++)
        prod=prod*i;
        printf("Factorial of %d is %d\n",n,prod);}
    
}