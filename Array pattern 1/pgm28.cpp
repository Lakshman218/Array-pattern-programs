//diamond character pattern
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n=5;
    //char p=65;    to prnt a,bc,def    
                  
    for(i=1;i<=n;i++){
        char p=65; 
        for(j=i;j<=n;j++){
           printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c",p);
            p++;
        }
                     
        printf("\n");
    }
    for(i=n;i>=1;i--){
        char p=65;
        for(j=i;j<=n;j++){
           printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c",p);
            p++;
        }
                     
        printf("\n");
    }
}