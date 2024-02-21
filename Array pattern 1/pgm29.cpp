//character pattern
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5;
    char p,k=69;   

    for(i=1;i<=n;i++){
        p=k;
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("%c",p);
            p--;
        }
        k--;            
        printf("\n");
    }
}