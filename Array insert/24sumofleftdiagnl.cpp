#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[50][50];
    int i,j,n,m,sum=0;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    m=n;
    for ( i = 0; i < n; i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            //m=n;
        }
    }
    printf("The matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("% 4d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        m=m-1;
        for(j=0;j<n;j++){
            if(j==m){
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of left diagonal is");
    printf("\n%d",sum);

}