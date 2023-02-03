#include <stdio.h>
void main()
{
    int a[2][3] = {10, 20, 30, 40,50,60};
    
    // printf("%u\n", a);
    // printf("%u\n", &a);
    printf("%u\n", a+1);
    printf("%u\n", &a+1);
    printf("%u\n", a[0]+1);

}