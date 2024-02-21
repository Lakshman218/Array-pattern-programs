// hollow rhombus
#include<stdio.h>
int main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(j==1||i==n)
                printf("*");
            else
                printf(" ");
        }
        for(j=i;j<=n;j++){
            if(i==1||j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        
    }
}