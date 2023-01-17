#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no of rows");
    scanf("%d",&n);
    for (int row=1;row<=n;row++)
    {
        for (int col=1; col<=n+1-row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}