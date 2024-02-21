//character pattern
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5;
    //char p=65;    to prnt a,bc,def    
                  
    for(i=1;i<=n;i++){
        char p=65;
        for(j=1;j<=i;j++){
            printf("%c",p);
            p+=1; 
        }
                     
        printf("\n");
    }
}