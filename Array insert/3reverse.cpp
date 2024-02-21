#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,a[10];
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter numbers ");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Entered values are ");
    for ( i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\nReverse values are ");
    for (i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    
    
    
    
}