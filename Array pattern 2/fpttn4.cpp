#include<stdio.h>
int main(){
    int i,j,k,l,n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i*3-1;j++){
            printf("*");
        }
        printf("\n");
        if(i==n)
        break;
        for(k=1;k<=i;k++){
            for(l=1;l<=i;l++){
                printf("*");
            }
            printf("\n");
        }
    }
}