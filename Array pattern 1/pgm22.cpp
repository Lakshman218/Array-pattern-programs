// square
#include<stdio.h>
#include<stdlib.h>
int main (){
    int i,j,n=5,m=10;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==j||i+j==n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}