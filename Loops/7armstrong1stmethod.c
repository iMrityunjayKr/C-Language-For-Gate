#include<stdio.h>
void main ()
{
    int n,a,sum,last;
    printf("Enter the number");
    scanf("%d",&n);
    a=n; // save kr lo number baad se no zero ho jayenga 
    sum=0;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum=sum+(last*last*last);
    }
    if (sum==a)
    printf("The number %d is armstrong Number",a);
    else
    {
         printf("The number %d is not armstrong Number",a);
    }


}