//Fibonacci Series
#include<stdio.h>

int f(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        return f(n-1) + f(n-2);
    }
}

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("The fibonacci number at position %d is: %d\n", a, f(a));
    return 0;
}
