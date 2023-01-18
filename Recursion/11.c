// Tower of Hanoi
#include<stdio.h>
void TOH(int n, char source, char dest, char aux){
    if(n==1){
        printf("%c---->%c\n",source,dest);
    }
    else{
    TOH(n-1,source,aux,dest);
    printf("%c---->%c\n",source,dest);
    TOH(n-1,aux,dest,source);
    
    }
}
void main()
{
    int a;
    printf("Enter the no of disc : ")
    ;
    scanf("%d",&a);
    TOH(a,'A','C','B');
}