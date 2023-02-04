#include<stdio.h>
int main()
{
    char name[10]="Pankaj";
    printf("%s\n",name);
    printf("%s\n",name+1);
    printf("%s\n",name+3);
    //name="Neeraj";---error kyuki array name ek constandt hota hai
   
    return 0;
}