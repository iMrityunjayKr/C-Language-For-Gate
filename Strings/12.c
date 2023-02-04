#include <stdio.h>
unsigned int mystrlen(const char *str)
{unsigned int count=0;
    while( (*str)!='\0'){
        count ++;
        str++;
    }return count;
}
int main()
{
    char *P = "pan\0kaj";
    int i;
    i = mystrlen(P);
    printf("%d", i);
}