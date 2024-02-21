#include<stdio.h>
int main(){
    int i,j,k,l,n=4;;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=5;j++){
                printf("*");
            }
        }
        else{
            for(j=1;j<=3;j++){
                printf("*");
            }
        }
        if(i==n)
        break;
        printf("\n");
        for(k=1;k<=i;k++){
            for(l=1;l<=i;l++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}