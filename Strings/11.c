#include <stdio.h>
#include <string.h>
int main()
{
    char *P = "pan\0kaj";
    int i;
    i = strlen(P);
    printf("%d", i);
}