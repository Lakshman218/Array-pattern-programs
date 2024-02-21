#include<stdio.h>
int main()
{
    int i,j,n=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*3;j++){
            printf("*");
        }
        printf("\n");
        for(j=1;j<=2;j++){
            printf("*\n");
        }
        //printf("\n");
    }
}