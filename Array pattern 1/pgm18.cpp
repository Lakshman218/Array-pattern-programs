//hollow manal
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=6;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            if(j==i||j==n||i==1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            if(j==i||j==n||i==1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    
}