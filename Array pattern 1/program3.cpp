#include<stdio.h>
int main(){
    int i,j,n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            
            if(j%2==0 && j!=i)
            {
                printf("%d",j);
            }
            printf("%c",64+j);
        }
        printf("\n");
    }
}