#include <stdio.h>
void fun(int *);
int main()
{
    int a[2][3] = {10, 20, 30, 40,50,60};
    fun(a[0]);
    printf("%d  %d  %d",a[0][0],a[0][1],a[0][2]);
   }

void fun(int *P)
{
   ++P;
   *P++;
   *++P;
   P--;
   *P=100;
}
