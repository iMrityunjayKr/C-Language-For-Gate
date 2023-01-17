//Programgs ti find perfect number.
#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for (i=1;i<n ;i++){
        if (n%i==0){
            // i is a factor of n
            sum=sum+i;
        }

    }
    if (sum==n){
        
        printf("Perfect No");
        }
        else{
            printf("Not a Perfect No");
        }
;}