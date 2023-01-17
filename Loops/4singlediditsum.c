#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    if(n%9==0)
    printf("The sum is 9");
    else
    printf("%d",n%9);
}