#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no of rows");
    scanf("%d",&n);
    for (int row=1;row<=n;row++)
    {
        for (int space=1; space<=n-row;space++)
        {
            printf(" ");
        }
        for (int star=1; star<=2*row-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
}