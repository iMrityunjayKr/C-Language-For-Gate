#include<stdio.h>
int mul(int,int);
void main()
{
    int a=10,b=20,ans;
    ans=mul(a,b);
    printf("%d",ans);
}
int mul(int x, int y)
{
    int result;
    result=x*y;
    return result;
}