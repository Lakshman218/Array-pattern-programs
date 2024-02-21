//character pattern
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5;
    char p=65;              // make 69 and p-- to prnt e,dd,ccc
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",p);
        }
        p++;                   // make p+=2 to prnt a,cc,eee
        printf("\n");
    }
}