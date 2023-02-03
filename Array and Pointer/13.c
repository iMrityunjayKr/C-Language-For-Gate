#include <stdio.h>
void sum(int *, int);
int main()
{
    int a[4] = {10, 20, 30, 40};
    sum(a, 4);
   }

void sum(int *P,int n)
{
   int s=0;
    for(int i=0;i<n;i++)
    s=s+P[i];
    printf("%d",s);
}
