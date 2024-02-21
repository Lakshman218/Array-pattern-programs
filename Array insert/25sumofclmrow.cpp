#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[50][50],aclm[10],arow[10];
    int i,j,n;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
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
        arow[i]=0;
        for(j=0;j<n;j++){
            arow[i]=arow[i]+a[i][j];
        }
    }
    for(i=0;i<n;i++){
        aclm[i]=0;
        for(j=0;j<n;j++){
            aclm[i]=aclm[i]+a[j][i];
        }
    }
    printf("\nThe sum of matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("% 4d\t",a[i][j]);
        }
        printf("% 8d\t",arow[i]);
        printf("\n");    
    }
    printf("\n");
        for(j=0;j<n;j++){
            printf("% 4d",aclm[j]);
        }
    printf("\n\n");

}