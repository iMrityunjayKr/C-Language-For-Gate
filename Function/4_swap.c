#include<stdio.h>
void swap (int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After Swapping\n");
    printf("a=%d, b=%d\n",x,y);
}
void main ()
{
    int a=20,b=40;
    printf("Before Swapping\n");
    printf("a=%d, b=%d\n",a,b);
    swap(a,b);


}