#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=4,k,l;
    for(i=1;i<=n;i++){
        for(j=1;j<=3*i-1;j++){
            printf("* ");
        }
        printf("\n");
        if(k==n)
        break;
        for(k=1;k<=i;k++){
            for(l=1;l<=i;l++){
                printf("* ");
            }
            printf("\n");
        }
    }
}