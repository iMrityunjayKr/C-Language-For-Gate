#include<stdio.h>
#include<string.h>
int main()
{
    char arr[20]="Pankaj";
    char arr2[]="sharma";
    strcat(arr,arr2);
    printf("%s",arr);
    printf("\n%s",arr2);
    return 0;
}