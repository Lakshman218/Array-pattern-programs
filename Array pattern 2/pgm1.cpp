// number pattern traingle
#include<stdio.h>
int main(){
    int i,j,n=5,p,s,k,h;
    for(i=1,h=i;i<=n;i++){
        for(s=i;s<=n;s++){
            printf("  ");
        }
        p=1;
        for(j=1;j<=i;j++){
            printf("%d ",p);
            p++;
        }
        p=i-1 ;
        for(k=1;k<=i-1;k++){
            printf("%d ",p);
            p--;
        }
        printf("\n");
    }
}