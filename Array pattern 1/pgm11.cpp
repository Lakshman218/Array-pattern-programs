#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            printf("*");
        }
        for(j=n;j>=i;j--){
            printf("  ");
        }
        for(j=n;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }

// opposite

    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            printf("*");
        }
        for(j=n;j>=i;j--){
            printf("  ");
        }
        for(j=n;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}