#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n==1){
        printf("%d is not prime\n",n);
    }
    for (i=2;i<n;i++){
        if (n%i==0){
            //i is a factor of n
            printf("%d is not prime\n",n);
            break;
        }
    }
    if(i==n){
        printf("%d is prime\n",n);
            }
    //         // Another method for the same
    //         int count=0;
    //         for (int i=2;i<n;i++)
    //         {
    //             if (n%i==0){
    //                 count ++;
    //             }}

    // if (count==0){
    //  printf("%d is prime \n",n);}
    //     else{
    //         printf("%d is not prime \n",n);
    //             }                   

            }
