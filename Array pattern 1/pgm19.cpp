// butterfly in number
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,p,n=5;
    for(i=1;i<=n-1;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=i;j<=n-1;j++){
            printf("  ");
        }
        
        for(j=i;j<=n-1;j++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    // second
    for(i=1;i<=n;i++){
        p=1;
        for(j=i;j<=n;j++){
            printf("%d ",p);
            p++;
        }
        for(j=1;j<=i-1;j++){
            printf("  ");
        }
        for(j=1;j<=i-1;j++){
            printf("  ");
        }
        for(j=i,p=1;j<=n;j++,p++){
            printf("%d ",p);
        }
        printf("\n");
    }
}