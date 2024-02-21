#include<stdio.h>
int main(){
    int i,j,n=5,s;
    for(i=1;i<=n;i++){
        for(s=i;s<=n;s++){
            printf(" ");
        }
        for(j=1;j<=i-1;j++){
            if(j==1||i==n)
            printf("*");
            else
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i==n||j==i)
            printf("*");
            else
            printf(" ");
        }
        
        printf("\n");
        
    }
}