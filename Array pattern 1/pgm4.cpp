#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=6;
    for(i=n;i>=1;i-=2){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n* \n");
    }
}