#include<stdio.h>
int main()
{
    char *ptr="Pankaj";
    printf("%c\n",*(ptr+1));
    printf("%c\n",*(ptr));
    printf("%c\n",*(ptr+3));
   
    return 0;
}