// Program to find octal of for any positive decimal number
#include <stdio.h>
void f(int n)
{
    if (n <= 7){
     printf("%d", n);
        return ;}
    else
    {
        f(n / 8);
         
       printf("%d", n % 8);
    }
}
void main()
{
    int a;
        printf("Enter the Number");
        scanf("%d", &a);
        f(a);
        
}