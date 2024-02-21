//character pattern
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5;
    char k,p;
    for(i=1,k=65;i<=n;i++,k++){
        
        for(j=i;j<=n;j++){
            printf("  ");
        }
        p=65;
        for(j=1;j<i;j++){
            printf("%c ",p);
            p++;
        } 
        p=k;
        for(j=1;j<=i;j++){
            printf("%c ",p);
            p--;
        }          
        printf("\n");
    }
}