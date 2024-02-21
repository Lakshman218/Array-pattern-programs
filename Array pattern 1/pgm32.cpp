// character and number
#include<stdio.h>
int main(){
    int i,j,n=3;
    char p;
    for(i=1,p=65;i<=n;i++,p++){
        for(j=1;j<=(i*2)-1;j++){
            printf("%c ",p);
        }
        if(i==n)
        break;
        printf("\n");
        for(j=1;j<=i*2;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}