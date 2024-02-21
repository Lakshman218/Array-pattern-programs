//1,11,121,1331
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=4,s;
    for(i=1;i<=n;i++){
        for(s=i;s<=n;s++){
            printf(" ");
        }
        int x=1;
        for(j=1;j<=i;j++){
            printf("%d ",x);
            x = x * (i - j) / j;
        }
        printf("\n");
    }
}