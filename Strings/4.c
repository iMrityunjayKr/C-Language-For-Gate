#include<stdio.h>
int main()
{
    char name[10]="Pankaj";
    printf("%c\n",*name);
    printf("%c\n",*(name+1));
    printf("%c\n",*(name+3));
   
    return 0;
}