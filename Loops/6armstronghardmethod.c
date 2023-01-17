#include<stdio.h>
void main ()
{
    int a,b,n,last,count=0, sum;
     printf("Enter the number");
    scanf("%d",&n);
    b=a=n;
    while(n!=0){n=n/10;
    count++;}
    while(a!=0){
        last=a%10;
        a=a/10;
        int prod=1;
        for(int i=1;i<=count;i++)
        prod=prod*last;
        sum=sum+prod;
    }
    if(sum==b)
    printf("%d is armstrong No",b);
    else
     printf("%d is not armstrong No",b);
}