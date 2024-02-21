#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5,p=1,k;
    for(i=1,k=n;i<=n;i++,k--){
        p=k;
        for(j=i,p=1;j<=n;j++,p++){
            printf("%d ",p);
        }
        for(j=1;j<=i-1;j++){
            printf("  ");
        }
        for(j=1;j<=i-1;j++){
            printf("  ");
        }
       
        for(j=i;j<=n;j++){
            
            printf("%d ",p--);
            
        }
        printf("\n");
        
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=i;j<=n-1;j++){
            printf("  ");
        }
        for(j=i;j<=n-1;j++){
            printf("  ");
        }
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}

//j=n;j>=i-1;j--,p--