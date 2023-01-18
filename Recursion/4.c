// changing program 3 a bit
/* What happens when we do a little changes?
The f(n-1) run everytime and before printf will
execute f(n-1) calls a new function and because of which prinft
 waits for that function to complete itself but that function call
 anotther function. So printf of
 f(1) will execute first and the f(2) and so on...
 */
#include <stdio.h>
void f(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        f(n - 1);
        printf("%d\n", n);
    }
}
void main()
{
    int a;
    printf("Enter the Number");
    scanf("%d", &a);
    f(a);
}