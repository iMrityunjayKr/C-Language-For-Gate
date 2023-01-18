// Recusion to find the sum of digits of a given number
#include <stdio.h>
int sum_of_digit(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n % 10 + sum_of_digit(n / 10);
    }
}
int main()
{
    int a;
    printf("Enter the Number");
    scanf("%d", &a);
    printf("The sum of digit is : %d ",sum_of_digit(a));
}