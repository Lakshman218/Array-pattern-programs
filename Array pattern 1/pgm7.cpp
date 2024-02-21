#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=3,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=5*i;j++){
            printf("* ");
        }
        //printf("\n");
        if(i==n)
        break;
        for(k=1;k<=i*3;k++){
                printf("\n* ");
        }
        printf("\n");
    }
}