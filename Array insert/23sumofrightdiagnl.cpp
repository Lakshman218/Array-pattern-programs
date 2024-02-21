#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[50][50];
    int i,j,n,sum=0;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i==j) 
            sum=sum+a[i][j];
            
        }
    }
    printf("The matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("% 4d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("sum of right diagonal is\n");
    printf("%d",sum);

    

}