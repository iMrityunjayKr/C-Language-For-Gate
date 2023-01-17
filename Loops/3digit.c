#include<stdio.h>
void main ()
{
    int n,count=0;
    
    printf("Enter the value of n");
    scanf("%d",&n);
    if(n==0)
    count=1;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The total no of digits are : %d",count);
       
}