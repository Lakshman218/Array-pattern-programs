// mirror triangle
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5,s;
    for(i=1;i<=n;i++){
        for(s=1;s<i;s++){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--){
        for(s=1;s<i;s++){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}