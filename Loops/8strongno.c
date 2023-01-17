#include<stdio.h>
void main()
{
    int n, last, i, a, prod;
    printf("Enter the number: ");
    scanf("%d", &n);
    a = n;
    int sum = 0;
    while (n != 0) {
        last = n % 10;
        n = n / 10;
        prod = 1;
        if (last != 0) {
            for (i = 1; i <= last; i++) {
                prod = prod * i;
            }
            sum = sum + prod;
        }
    }
    if (sum == a) {
        printf("The number %d is a strong number", a);
    } else {
        printf("The number %d is not a strong number", a);
    }
}
