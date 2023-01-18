// Program to count no of digit using recursion for positive number
#include<stdio.h>
int f(int n){
    if(n<=9)
    return 1;
    else
    return 1+f(n/10);
}
void main()
{
    int a;
    printf("Enter the Number");
    scanf("%d", &a);
    printf("The total no of digit is %d: ", f(a));
}
