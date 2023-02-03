#include <stdio.h>
void main()
{
    int a[4] = {10, 20, 30, 40};
    
    printf("%u\n", a[1]);
    printf("%u\n", 1[a]);
    printf("%u\n", *(a+1));
    //printf("%u\n", &a+1);
    printf("%u\n", *(1+a));

}