#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=3,k,l;
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*i)-1;j++){
            printf("* ");
        }
        printf("\n");
        for(k=1;k<=i;k++){
            for(l=1;l<=i;l++){
                printf("* ");
            }
            printf("\n");
        }
    }
}