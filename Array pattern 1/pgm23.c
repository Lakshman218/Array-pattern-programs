// hollow right angle
#include<stdio.h>
#include<stdlib.h>
int main (){
    int i,j,n=5,m=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i+j==n+1||j==n||i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}