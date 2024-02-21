// sum
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n,sum=0,a[10];
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter numbers ");
    for ( i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("\nsum of values are ");
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}