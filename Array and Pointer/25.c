#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    int i,*p;
    printf("Enter the no. of elements");
    scanf("%d",&N);
    p= malloc(sizeof(int)*N);
    if(p!=NULL)
    {
        for(i=0;i<N;i++)
        scanf("%d",p+i);
        printf("\n");
        for(i=0;i<N;i++)
        //printf("\n");
        printf("%d\n",*(p+i));

    }
}