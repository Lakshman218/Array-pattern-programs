// blank square
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=6,m=20;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}