#include<stdio.h>
int main()
{
    char name[10]="Pankaj";
    printf("%s\n",name);
    name[0]='u';
    printf("%s",name);
    return 0;
}